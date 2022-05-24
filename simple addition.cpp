#include<stdio.h>
long long f(long long);
void s(long long,long long);
long long sum;
int main(){
	long long p,q;
	while(scanf("%lld %lld",&p,&q),p>=0||q>=0){
		sum=0;
		s(p,q);
		printf("%lld\n",sum);	
	}
	return 0;
}
long long f(long long n){
	if(n%10)return n%10;
	else if(n==0)return 0;
	else return f(n/10);
	
}
void s(long long p,long long q){
	int i;
	if(q-p<9){
		for(i=p;i<=q;i++){
		sum += f(i);
		
	}return ;	
	}
	while(p%10){
		sum+=f(p);
		p++;
	}
	while(q%10){
		sum+=f(q);
		q--;
	}
	sum+=45*(q-p)/10;
	s(p/10,q/10);
}