#include <cstdlib>
#include <stdio.h>

int main(int argc, char *argv[])
{
    int n,n2,i,acum = 0,acumd = 0,cont = 0,ult;
    printf("Ingrese su numero: ");
    scanf("%d",&n);
    n2 = n;
    while( n > 1 ){
        cont++;   
        for(i=2;i<=n;i++){
            if( n%i == 0){
                if( i < 10 ){
                  acum += i;
                } 
                ult = i;
                n /= i;
                break;
            }
        }    
    }
    if( ult > 10){
       while( ult > 10 ){
            acum += ult%10;            
            ult /= 10;   
        }  
        acum += ult;
    }
    if(cont >= 2){
        while( n2 > 10 ){
            acumd += n2%10;
            n2 /= 10;
        }
        acumd += n2;
        if( acum == acumd ){
             printf("\nEste es un numero de Smith\n");
        }else{
             printf("\nEste NO es un numero de Smith\n");  
        }
    }else{
       printf("\nEste NO es un numero de Smith\n");   
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
