#include <stdio.h>
int main(){
    int n,i,j;
    float m[12][12],total=0;
    char op;

    scanf("%d", &n);
     scanf("%s", &op);

for(i=0; i<12; i++){
    for(j=0; j<12; j++){
        scanf("%f",&m[i][j]);

        if(i==n){
            total+=m[n][j];
        
     }
  }

}
    if(op='S'){
         printf("%.1f\n",total);
    }else if(op='M'){
          printf("%.1f\n",total/12);
    }
   

    return 0;
}