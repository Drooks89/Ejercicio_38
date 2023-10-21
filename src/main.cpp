#include <Arduino.h>

int numeros[3][3];

void setup() {

  Serial.begin(9600); // Inicia la comunicación serial a 115200 baudios
  
}

void loop() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      Serial.print("Digite un número[");
      Serial.print(i);
      Serial.print("][");
      Serial.print(j);
      Serial.print("]: ");
      Serial.println("");
      while (!Serial.available()) {
        // Espera a que se ingrese un número por el monitor serial
      }
      numeros[i][j] = Serial.parseInt(); // Lee el número ingresado
    }
  }

  // Matriz original
  Serial.println("Matriz Original");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      Serial.print(numeros[i][j]);
      Serial.print(" ");
    }
    Serial.println();
  }

  // Matriz Transpuesta
  Serial.println("Matriz Transpuesta");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      Serial.print(numeros[j][i]);
      Serial.print(" ");
    }
    Serial.println();
  }

  
}