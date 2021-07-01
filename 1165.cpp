#include <stdio.h>

int main(){
    int n,x,i,j,s;
    
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        
        scanf("%d",&x);
        
         s=0;
         
            for(j=2; j< x; j++){
                
                if(x%j==0){
                    s++;
                }
            }
            
           if (s==0)
           {
               printf("%d eh primo\n",x);
           }
           else
           {
               printf("%d nao eh primo\n",x);
           }
        
        
    }

    return 0;
}