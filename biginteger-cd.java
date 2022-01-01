
import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger;

/* Name of the class has to be "Main" only if the class is public. */
public class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		 Scanner sc=new Scanner(System.in);
		 String s1= sc.next();
      
      
      
        //Bigineter will take argument as a string
        BigInteger b1=new BigInteger(s1);
		BigInteger b=new BigInteger("-128");
		BigInteger bb=new BigInteger("127");
		BigInteger bbb=new BigInteger("-32768");
		BigInteger bbbb=new BigInteger("32767");
		BigInteger bbbbb=new BigInteger("-2147483648");
		BigInteger bbbbbb=new BigInteger("2147483647");
		BigInteger bbbbbbb=new BigInteger("-9223372036854775808");
		BigInteger bbbbbbbb=new BigInteger("9223372036854775807");

	  	// int value=b1.compareTo(b);
		  int v=b.compareTo(b1);
		  int vv=bb.compareTo(b1);
		  int vvv=bbb.compareTo(b1);
		  int vvvv=bbbb.compareTo(b1);
		  int vvvvv=bbbbb.compareTo(b1);
		  int vvvvvv=bbbbbb.compareTo(b1);
		  int vvvvvvv=bbbbbbb.compareTo(b1);
		  int vvvvvvvv=bbbbbbbb.compareTo(b1);


		  if( (v ==-1 || v==0) && (vv==1 || vv==0)){
			  System.out.println("byte");
		  }else if(( vvv==-1 || vvv==0) && (vvvv==1 || vvvv==0)){
			  System.out.println("short");
		  }else if(( vvvvv==-1 || vvvvv==0 )&& (vvvvvv==1 || vvvvvv==0)){
			  System.out.println("int");
		  }else if((vvvvvvv==-1 || vvvvvvv==0 )&& (vvvvvvvv==1 || vvvvvvvv==0)){
			  System.out.println("long");
		  }else{
			  System.out.println("BigInteger");
		  }
		


		
		// your code goes here
	}
}


import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger;

/* Name of the class has to be "Main" only if the class is public. */
public class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		 Scanner sc=new Scanner(System.in);
		 String s1= sc.next();
      
      
      
        //Bigineter will take argument as a string
        BigInteger b1=new BigInteger(s1);
		BigInteger b=new BigInteger("-128");
		BigInteger bb=new BigInteger("127");
		BigInteger bbb=new BigInteger("-32768");
		BigInteger bbbb=new BigInteger("32767");
		BigInteger bbbbb=new BigInteger("-2147483648");
		BigInteger bbbbbb=new BigInteger("2147483647");
		BigInteger bbbbbbb=new BigInteger("-9223372036854775808");
		BigInteger bbbbbbbb=new BigInteger("9223372036854775807");

	  	// int value=b1.compareTo(b);
		  int v=b.compareTo(b1);
		  int vv=bb.compareTo(b1);
		  int vvv=bbb.compareTo(b1);
		  int vvvv=bbbb.compareTo(b1);
		  int vvvvv=bbbbb.compareTo(b1);
		  int vvvvvv=bbbbbb.compareTo(b1);
		  int vvvvvvv=bbbbbbb.compareTo(b1);
		  int vvvvvvvv=bbbbbbbb.compareTo(b1);


		  if( (v ==-1 || v==0) && (vv==1 || vv==0)){
			  System.out.println("byte");
		  }else if(( vvv==-1 || vvv==0) && (vvvv==1 || vvvv==0)){
			  System.out.println("short");
		  }else if(( vvvvv==-1 || vvvvv==0 )&& (vvvvvv==1 || vvvvvv==0)){
			  System.out.println("int");
		  }else if((vvvvvvv==-1 || vvvvvvv==0 )&& (vvvvvvvv==1 || vvvvvvvv==0)){
			  System.out.println("long");
		  }else{
			  System.out.println("BigInteger");
		  }
		


		
		// your code goes here
	}
}

