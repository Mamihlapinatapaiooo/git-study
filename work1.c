#include<stdio.h>
#include<math.h>
double func(double val){
	//test sample: return pow(val,2);
	return pow(val,3) - val -1;
}

double my_abs(double a){
	return a>0?a:(-a);
}

int main(){
	double a,b,e;
	scanf("%lf %lf %lf",&a,&b,&e);
	int k = 1,flag = 1;
	double m = (a+b)/2;
	
	while(func(m) != 0){
		flag = 0;
		while(my_abs(a-b)/2 >= e){
			if(func(a) * func(m) > 0){
				a = m;
				printf("a = %lf,b = %lf,",a,b);
			}else{
				b = m;
				printf("a = %lf,b = %lf,",a,b);
			}
			m = (a+b)/2;
			k++;
			break;
		}
		printf("m = %lf, k = %d\n",m,k);
		if(my_abs(a-b)/2 < e) break;
	}
	if(flag)
		printf("m = %lf, k = %d",m,k);
}
