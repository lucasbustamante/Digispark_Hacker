# Tutorial: Reinstalar o Bootloader do Digispark com Arduino Uno

Para reinstalar o bootloader do Digispark, você precisará dos seguintes materiais:

- Arduino Uno
- 1 capacitor de 10uF
- Alguns jumpers

Siga os passos abaixo:

1. **Montagem do Esquema Elétrico:**
   - Conecte o Arduino Uno, o capacitor de 10uF e os jumpers de acordo com o esquema elétrico da imagem abaixo.
     <p align="center">
    <img src="/ESQUEMA_BOOTLOADER_DIGISPARK.png" width="180" />

2. **Configuração no Arduino IDE:**
   - Abra o Arduino IDE (versão 1.6.11 foi utilizada neste exemplo).
   - Vá em `Arquivos > Exemplos > ArduinoISP > ArduinoISP`.
   - Selecione o Arduino Uno como a placa.
   - No programador, escolha "ArduinoISP".
   - Grave na porta à qual o Arduino Uno está conectado (por exemplo, COM5).
   - Compile para o Arduino Uno (desative o capacitor durante a compilação).
   - Após a compilação, ative o capacitor e altere o programador para "Arduino as ISP".

3. **Preparação dos Arquivos:**
   - Pegue os arquivos `AT85_Bootloader.hex` e `Burn_AT85_Bootloader.bat`.
   - Coloque-os na pasta raiz do seu Arduino.

4. **Edição do Arquivo Batch:**
   - Edite o arquivo `Burn_AT85_Bootloader.bat`.
   - Insira a porta à qual o seu Arduino está conectado.
   - Salve as alterações.

5. **Execução do Script:**
   - Execute o arquivo `Burn_AT85_Bootloader.bat` como administrador.

Com esses passos, o bootloader do Digispark será reinstalado com sucesso no seu dispositivo.
