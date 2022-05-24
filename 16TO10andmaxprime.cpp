#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void input(char*str);
int convert(char*str);
int Maxprime(int m);
void output(int res);

int main(){
	char str[10];
	input(str);
	int m=convert(str);
	int prime=Maxprime(m);
	output(prime);
}

void input(char*str){
	gets(str);
}

int convert(char*str){
	int sum=0;
	for(int i=strlen(str);i>0;--i){
		if(str[i]>='A'&&'F'>=str[i]){
			int a=str[i]-'A'+11;
			sum+=(a*pow(16,i-1));
		}
		else sum+=(i*pow(16,i-1));
	}
	return sum;
}

int Maxprime(int m){
	int ans;
	for(int i=2;i<m;i++){
		int flag=1;
		for(int j=2;j<i;j++){
			if(i%j==0){
				flag=0;
				break;
			}
			
		}
		if(flag==1)ans=i;
	}
	return ans;
}

void output(int res){
	printf("%d",res);
}
