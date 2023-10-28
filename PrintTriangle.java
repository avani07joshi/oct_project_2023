import java.io.*;
public class PrintTriangle
{
    public static void triangle(int n)
    {
        for (int i=0; i<n; i++)
        {
            for (int j=n-i; j>1; j--)
            {

                System.out.print(" ");
            }

            for (int j=0; j<=i; j++ )
            {

                System.out.print("* ");
            }


            System.out.println();
        }
    }

    public static void main(String args[])
    {
        int n = 5;
        triangle(n);
    }
}

