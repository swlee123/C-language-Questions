#include<stdio.h>
int day_of_year(int a);
void hari(int b);
int day_of_month(int month,int year);

int main(){
	while(1){
		int month,year,day,n,temp;
		scanf("%d",&n);
		if(n<0)break;
		year =2000;
		day=1;
		month = 1;
		temp = n;
		while(n){
			if(n>=day_of_year(year)){
				n-=day_of_year(year);
				++year;
				
			}
			else if(n>=day_of_month(month,year)){
				n-=day_of_month(month,year);
				++month;
			}
			else{
				day+=n;
				n=0;
			}
		}
		if(month<10&&!(day<10)){
			printf("%d-0%d-%d ",year,month,day);
			hari(temp);
			printf("\n");
		}
		else if(day<10&&!(month<10)){
			printf("%d-%d-0%d ",year,month,day);
			hari(temp);
			printf("\n");
			
		}
		else if(month<10&&day<10){
			printf("%d-0%d-0%d ",year,month,day);
			hari(temp);
			printf("\n");
		}
		else{
			printf("%d-%d-%d ",year,month,day);
			hari(temp);
			printf("\n");
		}
		
		
	}
	return 0;
	
}
int day_of_year(int a){
	if((!(a%4)&&a%100)||!(a%400))
	return 366;
	else return 365;
}
void hari(int b){
	int k= b%7;
	switch(k) {
		case 0:printf("Saturday");break;
		case 1:printf("Sunday"); break;
		case 2:printf("Monday");break;
		case 3:printf("Tuesday");break;
		case 4:printf("Wednesday");break;
		case 5:printf("Thursday"); break;
		case 6:printf("Friday"); break;
	}	                
}
int day_of_month(int month,int year){
	if(month==2){
		return day_of_year(year)-365?29:28;
	}
	switch(month){
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:return 31;
		default : return 30;
	}
	
}