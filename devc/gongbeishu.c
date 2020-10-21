#include <stdio.h>
int main(){
	int a;
	int b;
	int c;
	scanf("输入正整数：使用空格键隔开%d%d\n",&a,&b);
	if (b%a!=0)
		c=a*b;
	c=b;
	printf("%d和%d最小公倍数为%d\n",a,b,c);
	return 0;
}
