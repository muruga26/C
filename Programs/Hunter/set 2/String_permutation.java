import java.util.*;
import java.lang.*;
import java.io.*;


class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
	
		String str;
		int n,i,j,k;
		Scanner s=new Scanner(System.in);
		str=s.nextLine();
		n=str.length();
		char a[]=str.toCharArray();
		for(i=0;i<n;i++)
		{
		for(j=1;j<n;j++)
		{
			char g=a[i];
			a[i]=a[j];
			a[j]=g;
		}
		for(k=0;k<n;k++)
		{
			System.out.print(a[k]+"");
		}
		System.out.print("\n");
		}
	
	}
}
