#include<iostream>
using namespace std;
int main(){
	struct pts{
		double x;
		double y;
	};
	pts a,b,c,d,e;
	while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&a.x,&a.y,&b.x,&b.y,&c.x,&c.y,&d.x,&d.y)!=EOF){
		if ( a.x == c.x && a.y == c.y )
		swap(a,b);
		if ( a.x == d.x && a.y == d.y ) 
		swap( a, b );swap( c, d );
		if ( b.x == d.x && b.y == d.y )
		swap( c, d );
		e.x = a.x+d.x-c.x; e.y=a.y+d.y-c.y ;
		printf("%4.3lf %4.3lf\n",e.x,e.y);
	}
	
	
}