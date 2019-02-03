#include <stdio.h>
int main()
{
  
  int op;
  printf("enter the operand ");
  scanf("%d", &op);
  int k = checkLsb(op);
  if(k == 0){
      printf("3 LSB bits are on \n");
  }
  if(k == 1){
        printf("3 LSB bits are not on \n");
  }
 int f =reversed(op);
printf("reversed number is %d \n",f);
rotate(op);
    return 0;
}
