

#include <stdio.h>

int main()
{
    int num,count=0 ;
    scanf("%d",&num);
    int k = num;
    while(k){
        count++;
        k =k>>1;
    }
    k =num;
    
    int arr[count];
    

    int i=0;
  
       while(k){
           if(k&1){
               arr[i] =1;
              
               k= k>>1;
                i++;
           }
           else{
               arr[i] = 0;
              
               k =k>>1;
                i++;
           }
           
       }
  
   for(int i=count-1;i>=0;i--){
       printf("%d",arr[i]);
   }
    return 0;
}
