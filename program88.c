//I/P : 5      
//O/P : A  B  C  D  E  

#include<stdio.h>

void Display(char iNo)
{
    int iCnt = 0;
    char ch = 'A';

    for(iCnt =1; iCnt <= iNo; iCnt++,ch++)              
    {
        printf("%c\t",ch);

    }

    printf("\n");
    
}
 

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Display(iValue);


    return 0;
}

