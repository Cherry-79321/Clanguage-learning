#include<stdio.h>
 int main()
 {const double STANDARD=0.0;
  const double RATE=7.9;
  int hour=0;
  
  printf("�����빤��ʱ��:\n");
  scanf("%d",&hour);
  double salary=0;
  
  if (hour<STANDARD)
    salary=hour*RATE;
  else 
    salary=STANDARD*RATE+(hour-STANDARD)*RATE*1.5;
 
 printf("���ʣ�%f\n",salary);
 	return 0;
 }
