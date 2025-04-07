// Your code here...
#include <stdio.h>
int main(){
    int a[6] = {34,69,68,18,81,7};
    int i,j,temp;
    for(i=0;i<5;i++){
        for(j=0;j<5-i;j++){
            if(a[j]>a[j+1]){ 
                temp = a[j]; 
                a[j] = a[j+1];
                a[j+1] = temp;
            }}
        
      
        }

    
    for (i=0;i<6;i++){
    printf("%d ",a[i]);
   }
    printf("\n");
    
    return 0;}
