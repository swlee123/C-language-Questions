#include<stdio.h>
int gcb(int,int);
int abs(int);
int f[1100],n,ans;
int main(){
	while(true){
		n=0;
		scanf("%d",&f[++n]);
		if(f[n]==0)break;
		while(f[n]!=0)scanf("%d",&f[++n]);
		n--;
		for(int i=1;i<n;i++)f[i]=f[i]-f[i+1];
		ans = f[1];
		for(int i=2;i<n;i++){
			ans=gcb(f[i]==0?ans:f[i],ans);
		}
		printf("%d\n",abs(ans));
	}
	
}
int gcb(int a,int b){
	if(b==0)return a;
	return gcb(b,a%b);
}
int abs(int x){
	return x>0?x:-x;
}