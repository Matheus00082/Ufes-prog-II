#include "esfera_utils.h"
#include <stdio.h>

int main() {
   float R;
   scanf("%f",&R);
   printf("%f\n",calcula_volume(R));
   printf("%f\n",calcula_area(R));
    return 0;
}
