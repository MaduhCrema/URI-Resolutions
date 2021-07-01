#include <stdio.h>
int main(){
    int n,pa,pb,i,tempo;
    double g1,g2,pc;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d %d", &pa, &pb);
        scanf("%lf %lf", &g1, &g2);

    tempo=0;
    
    while(pa <= pb && tempo<101){
        
        pa+=(int)((pa*g1)/100);
        pb+=(int)((pb*g2)/100);
        tempo++;
        
    }
        if (tempo>100){
            printf("Mais de 1 seculo.\n");
        }else{
        printf("%d anos.\n",tempo);
        }
        
    }


    return 0;
}