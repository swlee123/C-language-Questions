#include <iostream>
using namespace std;
struct Point
{ long long x, y;
} first, last, now; //x ��y ����Ľṹ���ʾ
int n; //n ������
int main()
{
while (scanf("%d", &n) != EOF) //ÿ��ѭ������һ����������
{
printf("%d ", n);
scanf("%lld%lld", &first.x, &first.y); //��������
now = first;
for (int i = 1; i < n; i++) //ʹ���е����깫ʽ
{ scanf("%lld%lld", &last.x, &last.y);
printf("%.6f %.6f ", (last.x + now.x) / 2.0, (now.y + last.y) / 2.0);
now=last;
}
printf("%.6f %.6f ", (last.x + first.x) / 2.0, (last.y + first.y) / 2.0);
putchar('\n');
}
return 0;
}