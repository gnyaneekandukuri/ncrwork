
#include <stdio.h>

int main()
{
    int a,k,sum =0;
    printf("palindromw or not");
    scanf("%d",&a);
    k = a;
   
    while(k){
        int rev =k%10;
        sum = sum*10 + rev;
        k =k/10;
    }
    if(a == sum){
        printf("palindrome");
    }
    else{
         printf(" not palindrome");
    }
    return 0;
}
