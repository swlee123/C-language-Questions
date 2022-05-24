
#include<string.h>
#include<iostream>

using namespace std;
struct data{
	int y;
	string m;
	int d;
};
void convert(data &x);
string haab[19]={"pop","no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", 
	"yax", "zac", "ceh", "mac", "kankin", "muan", "pax", "koyab", "cumhu","uayet"};
string tzolkin[20]={"imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", "muluk", "ok", 
	"chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau"};
int main(){
	int n,i,j;
	char c;
	cin>>n;
	data *p=new data[n];
	for(i=0;i<n;i++){
		cin>>p[i].d>>c>>p[i].m>>p[i].y;
	}
	cout<<n<<endl;
	for(i=0;i<n;i++)convert(p[i]);
        
}
void convert(data &x){
	int i,j;
	    long current;
		string word;
		current=x.y*365;
		for(j=0;j<20;j++){
			if(x.m==haab[j])break;
		}
		current=current+x.d+1+j*20;
		int num,year=0;
		if(current%13==0)num=13;
		else num=current%13;
		while((current-260)>0){
			++year;
			current-=260;
		}
		if(current==0)word="ahau";
		else {
			while((current-20)>0)current-=20;
			if(current==0)word="ahau";
			else word=tzolkin[current-1];
		}
	   cout<<num<<" "<<word<<" "<<year<<endl;
		
	
}
