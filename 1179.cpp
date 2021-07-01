#include <stdio.h>
int main(){
    int v[15],P[5],I[5],i,l,j=0,k=0,cont1=0,cont2=0;
//leitura dos 15 numeros
    for(i=0; i<15;i++){
        scanf("%d",&v[i]);    
//analisando se é par ou impar   
        //par 
        if(v[i]%2==0){
                P[j]=v[i];
                j++;
                cont1++;
//condição se o vetor encher
                if(j==5){
                for(j=0; j<5; j++){
                printf("par[%d] = %d\n",j,P[j]);
                
                cont1=0;
                
            }
                for(l=0; l<5; l++){
                    P[l]=0;
                }
                j=0;
            }
                   
          
        }else{
            //impar
                I[k]=v[i];
                k++;
                cont2++;
//condição se o vetor encher
                if(k==5){
                for(k=0; k<5; k++){
                 printf("impar[%d] = %d\n",k,I[k]);
                 
                 cont2=0;
            }
                 for(l=0; l<5; l++){
                    I[l]=0;
                }
                k=0;
            }
                 
            }  

        
    }

    //saida do resto
    for(i=0; i<cont2;i++){
       printf("impar[%d] = %d\n",i,I[i]);
       
    }
    
     for(i=0; i<cont1;i++){
       printf("par[%d] = %d\n",i,P[i]);
       
    }

    return 0;
}