
import java.util.*;

class ArrayX
{
    public int Arr[];

    public ArrayX(int no)
    {
        Arr = new int[no];      
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements : ");
        int i = 0;

        for(i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Elements  of tha array are : ");
        int i = 0;

        for(i = 0; i < Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
    }
}

class program242
{
    public static void main(String A[])
    {
        ArrayX aobj = new ArrayX(5);

        System.out.println("Array ize is : "+aobj.Arr.length);

        aobj.Accept();

        aobj.Display();
    }
}