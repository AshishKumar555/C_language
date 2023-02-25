#include<stdio.h>
#include<conio.h>
int main()
{  //Profit and loss cp and sp:
    float cp,sp,profit,loss,profitper,lossper;
    printf("Enter the cp and sp\n");
    scanf("%f%f",&cp,&sp);
    profit=sp-cp;
    loss=cp-sp;
    profitper=(profit/cp)*100;
    lossper=(loss/cp)*100;
    if(sp>cp){
    printf("profit is=%f\n",profit);
    printf("profit percentage=%f",profitper);

    }
  else
   if(cp>sp){
   printf("ioss=%f\n",loss);
   printf("loss percentage=%f",lossper);
   }
   return 0;
    
}