
#include<stdio.h>
struct time
{
  int sec;
  int min;
  int hrs;
};
void diff_between_time(struct time t1,struct time t2,struct time *diff);
int main()
{
    struct time start_time ,stop_time,diff;
    printf("Enter the start time\n");
    printf("Enter hrs,min,sec");
    scanf("%d%d%d",&start_time.hrs,&start_time.min,&start_time.sec);
    printf("\n");
    printf("Enter the stop time\n");
    printf("Enter the hrs, min ,sec");
    scanf("%d%d%d",&stop_time.hrs,&stop_time.min,&stop_time.sec);
    diff_between_time(start_time,stop_time ,&diff);
    printf("time diff:%d%d%d-",start_time.hrs,start_time.min,start_time.sec);
    printf("%d%d%d-",stop_time.hrs,stop_time.min,stop_time.sec);
    printf("time diff:%d%d%d-",diff.hrs,diff.min,diff.sec);
    return 0;
}
void diff_between_time(struct time start,struct time stop,struct time *diff)
{
    while(stop.sec>start.sec)
    {
        --start.min;
        start.sec+=60;
    }
    while(stop.min>start.min)
    {
        --start.hrs;
        start.min+60;
    }
    diff->min=start.min-stop.min;
    diff->hrs=start.hrs-stop.hrs;
}
//not ruynning