//Accept weight from user into KG and convert into Gram.
#include<stdio.h>
int main()
{
    int kg,gram;
    printf("Enter the weight into KG:-");
    scanf("%d",&kg);
    gram = kg*1000;
    printf("Conversion is completed and it is %dkg into %dgram",kg,gram);
    return 0;
}