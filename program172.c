/*
    I/P : Enter th string : MArvellous mUlti oS
        
    O/p : Number of vowels are : 7
*/


#include<stdio.h>

int CountVowel(char * str)      //Case Insensitive
{
    int iCnt = 0;
    while(* str != '\0')
    {
        if((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U')||
            (*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            iCnt++;
        }
        str++;
        
    }
    return iCnt;

}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountVowel(Arr);                //Strlenx(100)

    printf("Number of vowels are : %d\n",iRet);

    return 0;
}