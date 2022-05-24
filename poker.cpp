#include<stdio.h>
#include<string.h>
#include<iostream>
#include <ctime>
using namespace std;
void shuffle();
void compare();
int n;
struct card{
	string num;
	string type;
}cards[52];
int main(){
	std::string a[13]={"ace","two","three","four","five","six","seven","eight","nine","ten","jack","queen","king"};
	std::string b[4]={"club","diamonds","hearts","spades"};
	int k=0,i,j;
	for(i=0;i<4;i++){
		for(j=0;j<13;j++){
			cards[k].type=b[i];
			cards[k].num =a[j];
			++k;
		}
	}
	shuffle();
	cout<<"--------  "<<"Compare Hands"<<"  --------"<<endl;
	while(1){
		compare();
		if(!n)break;
	}
	

}

void shuffle()
{
    srand(time(0));
    for (int i=0; i<52 ;i++)
    {
        int r = i + (rand() % (52 -i));

        swap(cards[i].num,cards[r].num);
        swap(cards[i].type,cards[r].type);
    }
    for(int i=0;i<4;i++){
    	cout<<"player "<<i+1<<endl<<endl;
    	int a=0+13*i;
    	int b=12+13*i;
    	for(int j=0;j<4,a<=b;j++,a++){
    		cout<<'\t'<<cards[a].num<<" "<<'\t'<<cards[a].type<<endl;
		}
		
		
	}
}
void compare(){
	cout<<"Please enter the position of card to compete(enter \"0\" to stop playing):";
	cin>>n;
	for(int i=0;i<4;i++){
		int a = n+13*i;
		cout<<cards[a-1].num<<" "<<cards[a-1].type<<endl;
	}
}
	
