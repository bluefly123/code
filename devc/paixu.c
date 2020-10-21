#include <stdio.h>
int main(){
	int a;
	int b;
	int c;
	int temp;
	int t=2;
	while(t--){
		scanf("%d%d%d",&a,&b,&c);
		if(a>b){
			temp=a;
			a=b;
			b=temp;
				}
	
		if(b>c){
		temp=b;
		b=c;
		c=temp;
			}
	printf("%d%d%d",a,b,c);
}
	return 0;
	
	
}
