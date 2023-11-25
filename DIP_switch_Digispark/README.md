# DIP Switch Digispark

## Peças
- Digispark ATtiny85
- Interruptor DIP de 3 posições

## Ferramentas
- Equipamento de solda
- Algo pontudo e afiado (pinça pontiaguda)
- Multímetro (recomendado)

## Esquemático
<p align="center">
    <img src="/images/esquema_switch.png" width="580" />

*Nota: A orientação do interruptor DIP não importa.*

Existem 6 pinos IO, por que não usar uma chave DIP de 6 posições?
Os pinos P3 e P4 estão conectados às linhas de dados USB necessárias para a comunicação do “teclado” com o Computador. 

O P1 está conectado ao LED vermelho do Digispark. Para otimizar o desempenho, sugiro remover o LED ou cortar a conexão. No meu caso, optei por cortar a conexão do ânodo do LED com o ATtiny85.

<p align="center">
    <img src="/images/foto_led.png" width="580" />

## Programação

Cada pino do switch tem a capacidade de representar um código a ser executado. As combinações possíveis dos pinos são as seguintes: nenhum pino levantado, apenas o pino 1 levantado, apenas o pino 2 levantado, apenas o pino 3 levantado, pino 1 e pino 2 levantados simultaneamente, pino 1 e pino 3 levantados simultaneamente, pino 2 e pino 3 levantados simultaneamente, e, por fim, todos os pinos (pino 1, pino 2 e pino 3) levantados simultaneamente. Em resumo, há um total de 8 combinações possíveis de códigos.
