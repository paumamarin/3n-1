#include <stdio.h>

using namespace std;



struct numero {
    int numero;
    int n_pasos;
};
int main()
{
    int primer_n;
    int ultimo_n;

    scanf("%d", &primer_n);
    fflush(stdin);
    scanf("%d", &ultimo_n);
    fflush(stdin);

    int resultado = solucion(primer_n, ultimo_n);
    printf("%d", resultado);
    return 0;
}
int solucion(int primero, int ultimo){

    int ronda_max = 0;

    for(primero; primero<=ultimo;primero++){
        int rondas = 0;
        int n = primero;
        while (n!= 0){
            if (n%2!=0){
                n = n*3+1;
                rondas ++;
            }
            else{
                n= n/2;
                rondas++;
            }
        }
        if (rondas>ronda_max){
            ronda_max = rondas;
        }
    }
    return ronda_max;
}
