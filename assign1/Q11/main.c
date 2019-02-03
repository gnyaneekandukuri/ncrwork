

#include <stdio.h>

int main()
{
    int num,sum=0,count=1;
    scanf("%d",&num);
    int b=num;
    
   // printf("%d",count);
    while(num){
        int a = num%10;
         sum = sum + a;
         num = num/10;
        
    }
    
        printf("%d",sum);
   
    

    return 0;
}
