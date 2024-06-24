#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int i = 0;

    printf("Elements is reverse order are : \n");
    for(i = iSize-1; i >= 0; i--)
    {
        printf("%d\n",Arr[i]);
    }
}

int main()
{
    int iCount = 0;
    int i = 0;
    int *Brr = NULL;

    printf("Enter the number of element that you want to enter:\n");
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the element : \n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    Display(Brr, iCount);

    free(Brr);

    return 0;
}