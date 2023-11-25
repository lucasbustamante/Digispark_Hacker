# Digispark Hacker

<p align="center">
    <img src="/images/DH.png" width="180" />
    
 
## DigiSpark Attiny85
Para pessoas que não podem comprar um RubberDucky, o DigiSpark Attiny85 é a solução para seus problemas. Com ele é possível usá-lo como HID graças ao "DigiKeyboard.h", ele pode ser usado como teclado para enviar pressionamentos de tecla ao computador, que pode ser usado para pregar arquivos pessoais e criar um backdoor no sistema.

## O que você encontra aqui?
Eu criei este repositório para compartilhar meus códigos úteis para o DigiSpark Attiny85. Todos os códigos são testados no Attiny85 e criados no Arduino IDE.
    
## Códigos
>[Ladrão de senhas Wi-Fi](https://github.com/lucasbustamante/Digispark_Hacker/tree/master/payloads/ladrao_de_senha_wifi)
    
## Como configurar seu DigiSpark (windows)
Antes de começar usar seu DigiSpark, você precisa fazer algumas configurações, para isso siga este [TUTORIAL](https://embarcados.com.br/instalando-o-attiny85-no-windows/)

## Como configurar seu DigiSpark no Mac

O processo é o mesmo do Windows, mas caso ocorram falhas, execute as seguintes linhas no terminal:

```bash
$ cd ~/Library/Arduino15/packages/arduino/tools/avr-gcc
$ mv 4.8.1-arduino5 orig.4.8.1
$ ln -s ~/Library/Arduino15/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7 4.8.1-arduino5
```

    
 
# AVISO
Todos os softwares/scripts/aplicativos/etc neste repositório são fornecidos sem qualquer tipo de garantia. O uso desses softwares/scripts/aplicativos/etc é inteiramente por sua conta e risco. O criador desses softwares/scripts/aplicativos/etc não é responsável por qualquer dano direto ou indireto à sua propriedade ou, de outra pessoa
