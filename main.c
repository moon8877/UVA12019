/*1/1friday*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int time,m,d;
  int i=1;
  int count=0;
  int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
  scanf("%d",&time);
  while(time>0)
  {
    scanf("%d %d",&m,&d);
    while(i<m)
    {
      count=count+day[i-1];
      i++;
    }
    count=count+d;
    count=count%7;
    switch(count){
       case 0:
          printf("Friday\n");
          break;
       case 1:
          printf("Saturday\n");
          break;
       case 2:
          printf("Sunday\n");
          break;
       case 3:
          printf("Monday\n");
          break;
       case 4:
          printf("Tuesday\n");
          break;
       case 5:
          printf("Wednesday\n");
          break;
       case 6:
          printf("Thursday\n");
          break;	
    
    }
    i=1;
    count=0;
    time--;
  }



return 0;
}
