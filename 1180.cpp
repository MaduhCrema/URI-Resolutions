#include <stdio.h>
int main(){
    int n,i,menor=0,cont=0;

    scanf("%d", &n);

    int v[n];
    
     scanf("%d", &v[0]);
     menor=v[0];

    for(i=1; i<n; i++){

        scanf("%d", &v[i]);
        
        if(v[i]<menor){
            menor=v[i];
            cont=i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", cont);

    return 0;
}