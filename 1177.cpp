#include <stdio.h>
int main(){
    int n[1000],i,t;

    scanf("%d", &t);

    n[0]=0;

    for(i=1; i<100; i++){

         n[i]=n[i-1]+1;
        if(i%t==0){
            n[i]=0;
        }
    }

    for(i=0; i<100; i++){
        printf("N[%d] = %d\n",i,n[i]);
    }


    return 0;
}