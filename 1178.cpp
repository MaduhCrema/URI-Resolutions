#include <stdio.h>
int main(){
    double v[100];
    int i;

    scanf("%lf",&v[0]);

    for(i=1; i<100; i++){

        v[i]=(v[i-1]/2);

    }

    for(i=0; i<100; i++){

        printf("N[%d] = %.4lf\n",i,v[i]);

    }

    return 0;
}