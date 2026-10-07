#include <Keypad.h>

const byte FILAS = 4;
const byte COLUMNAS = 4;

char teclas[FILAS][COLUMNAS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte pinesFilas[FILAS] = {19, 18, 5, 17};
byte pinesColumnas[COLUMNAS] = {16, 4, 0, 2};

Keypad teclado = Keypad(makeKeymap(teclas), pinesFilas, pinesColumnas, FILAS, COLUMNAS);

const int PIN_BUZZER = 23;
const int PIN_LED_ROJO = 15;
const char codigoCorrecto[] = "2580";
String codigoIntroducido = "";

void pitidoCorrecto() {
  digitalWrite(PIN_LED_ROJO, LOW);
  tone(PIN_BUZZER, 2000);
  delay(1500);
  noTone(PIN_BUZZER);
}

void errorCodigo() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(PIN_LED_ROJO, HIGH);
    tone(PIN_BUZZER, 1000);
    delay(200);
    noTone(PIN_BUZZER);
    digitalWrite(PIN_LED_ROJO, LOW);
    delay(200);
  }
}

void comprobarCodigo() {
  if (codigoIntroducido == codigoCorrecto) {
    pitidoCorrecto();
  } else {
    errorCodigo();
  }
  codigoIntroducido = "";
}

void setup() {
  pinMode(PIN_BUZZER, OUTPUT);
  pinMode(PIN_LED_ROJO, OUTPUT);
  digitalWrite(PIN_LED_ROJO, LOW);
  noTone(PIN_BUZZER);
}

void loop() {
  char tecla = teclado.getKey();

  if (tecla) {
    if (tecla == '#') {
      comprobarCodigo();
    } else if (tecla == '*') {
      codigoIntroducido = "";
    } else if (tecla >= '0' && tecla <= '9') {
      codigoIntroducido += tecla;
    }
  }
}
