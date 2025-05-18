#include <Servo.h>

Servo esc; // Cria objeto do tipo Servo para controlar o ESC

void setup() {
  esc.attach(9); // Conecta o sinal do ESC ao pino digital 9
  Serial.begin(9600);

  Serial.println("=== CALIBRAÇÃO DO ESC ===");
  Serial.println("Desconecte a bateria do ESC.");
  Serial.println("Pressione qualquer tecla para continuar...");
  while (!Serial.available()); // Espera o usuário pressionar algo
  Serial.read(); // Limpa o buffer

  esc.writeMicroseconds(2000); // Envia sinal de máxima aceleração
  Serial.println("Conecte a bateria do ESC agora!");
  Serial.println("Esperando beep de calibração...");
  delay(5000); // Aguarda tempo para o ESC reconhecer o sinal máximo

  esc.writeMicroseconds(1000); // Envia sinal de mínima aceleração
  Serial.println("Mínimo enviado. Aguarde beeps finais...");
  delay(5000);

  Serial.println("Calibração finalizada!");
}

void loop() {
  // Após calibrar, você pode usar o loop para testar
  // Exemplo: manter motor parado
  esc.writeMicroseconds(1000);
}
