// We have populated the solutions for the 10 easiest problems for your support. 
// Click on the SUBMIT button to make a submission to this problem.

using System;

public class Test
{
	public static void Main()
	{
        int n = Convert.ToInt32( Console.ReadLine() );
        
        for (int i = 0; i < n; i++)
        {
            int r;
            int reversed = 0;
            int num = Convert.ToInt32( Console.ReadLine() );
            while (num > 0)
            {
                r = num % 10;
                reversed = reversed * 10 + r;
                num /= 10;
            }
            Console.WriteLine(reversed);
        }
	}
}
