#include <stdio.h>
#include <math.h>
int main(){

int i,p1,p2,n;
double h,hf=0,a,v,dm,seno,coss,altura,Voy,Vox;
double g=9.80665,pi=3.14159;


while((scanf("%lf", &h))!=EOF){
scanf("%d %d", &p1, &p2);
scanf("%d", &n);

for(i=0; i<n; i++){
    scanf("%lf %lf", &a, &v);
    //seno e cosseno do ângulo
    seno=sin((a*pi)/180.0);
    coss=cos((a*pi)/180.0);
    //altura máxima
    altura= ((v*seno)*(v*seno))/(2*g);
    //altura total
    hf=h+altura;
    //velocidade
    Voy=v*seno;
    Vox=v*coss;
    //distância máxima
    dm=(((Vox*Voy)/g)+(Vox*(sqrt((2*hf)/g))));

    if((dm>=p1)&&(dm<=p2)){
         printf("%.5lf -> DUCK\n",dm);
    }else{
         printf("%.5lf -> NUCK\n",dm);
    }
}
}

    return 0;
}