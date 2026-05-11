#include <stdio.h>
#include <math.h> 

int main() {
    double n1, n2, n3, media;

   9
    printf("Inserisci tre numeri: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

 
    media = (n1 + n2 + n3) / 3.0;

   
    printf("\nMedia (2 decimali): %.2lf", media);
    printf("\nMedia (arrotondata): %.0lf\n", media);

   
    
    double areaQ = media * media;
    double areaC = 3.14 * media * media;
    double areaT = (pow(media, 2) * sqrt(3)) / 4;


    printf("\nArea Quadrato:   Con decimali: %.2lf | Arrotondata: %.0lf\n", areaQ, areaQ);
    printf("\nArea Cerchio:    Con decimali: %.2lf | Arrotondata: %.0lf\n", areaC, areaC);
    printf("\nArea Triangolo:  Con decimali: %.2lf | Arrotondata: %.0lf\n", areaT, areaT);

    return 0;
}
