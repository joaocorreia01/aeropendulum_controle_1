# aeropendulum_controle_1
Repositório criado para armazenar os arquivos de execução do projeto realizados no Simulink

## Como usar:

**0- Por medida de segurança, mantenha uma distância mínima de 40 cm entre a base e quaisquer objetos ou pessoas.**


**1-Abra o Matlab em seu computador, e conecte o cabo USB-B ao arduino**
- Preferenciamente execute como Administrador (caso use sistema operacional Windows)
  

**2-No Matlab, abra o Simulink:**

![image](https://github.com/user-attachments/assets/b6787cd7-42f3-4611-b1b6-e428fc09ace1)


**3-No Simulink, faça o upload do arquivo "aeropendulo_malha_aberta.slx"**

![image](https://github.com/user-attachments/assets/652aaac1-3e76-4f1a-98bf-8cd8366cb57d)



**4- Você verá o seguinde modelo com os blocos no Simulink:**

![image](https://github.com/user-attachments/assets/8c6bf543-e294-42c6-949a-c43e5c3322cf)



**5- Verifique se você tem o pacote de conexão com o Arduino Uno (seta vermelha):**

![image](https://github.com/user-attachments/assets/e6ad0678-ef42-4f64-8afc-052a301acf3b)

- Caso contrário voce terá que adquirir o pacote para Arduino clicando na seta em Azul.
  


**6- Antes de rodar, é importante verificar no bloco "Ângulo de entrada" se o "Final Value" está setado inicialmente em 0,
pois com isso, fará com que o ESC inicie corretamente**

![image](https://github.com/user-attachments/assets/8f60f796-186c-4397-92e6-1779fb6e878d)



**7- Feito esses passos anteriores, basta clicar em "Monitor & Tune" e esperar o tempo de compilação e envio do código para o Arduino:**

![image](https://github.com/user-attachments/assets/1fc3ee82-4c7a-4603-9b12-073c740174a4)



**8- É EXTREMAMENTE importante esperar a mensagem "Connecting to Arduino Uno..." para então conectar a tomada da fonte chaveada 12V à tomada da rede.**

![image](https://github.com/user-attachments/assets/14cd017f-dab0-4eda-9325-a093bc9d0642)



**9- Ao iniciar, você ouvirar 3 bips seguidos do ESC e ele deixará de bipar a cada segundo, o que significa que ele recebeu um sinal mínimo, 
que no nosso caso foi 0°, e com isso ele estará pronto para que você altere o STEP para o ângulo desejado**

![image](https://github.com/user-attachments/assets/8aa85b59-ad54-46d4-bcbe-ea0275c5ae5c)



**10- Alterando o "Final Value" para 60° e depois para 90° :**

![Imagem do WhatsApp de 2025-05-12 à(s) 18 37 28_849f7058](https://github.com/user-attachments/assets/3adb4155-05d7-42e0-b2f1-64e39c18bd13)

![Imagem do WhatsApp de 2025-05-12 à(s) 18 36 27_9d6a71b1](https://github.com/user-attachments/assets/5c2856e4-4c70-4c0c-a847-8af1644225d2)

![Imagem do WhatsApp de 2025-05-12 à(s) 18 37 42_8e57fe5e](https://github.com/user-attachments/assets/7b2a719e-7ca4-4159-9a84-98f896a2ec5e)



**11- Visualizando o gráfico da planta pelo Matlab:**
- Você poderá baixar os arquivos "entrada_30_graus.mat", "entrada_60_graus.mat" ou "entrada_85_graus.mat"
no Matlab para poder visualizar com melhor detalhamento os gráficos gerados.

- Segue um print do que você irá encontrar nesse arquivo .mat:

Print gerado com a entrada sendo 30°:
![image](https://github.com/user-attachments/assets/7c449be9-8edc-4e11-a5ca-9154a526f229)


Arquivos para a entrega da planta em malha fechada, com a implementação do PID.
