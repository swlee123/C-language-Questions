#include<stdio.h>
#include<math.h>
#define PI 3.141592653589793
double diameter(double,double,double,double);
double side(double,double,double,double);
double tri_area(double,double,double);


int main(){
 double x1,x2,x3,y1,y2,y3,s1,s2,s3;
 while (scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3)!=EOF){
  s1 = side(x1,y1,x2,y2);
  s2 = side(x1,y1,x3,y3);
  s3 = side(x2,y2,x3,y3);
  double area = tri_area(s1,s2,s3);
  double d = diameter(s1,s2,s3,area);
  printf("%.2lf\n",PI*d);
  
 }
 return 0;
}
double side(double x,double y,double z,double w){
 double len;
 return len = sqrt((x-z)*(x-z)+(y-w)*(y-w));
}
double tri_area(double s1,double s2,double s3){
 double p = (s1+s2+s3)/2;
 double s=sqrt(p*(p-s1)*(p-s2)*(p-s3));
 return s;
}
double diameter(double s1,double s2,double s3,double area){
 double diam = s1*s2*s3/2/area;
 return diam;
}