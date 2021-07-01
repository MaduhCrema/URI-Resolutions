#include <stdio.h>
int main(){
    int x,i,soma;
    //leitura do x
    scanf("%d", &x);
    //laço de repetição até x=0
    while(x!=0){
        //definindo valores
        soma=0;
        i=0;
    //laço de repetição ate  i=5
     while(i!=5){   
         //se o x for par já adiciona na soma
        if(x%2==0){
             soma+=x;
             x+=1;
            i++;
        // se não for par ajusta e depois adiciona na soma
        }else{
            x+=1;
            soma+=x;
            x+=1;
            i++;
        }

    }
    //saída de dados
        printf("%d\n", soma);
        //leitur anovamente do x para a próxima soma
         scanf("%d", &x);

    }

    return 0;
}