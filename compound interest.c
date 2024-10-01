//calculating compound interest
#include <stdio.h>
#include <math.h>

int main(){

    int p,t;
    float r,ci;

    printf("enter principle\n");

    scanf("%d",&p);

    printf("enter time\n");
    scanf("%d",&t);

    printf("enter rate\n");
    scanf("%f",&r);

    ci=p*pow((1+r/100t);

    printf("%f\n",&ci);

    return 0;


}
