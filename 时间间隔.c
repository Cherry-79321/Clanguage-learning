#include<stdio.h>
int main()
{printf("��������ʼʱ�䣺 ʱ ��\n");
int h1,m1;
scanf("%d %d",&h1,&m1);

printf("���������ʱ�䣺 ʱ ��\n");
int h2,m2;
scanf("%d %d",&h2,&m2);

int t1=h1*60+m1;
int t2=h2*60+m2;
int t=t2-t1;
printf("ʱ������%dʱ%d��",t/60,t%60);

	return 0;
}
