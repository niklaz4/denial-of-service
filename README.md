<h1>Projeto de Negação de Serviço (DoS)</h1>

<p>Este projeto consiste em uma demonstração de ataques de negação de serviço (DoS) utilizando protocolos FTP e HTTP. O objetivo é educar e demonstrar como funcionam esses ataques, ressaltando a importância da segurança em redes e aplicações.</p>

<h2>Objetivo</h2>
<p>O objetivo deste projeto é entender os princípios básicos dos ataques DoS e como eles podem ser realizados. Este projeto é destinado apenas para fins educacionais e não deve ser utilizado para realizar ataques em redes ou sistemas sem autorização.</p>

<h2>Tecnologias Utilizadas</h2>
<ul>
    <li><strong>Linguagem:</strong> C</li>
    <li><strong>Protocolos:</strong> FTP e HTTP</li>
    <li><strong>Sistema Operacional:</strong> Kali Linux</li>
</ul>

<h2>Instruções de Uso</h2>
<ol>
    <li>Clone o repositório:</li>
    <pre><code>git clone https://github.com/niklaz4/denial-of-service.git</code></pre>

    <li>Acesse o diretório do projeto:</li>
    <pre><code>cd denial-of-service</code></pre>

    <li>Compile os códigos:</li>
    <pre><code>gcc dos.c -o dos</code></pre>
    <pre><code>gcc http_dos.c -o http_dos</code></pre>

    <li>Execute o ataque de negação de serviço:</li>
    <pre><code>./dos</code></pre>
    <pre><code>./http_dos</code></pre>
</ol>

<h2>Avisos</h2>
<ul>
    <li>Este projeto é estritamente para fins educacionais.</li>
    <li>Não execute esses scripts em redes ou servidores sem autorização explícita.</li>
    <li>O uso indevido de informações sobre segurança pode resultar em ações legais.</li>
    <li>Deve-se alterar obrigatoriamente o endereço IP.</li>
</ul>

</body>
</html>
