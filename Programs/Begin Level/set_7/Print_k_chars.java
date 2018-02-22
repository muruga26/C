import java.util.*;
import java.lang.*;
import java.io.*;


class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		String a;
		int b;
		Scanner sc=new Scanner(System.in);
		a=sc.next();
		b=sc.nextInt();
		for(int i=0;i<b;i++)
		{
			System.out.print(a.charAt(i));
		}
	}
}
