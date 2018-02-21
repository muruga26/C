import java.util.*;
import java.lang.*;
import java.io.*;


class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		String str;
		int len;
		Scanner s=new Scanner(System.in);
		str=s.nextLine();
		len=str.length();
		String a[]=str.split(" ");
		
		System.out.println(len-(a.length-1));
		
	}
}
