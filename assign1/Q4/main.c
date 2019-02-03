

#include <stdio.h>

int main()
{
    int num,sum=0,count=1;
    scanf("%d",&num);
    int b=num;
     int d=num;
    while(d){
        count++;
        d = d/10;
    }
   // printf("%d",count);
    while(num){
        int a = num%10;
         sum = sum + pow(a,count-1);
         num = num/10;
        
    }
    if(sum == b){
        printf("armstrong ");
    }
    else{
        printf("not armstrong ");
    }

    return 0;
}
