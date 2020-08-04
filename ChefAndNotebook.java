/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		try{
		   Scanner sc=new Scanner(System.in);
		   int t=sc.nextInt();
		   while(t-->0)
		   {
		      int x=sc.nextInt();
		      int y=sc.nextInt();
		      int k=sc.nextInt();
		      int n=sc.nextInt();
		      boolean flag=false;
		       long c[]=new long[n];
		       long p[]=new long[n];
		      for(int i=0;i<n;i++)
		      {
		         p[i]=sc.nextLong();
		         c[i]=sc.nextLong();
		         
		      }
		     
		      for(int i=0;i<n;i++)
		      {
		         if(x-y <= p[i] && k>=c[i])
		         {
		            flag=true; break;
		         }
		      }
		      if(flag==true) System.out.println("LuckyChef");
		      else System.out.println("UnluckyChef");
		   }
		}catch(Exception e){}
	}
}
