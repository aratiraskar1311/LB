#include<stdio.h>


float Addition(
                float fNo1,     //First input
                float fNo2      //second input
              )
{
    float fAns = 0.0;           //variable to store result
    fAns = fNo1 + fNo2;         
    return fAns;
}


int main()
{
    float fValue1 = 0.0;        //variable to store first input
    float fValue2 = 0.0;        //variable to store second input
    float fResult = 0.0;        //variable to store  the return value

    printf("Enter the first number: \n");
    scanf("%f",&fValue1);

    printf("Enter the second number: \n");
    scanf("%f",&fValue2);

     fResult = Addition(fValue1, fValue2);

    printf("Addition is : %f\n",fResult);

    return 0;
}