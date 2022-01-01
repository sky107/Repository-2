/*
Coded by: Siddharth Kumar Yadav
Email:siddharthsk101@gmail.com
*/

import java.math.BigInteger;
import java.util.*;
public class Main {
    public static void main(String args[]) {
        Scanner sc=new Scanner(System.in);
        String s1= sc.next();
      
      
      
        //Bigineter will take argument as a string
        BigInteger b1=new BigInteger(s1);
      
      
      
         BigInteger b2=new BigInteger("23424");
         //b1=b1.add(b2);
      
      
         b1=b1.multiply(b2);
         System.out.println(b1);
      
      
        //Bit count-Total set bits
        System.out.println(b1.bitCount());
      
      
        //Count total no. of bits
        System.out.println(b1.bitLength());
       
        int a=sc.nextInt();
        int b=sc.nextInt();
        System.out.println(a+b);
        //you cannot assign integer directly to big integer you need to use valueOf
        BigInteger b3=(BigInteger.valueOf(a));
        BigInteger b4=b1.gcd(b2);
        System.out.println(b3);
        System.out.println(b4);
                             
      
      //Base conversion
                                //here binary format
        BigInteger b5=new BigInteger("10101010",3);
        System.out.println(b5);

        //power power should be integer not BigInteger
        System.out.println(b3.pow(10));

    }
}
