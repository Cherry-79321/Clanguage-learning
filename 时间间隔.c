#include<stdio.h>
int main()
{printf("请输入起始时间： 时 分\n");
int h1,m1;
scanf("%d %d",&h1,&m1);

printf("请输入结束时间： 时 分\n");
int h2,m2;
scanf("%d %d",&h2,&m2);

int t1=h1*60+m1;
int t2=h2*60+m2;
int t=t2-t1;
printf("时间间隔：%d时%d分",t/60,t%60);

	return 0;
}
