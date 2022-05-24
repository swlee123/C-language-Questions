#include <stdio.h>
int main(){
	int x1,x2,y1,y2,n,i=1,s,d;
	printf("Please enter the number of cases:\n");
	scanf("%d",&n);
	for (;i<=n;i++){
		printf("Please enter the coordinates of source points and destination points:\n");
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		s = (x1+y1+1)*(x1+y1)/2+x1;
		d = (x2+y2+1)*(x2+y2)/2+x2;
		printf("Case %d: %d\n",i,d-s);
		
	}
	return 0;
}
