#include<stdio.h>
void in_score(),aver(),math();
int n;
struct score{
	int math;
	int science;
	int physic;
	int chemistry;
	float average;
}stu[100];
int main(){
	printf("Number of students:");
	scanf("%d",&n);
	printf("\n");
	in_score();aver();math();	
}
void in_score(){
	printf("Please enter score for Math,Science,Physic and Chemistry in order:\n\n");
	for(int i=0;i<n;i++){
		printf("Student %d:",i+1);
		scanf("%d %d %d %d",&stu[i].math,&stu[i].science,&stu[i].physic,&stu[i].chemistry);
		stu[i].average = (stu[i].math+stu[i].science+stu[i].physic+stu[i].chemistry)/4.0;
	}	
	printf("\n\n");
}
void aver(){
	int i,j;
	float rank[100];
	for(i=0;i<n;i++)rank[i]=stu[i].average;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(rank[i]>rank[i+1]){
				float temp = rank[i];
				rank[i]=rank[i+1];
				rank[i+1]=temp;
			}
		}
	}
	printf("Average by ascending order:\n");
	for(i=0;i<n;i++)printf("%f ",rank[i]);
	printf("\n\n");
}
void math(){
	int i,j;
	char su[100];
	float rank[100];
	for(i=0;i<n;i++)rank[i]=stu[i].math;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(rank[i]>rank[i+1]){
				float temp = rank[i];
				rank[i]=rank[i+1];
				rank[i+1]=temp;
			}
		}
	}
	printf("Math score by ascending order:\n");
	for(i=0;i<n;i++)printf("%f ",rank[i]);
	printf("\n\n");
}
