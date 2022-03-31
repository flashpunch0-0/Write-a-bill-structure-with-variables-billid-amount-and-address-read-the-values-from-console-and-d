#include <stdio.h>
struct bill{
  char address[100];
  int billid;
  float amt;
};
int main()
{
    struct bill bil;
    
    scanf("%d",&bil.billid);
    
    
    scanf("%f",&bil.amt);
    
    
    scanf("%s",bil.address);
    
  


printf("BillId:%d \n",bil.billid);
printf("BillAmount:%.2f \n",bil.amt);
printf("Address:%s \n",bil.address);

    return 0;
}
