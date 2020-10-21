#include <stdio.h>
int main(){
  int a;
  int b;
  printf("please input a number\n");
  scanf("%d",&a);
  if(a<0)
    a=-a;
  printf("The number is %d\n",a);
  return 0;
}