#include <stdio.h>
#include <math.h>
int main(){
	int t;
	double a;
	double b;
	double c;
	double d;
	double distance;
	printf("������������\n���������꣬�м��ÿո�ֿ�\n");
	scanf("%d",&t);
	while(t--){
		scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
		distance=sqrt((a-c)*(a-c)+(b-d)*(b-d));
		printf("%lf\n",distance);
	} 
	return 0;
}
