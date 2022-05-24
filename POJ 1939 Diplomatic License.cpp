#include <iostream>
using namespace std;
struct Point
{ long long x, y;
} first, last, now; //x 和y 坐标的结构体表示
int n; //n 个国家
int main()
{
while (scanf("%d", &n) != EOF) //每次循环处理一个测试用例
{
printf("%d ", n);
scanf("%lld%lld", &first.x, &first.y); //起点的坐标
now = first;
for (int i = 1; i < n; i++) //使用中点坐标公式
{ scanf("%lld%lld", &last.x, &last.y);
printf("%.6f %.6f ", (last.x + now.x) / 2.0, (now.y + last.y) / 2.0);
now=last;
}
printf("%.6f %.6f ", (last.x + first.x) / 2.0, (last.y + first.y) / 2.0);
putchar('\n');
}
return 0;
}