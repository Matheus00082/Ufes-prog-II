/* 
 * File:   revisao4.c
 * Author: matheus
 * Created on 20 de agosto de 2023, 18:42
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
    int decimal, octal, aux = 0, temp = 0;

    scanf("%d", &decimal);

    aux = (decimal % 8);
    decimal = (decimal - aux);

    while (1) {
        if (decimal >= 8) {
            aux += (decimal % 8) * pow(10, temp);
            decimal = decimal / 8;
        } else {
            aux += decimal * pow(10, temp);
            break;
        }
        temp++;
    }

    printf("%d", aux);

    return 0;
}

