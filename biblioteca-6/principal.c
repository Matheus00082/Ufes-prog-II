#include <stdio.h>
#include "temperature_conversor.h"

int main() {
    float temperature;
    char from_scale, to_scale;

    scanf("%f %c %c", &temperature, &from_scale, &to_scale);

    float converted_temperature;

    if (from_scale == 'c') {
        if (to_scale == 'f') {
            converted_temperature = convert_temperature(temperature, convert_celsius_to_fahrenheit);
        } else if (to_scale == 'k') {
            converted_temperature = convert_temperature(temperature, convert_celsius_to_kelvin);
        }
    } else if (from_scale == 'f') {
        if (to_scale == 'c') {
            converted_temperature = convert_temperature(temperature, convert_fahrenheit_to_celsius);
        } else if (to_scale == 'k') {
            converted_temperature = convert_temperature(temperature, convert_fahrenheit_to_kelvin);
        }
    } else if (from_scale == 'k') {
        if (to_scale == 'c') {
            converted_temperature = convert_temperature(temperature, convert_kelvin_to_celsius);
        } else if (to_scale == 'f') {
            converted_temperature = convert_temperature(temperature, convert_kelvin_to_fahrenheit);
        }
    } else {
        printf("Escala de origem ou escala de destino inválida.\n");
        return 1;
    }

    printf("Temperatura: %.2f%c\n", converted_temperature, to_scale);

    return 0;
}