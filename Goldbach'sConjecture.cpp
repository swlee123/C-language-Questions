#include<cmath>
#include<cstring>
#include<cstdlib>
#include<cstdio>
using namespace std;
bool u[1111111];
int su[1111111],num;
void pre(){
	int i,j,k;
	for(i=2;i<=1000000;i++)u[i]=true;
	for(i=2;i<=1000000;i++)
	if(u[i]){
		for(j=2;j*i<=1000000;j++)u[i*j]=false;	
		}
	for(i=2;i<=1000000;i++)if(u[i]){
		su[++num]=i;
	}
	} 
int main(){
	pre();
	int i,j,k,n;
	while(scanf("%d",&n)>0&&n){
		bool ok=false;
		for(i=2;i<=num;i++){
			if(su[i]*2>n)break;
			if(u[n-su[i]]){
				ok=true;
				break;
			}
		}
		if(!ok)puts("Goldbach's conjecture is wrong.");
		else printf("%d = %d + %d\n",n,su[i],n-su[i]);
	}
	return 0;
	
}
