
/*  remove space
Enter the source string : marvellous multi

Destination string is : marvellousmulti

*/
#include<iostream>

using namespace std;

void strcpyX(char *Dest, char *src)
{
    while(*src != '\0')
    {
        if(*src != ' ')
        {
            *Dest = *src;
             Dest++;
            
        }
        src++;
       
        
    }
    *Dest = '\0';
}

int main()
{
    int iRet = 0;
    char Arr[30];
    char Brr[30];
    
    cout<<"Enter the source string : "<<endl;
    cin.getline(Arr,30);

    strcpyX(Brr, Arr);          //strcpy(200,100)

    cout<<"Destination string is : "<<Brr<<endl;

    return 0;
}

