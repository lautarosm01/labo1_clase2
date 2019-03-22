#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int numeroMax;
    int numeroMin;
    int flag = 0;

    do{
    printf("Ingrese un numero: ");
    scanf("%d",&numero);

    if(numero>numeroMax && flag== 0){
        numeroMax = numero;

    }
    if(numero<numeroMin && flag == 0){
        numeroMin = numero;
        flag = 1;
    }


    }while (numero != -1);

    printf("El numero maximo es %d", numeroMax);
    printf("\nEl numero minimo es %d", numeroMin);
}
