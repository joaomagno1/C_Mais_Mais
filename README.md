
1.	su – ifsp
2.	/home/ifsp/
 sudo mkdir /home/ifsp/arquivos
sudo chown ifsp:ifsp /home/ifsp/arquivos
sudo chmod 2775 /home/ifsp/arquivos
3.	Mkdir /home/ifsp/arquivos/trabalhos
Chmod 777 /home/ifsp/arquivos/trabalhos
4.	cd arquivos/trabalhos
nano
^O
disciplinas.txt
Estrutura de Dados
Programação para Web 1
Engenharia de Software: Construção
Sistemas Operacionais
Gerencia de Projetos
Banco de Dados 1
^X
5.	cd /etc/
cp passwd /home/ifsp/arquivos
6.	cd /home/ifsp/arquivos
mv passwd arquivos_usuarios
7.	cd /home/ifsp/arquivos
mkdir configurações
8.	cp /etc/*.conf /home /ifsp/arquivos/configurações
9.	chown ifsp *.conf
10.	chown ifsp:ifsp *.conf
11.	cd /home/ifsp/arquivos/
cat disciplinas.txt
12.	nano disciplinas.txt
^X 
	S
	Enter
13.	sudo adduser  joao
aluno123
aluno123
su – joao
mkdir /home/joao/publico
chmod 755 /home/joao/publico
chmod 700 /home/joao

sudo adduser  maria
aluno123
aluno123
su – maria
mkdir /home/maria/public
chmod 755 /home/maria/public
chmod 700 /home/maria
14.	cp /home/ifsp/arquivos/disciplinas.txt /home/joao/publico
cp /home/ifsp/arquivos/disciplinas.txt /home/maria/public
15.	mkdir /home/joao/publico/piadas.txt
