#include <stdio.h>
#include <string.h>

struct crianca{
    char nome[30];
    int valor,ant,prox;
};
int main(){
    while(1){
    int n,i,j;
    struct crianca acamp[100];

    scanf("%d", &n);
        if(n==0){
                break;
            }
    for(i=0; i<n; i++){
        
        scanf("%s %d", acamp[i].nome, &acamp[i].valor);
        
        acamp[i].ant = ((i - 1) % n + n) % n;
        acamp[i].prox = (i + 1) % n;
    }

    i = 0;
        while (n > 1) {
            int valor = acamp[i].valor;

            if (valor % 2) {
                for (j = 0; j < valor; ++j)
                    i = acamp[i].prox;
            } else {
                for (j = 0; j < valor; ++j)
                    i = acamp[i].ant;
            }

            acamp[acamp[i].ant].prox = acamp[i].prox;
            acamp[acamp[i].prox].ant = acamp[i].ant;

            --n;
        }

         i= acamp[i].prox;

        printf("Vencedor(a): %s\n", acamp[i].nome);
} 




    return 0;
}