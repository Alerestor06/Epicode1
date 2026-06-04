#include <stdio.h>
#include <math.h>

int main () {

    float D;

    printf("Immetti il valore D: ");
    scanf("%f", &D);

    float quadrato = D*D;
    float raggio=D/2;
    float Cerchio = 3.14 * raggio * raggio;
    float TriangoloE = (sqrt(3)/4) *(D*D);
  
    printf("Area del Quadrato: %f\n", quadrato);
    printf("Area del Cerchio: %f\n", Cerchio);
    printf("Area del TriangoloE: %f\n", TriangoloE);
    return 0;
}