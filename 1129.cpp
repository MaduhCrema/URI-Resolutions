#include <stdio.h>
int fat(int n){
    int vfat;
  if ( n <= 1 ){
    //Caso base: fatorial de n <= 1 retorna 1
    return (1);
  }else{
    //Chamada recursiva
    vfat = n * fat(n - 1);

    return (vfat);
  }
}
int main()
{
    int a,i,num;

    scanf("%d", &a);

    for(i=0; i<a ;i++){
        scanf("%d", &num);
        fat(num);
        printf("%d",num);
        //printf("fib(%d) = %d calls = %d\n",num);
    }


    return 0;
}