# aeropendulum_controle_1
Repositório criado para armazenar os arquivos de execução do projeto realizados no Simulink.

# Link do Vídeo de Simulação do sistema em tempo real:

https://drive.google.com/file/d/115QuqW_GPYlJrqTUiPOuQeMOshX0PMsi/view?usp=drive_link

## Como usar:

**0- Por medida de segurança, mantenha uma distância mínima de 40 cm entre a base e quaisquer objetos ou pessoas.**


**1-Abra o Matlab em seu computador, e conecte o cabo USB-B ao arduino**
- Preferenciamente execute como Administrador (caso use sistema operacional Windows)
  

**2-No Matlab, abra o Simulink:**

![image](https://github.com/user-attachments/assets/b6787cd7-42f3-4611-b1b6-e428fc09ace1)


**3-No Simulink, faça o upload do arquivo "aeropendulo_malha_fechada.slx"**

![image](https://github.com/user-attachments/assets/652aaac1-3e76-4f1a-98bf-8cd8366cb57d)



**4- Você verá o seguinde modelo com os blocos no Simulink:**

![image](https://github.com/user-attachments/assets/9d1ee070-7154-4a24-90e3-a85dd35aa998)



**5- Verifique se você tem o pacote de conexão com o Arduino Uno (seta vermelha):**

![image](https://github.com/user-attachments/assets/d68937c7-dcdb-48f2-a5a5-29529534cd2d)

- Caso contrário voce terá que adquirir o pacote para Arduino clicando na seta em Azul.
  


**6- Antes de rodar, é importante verificar no bloco "Ângulo de entrada" se o "Final Value" está setado inicialmente em 0,
pois com isso, fará com que o ESC inicie corretamente**

![image](https://github.com/user-attachments/assets/e9b08f13-77ab-4235-9ea7-16ccb1130f73)




**7- Feito esses passos anteriores, basta clicar em "Monitor & Tune" e esperar o tempo de compilação e envio do código para o Arduino:**

![image](https://github.com/user-attachments/assets/f4f90aed-b70d-43ac-bc7f-93605aa530cb)




**8- É EXTREMAMENTE importante esperar a mensagem "Connecting to Arduino Uno..." para então conectar a tomada da fonte chaveada 12V à tomada da rede.**

![image](https://github.com/user-attachments/assets/a88fd9a8-fd4e-458f-a292-4ce75ca38916)


![image](https://github.com/user-attachments/assets/2b765c1b-cdfa-4218-9461-27a0f5419165)




**9- Ao iniciar, você ouvirar 3 bips seguidos do ESC e ele deixará de bipar a cada segundo, o que significa que ele recebeu um sinal mínimo, 
que no nosso caso foi 0°, e com isso ele estará pronto para que você altere o STEP (angulo de entrada) na opção "Final Value" para o ângulo desejado**

![image](https://github.com/user-attachments/assets/99cf7b9c-6c89-4621-a52d-c34651f132cd)


![image](https://github.com/user-attachments/assets/fa3f6b34-ef4a-4aec-ab66-9bb879e31fdb)




**10- Alterando o "Final Value" para 60° e depois para 90°**

60°:
![Imagem do WhatsApp de 2025-05-18 à(s) 19 46 54_770d1f84](https://github.com/user-attachments/assets/6eee18c4-b75f-4e20-ae07-b9181b243d67)

90°:
![Imagem do WhatsApp de 2025-05-18 à(s) 19 47 52_eb5607a5](https://github.com/user-attachments/assets/36993d97-8f25-4591-ba66-21253585accf)



**11- Visualizando o gráfico da planta pelo Matlab:**
- Você poderá baixar os arquivos "entrada_30_graus.mat", "entrada_60_graus.mat" ou "entrada_85_graus.mat"
no Matlab para poder visualizar com melhor detalhamento os gráficos gerados.

- Segue um print do que você irá encontrar nesse arquivo .mat:

Print gerado com a entrada sendo 30° e voltando a 0° no intervalo de 35s:

![image](https://github.com/user-attachments/assets/edc59c79-7424-484f-87da-a0b351e1874b)




**12- Parando o sistema no Simulink:**
- Aconselho primeiramente clicar no bloco Step --> "Final Value" = 0 --> "Aplicar"

- Logo após pode clicar em parar:

![image](https://github.com/user-attachments/assets/19f9164f-e501-463d-a8fb-0d9f9e954da8)





