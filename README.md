
#  Desafio Ransomware

Um programa de linha de comando para criptografar e descriptografar arquivos utilizando a cifra de césar.
Caso não tenha o executavel na pasta /teste, abra a pasta /src e digite:
```
make
```
Para executar o programa, você pode entrar na pasta do binario /test, e executar esse código:
```
./ransomware [nome_do_arquivo] [chave] [tipo]
```
onde:
- [nome_do_arquivo] = nome do arquivo que vai ser criptografado.
- [chave] = um valor inteiro.
- [tipo] = "-d" ou "dcript" para descriptografar, "-c" ou "cript" para criptografia.
