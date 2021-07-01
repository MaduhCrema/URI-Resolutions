#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
char p[1050],letra;
int i,tam;

while(1){
//leitura das palavras
    fgets(p,1050,stdin);
//condição de parada
    if(p[0]=='*'){
        break;
    }
    tam=strlen(p);//tamanho da string
    letra=tolower(p[0]);//pega a primeira letra
for(i=1; i<tam; i++){
 if (p[i-1] == ' ' && tolower(p[i]) != letra){
                break;
  }     
}
//saída
  if(i==tam){
      printf("Y\n");
  }else{
      printf("N\n");
  }
   
}



    return 0;
}