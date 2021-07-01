#include <stdio.h>
 unsigned long long  fat(int n){
   long long int vfat;
  if ( n <= 1 ){
    //Caso base: fatorial de n <= 1 retorna 1
    return (1);
  }else{
    //Chamada recursiva
    vfat = n * fat(n - 1);

    return (vfat);
  }
}
int main(){
    long long int a,b;

    while(scanf("%lld %lld", &a, &b)!=EOF){
     unsigned long long soma;
        soma=fat(a)+fat(b);
        printf("%llu\n",soma);
    }



    return 0;
}