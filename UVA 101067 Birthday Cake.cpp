#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int i,j,n,a,b,A,B,find,count;
	int up,down,on;
	struct coordinate{
		int x;
		int y;
	}pt[105];
	
	while(cin>>n&&n){
		up=down=0;
		find=0;
		for(count=0;count<2*n;count++){
			cin>>pt[count].x;
			cin>>pt[count].y;
		}

	for(a=-500;a<=500;a++){
		for(b=-500;b<=500;b++){
			up=down=0;
			if((a==0)&&(b==0))continue;
			for(int k=0;k<count;k++){
				if(pt[k].x>100||pt[k].y>100||pt[k].x<-100||pt[k].y<-100)continue;
				if(a*pt[k].x+b*pt[k].y==0)break;
			    if(a*pt[k].x+b*pt[k].y>0)up++;
			    else down++;
			}
		if(up==down&&up+down==count){
			A=a;
			B=b;
			find =1;
			break;	}
			}
		if(find==1)break;
	}
	cout<<A<<" "<<B<<endl;
  }
	return 0;
}

