#include <stdio.h>
#include <string.h>
int main(){
    int n,i,j,soma=0;
    char v[1110];

scanf("%d", &n);

    for(i=0; i<n; i++){
    scanf("%s", &v);
        soma=0;
    for(j=0; j<strlen(v); j++){
        if(v[j]=='1'){
            soma+=2;
        }else  if(v[j]=='2'){
            soma+=5;
        }else  if(v[j]=='3'){
            soma+=5;
        }else  if(v[j]=='4'){
            soma+=4;
        }else  if(v[j]=='5'){
            soma+=5;
        }else  if(v[j]=='6'){
            soma+=6;
        }else  if(v[j]=='7'){
            soma+=3;
        }else  if(v[j]=='8'){
            soma+=7;
        }else  if(v[j]=='9'){
            soma+=6;
        }else  if(v[j]=='0'){
            soma+=6;
        }
    }

    printf("%d leds\n", soma);
}

    return 0;
}