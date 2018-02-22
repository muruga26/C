import java.util.*;
import java.lang.*;
public class compo
{
      public static void main(String aa[])
      {
          int n;
           int f=0;
           Scanner sc=new Scanner(System.in);
           n=sc.nextInt();
          for(int i=2;i<n;i++)
          {
              if(n%i==0)
              {
                  f=1;
                  break;
              }
          }
           if(f==1)
           {
               System.out.println("YES");
           }
         else
         {
               System.out.println("NO");
         }
   }
   }
