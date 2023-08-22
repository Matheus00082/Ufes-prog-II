/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   newmain.c
 * Author: mvbsouza
 *
 * Created on August 17, 2023, 9:46 AM
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float X1, Y1, R1, x2, y2, r2;
    float dist;

    scanf("%f %f %f", &X1, &Y1, &R1);
    scanf("%f %f %f", &x2, &y2, &r2);

    dist = sqrt(pow((X1 - x2), 2) + pow((Y1 - y2), 2));

    if (dist <= R1 + r2) {
        printf("ACERTOU");
    } else {
        printf("ERROU");
    }

    return (EXIT_SUCCESS);
}

