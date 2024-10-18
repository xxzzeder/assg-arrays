#include <stdio.h>
float Calculatebill(float usage,float rate){return usage * rate;}
int main () {
    float usage,rate,totalbill;
    printf("enter electricity usage in kWh");
    scanf("%f",&usage);
    printf("enter the rate per kWh");
    scanf("%f",&rate);
    totalbill=Calculatebill(usage * rate);
      printf("total electricity bill%0.2f\n", totalbill);
      return 0;
}