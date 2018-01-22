#include<stdio.h>
#include<conio.h>
int main()
{
  clrscr();
  int num,cnt=0;
  printf("enter the no.: ");
  scanf("%d",&num);
  while(num>0)
  {
   num=num/10;
   cnt++;
  }
  return cnt;
  printf("%d",cnt);
  getch();
}
