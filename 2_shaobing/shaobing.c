#include <stdio.h>
int main(){
  int n;//一次容纳数
  int k;//烧饼总数
  int total;//热的次数
  int result;//分钟数
  while(scanf("%d%d",&n,&k)!=EOF){
    total=n*2;
    if(total<=k){
      printf("2\n");
      continue;

    }
    result=total/k;
    if(total%k!=0)
    result++;
    printf("%d\n",result);
  }
  return 0;
}