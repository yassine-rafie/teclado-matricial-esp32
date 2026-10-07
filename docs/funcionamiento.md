# Funcionamiento

El ESP32 lee las teclas del teclado matricial y almacena los dígitos introducidos.

Al pulsar `#`, compara la entrada con el código configurado.

### Código correcto

Se genera un tono de 2000 Hz durante exactamente 1500 ms.

### Código incorrecto

El LED rojo y el buzzer se activan en una secuencia de tres pitidos separados por pausas.

### Teclas

- `0-9`: introducir código.
- `#`: comprobar.
- `*`: borrar.
- `A-D`: sin función en esta versión.

Para cambiar la contraseña, editar:

```cpp
const char codigoCorrecto[] = "2580";
```
