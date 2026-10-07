# Teclado Matricial con ESP32

Sistema de control de acceso basado en ESP32, teclado matricial 4x4, buzzer y LED rojo.

## Funcionamiento

- Introducir el código mediante el teclado.
- Pulsar `#` para comprobarlo.
- Código correcto: pitido continuo de 1,5 segundos.
- Código incorrecto: 3 pitidos intercalados y LED rojo.
- `*` borra la entrada actual.

Código de ejemplo: `2580`.

## Componentes

- ESP32
- Teclado matricial 4x4
- Buzzer
- LED rojo
- Resistencia de 220 Ω para el LED
- Protoboard
- Cables Dupont
- Cable USB

## Conexiones

| Componente | ESP32 |
|---|---:|
| R1 teclado | GPIO 19 |
| R2 teclado | GPIO 18 |
| R3 teclado | GPIO 5 |
| R4 teclado | GPIO 17 |
| C1 teclado | GPIO 16 |
| C2 teclado | GPIO 4 |
| C3 teclado | GPIO 0 |
| C4 teclado | GPIO 2 |
| Buzzer | GPIO 23 |
| LED rojo | GPIO 15 |

El LED debe conectarse con una resistencia en serie.

## Librería

Instalar `Keypad` desde el gestor de bibliotecas del Arduino IDE.

## Estructura

```text
teclado-matricial-esp32/
├── README.md
├── LICENSE
├── .gitignore
├── docs/
│   ├── funcionamiento.md
│   └── GITHUB.md
└── src/
    └── teclado_matricial_esp32.ino
```

## Posibles mejoras

- Pantalla OLED/LCD.
- Servo para simular una cerradura.
- Bloqueo después de varios intentos fallidos.
- Cambio de contraseña.
- Registro de intentos mediante Wi-Fi.

## Autor

Yassine Rafie
