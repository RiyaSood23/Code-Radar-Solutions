// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[20];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
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
