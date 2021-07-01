#include <stdio.h>
int main(){
    int n,i,x,y,soma;

    //leitura do n
    scanf("%d", &n);

    for(i=0; i<n; i++){
        //leitura de x e y
        scanf("%d %d", &x,&y);
        //definind valor da soma
        soma=0;
        //laço de repetição para o y
        do{
            //verificando se x é ímpar
                if(x%2!=0){
                    
                    soma=soma+x;
                    x=x+1;
                    y--;
                    //se não for impar, transforma em impar
                }else{
                    x=x+1;
                    soma=soma+x;
                    x=x+1;
                    y--;
                }      
         //condição de parada do while 
    }while(y!=0);
    //saída dos dados
        printf("%d\n",soma);
    }


    return 0;
}