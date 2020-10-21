#include <stdio.h>
int main(){
  int year;
  int month;
  int data;
  int i;
  int mon[13]={31,28,31,30,31,30,31,31,30,31,30,31};
  int sum;
  while ((scanf("%d/%d/%d",&year,&month,&data))!=EOF){
    sum=0;
    for(i=1;i<=month-1;i++);
    sum+=mon[i];
    sum+=data;
    if((year%400==0||(year%4==0&&year%100!=0))&&month>=3)
    sum++;
    printf("%d\n",sum);

  }
  return 0;
}