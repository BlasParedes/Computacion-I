#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    int n,periodo = 0,j;
    float capitalPendiente, Cuota, i, band;
    printf("Ingrese capital pendiente: ");
    scanf("%f",&capitalPendiente);
    printf("\nIngrese interes (%): ");
    scanf("%f",&i); 
    printf("\nIngrese numero de periodos: ");
    scanf("%d",&n);
    Cuota = capitalPendiente*( ((i/100)*pow(1 + (i/100),n))/(pow(1 + (i/100),n)-1));
    printf("\nCap Pend|Couta    |Int|Amort Cap|Cap Pendiente al final");
    for(j=0;j<n;j++){
        band = capitalPendiente - (Cuota-(capitalPendiente*(i/100)));             
        printf("\n%.2f|%.2f|%.2f|%.2f|%.2f",capitalPendiente,Cuota,capitalPendiente*(i/100),Cuota-(capitalPendiente*(i/100)),band); 
        capitalPendiente = band;                
    }
    printf("\n");
    system("PAUSE");
    return EXIT_SUCCESS;
}
