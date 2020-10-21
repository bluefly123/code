#include <stdio.h>
int main(){
	int a;
	int b;
	int c;
	int n;
	int i;
	double number;
	while(1){
		a=0;
		b=0;
		c=0;
		scanf("%d",&n);
		if(n==0)
			break;
			for(i=0;i<n;i++){
				scanf("%lf",&number);
				if (number<0)
					a++;
				else if(number==0)
					b++;
				else
					c++;
				
			}
			printf("%d%d%d\n",a,b,c);
	}
	return 0;
} 
