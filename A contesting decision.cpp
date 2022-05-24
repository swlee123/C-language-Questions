#include<stdio.h>
#include<string.h>
int main(){
	char wname[1000];
	int wsol=0,n,i,j;
	int wpt=100000000;
	struct teaminfo{
		char teamname[1000];
		int sub[4];
		int t[4];
		int num;
		int time;
	}team[100];
	scanf("%d",&n);
	memset(team, 0, sizeof(0));
	for(i=0;i<n;i++){
		scanf("%s",team[i].teamname);
		for(j=0;j<4;j++){
			scanf("%d %d",&team[i].sub[j],&team[i].t[j]);
		}	
		team[i].num=team[i].time=0;
		for(j=0;j<4;j++){
			if(team[i].t[j]){
			team[i].num++;
			team[i].time += (team[i].sub[j]-1)*20+team[i].t[j];
			}
		}}
	
	for(i=0;i<n;i++){
		if((team[i].num>wsol)||(team[i].num==wsol&&team[i].time<wpt)){
			strcpy(wname,team[i].teamname);
			wsol=team[i].num;
			wpt=team[i].time;
		}
	}
	
	printf("%s %d %d",wname,wsol,wpt);
	return 0;
		
}