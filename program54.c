#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)                 //updator
    {
        iNo = - iNo;
    }

    while(iNo > 0)
    {
         iDigit = iNo % 10;
         printf("%d\n",iDigit);
         iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}