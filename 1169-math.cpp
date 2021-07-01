#include <stdio.h>
int main(){

    int n,x,i,j;
    unsigned long long int graos,kg;

    scanf("%d", &n);

for(i=0; i<n; i++){
    scanf("%d", &x);
    graos=1;
    for(j=1; j<=x; j++){      
        graos=graos*2;
    }
    if(x==64){
        printf("1537228672809129 kg\n");
    }else{
    kg=graos/12000;
        printf("%lld kg\n", kg);
    }    
}

    return 0;
}