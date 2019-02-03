#include <stdio.h>

int main()
{
    char a[80];
    int count =0;
    int space=0,tab =0,digit= 0,alpha =0;
  printf ("Enter a string pf characters");
 scanf("%[^\n]s ",a);
 while(count < 80){
   
     if(a[count] == ' '){
         space++;
     }
     if(a[count] == '\t'){
         tab++;
     }
     if(a[count]>='a' && a[count]<='z' || a[count]>='A' && a[count]<='Z'){
         alpha++;
     }
    if(a[count]>='0' && a[count] <= '9'){
        digit++;
    }
      count++;
     
 }
  printf("%s \n",a);
 printf("spaces %d : tab %d : alpha %d :digit %d",space,tab,alpha,digit);



 

    return 0;
}
