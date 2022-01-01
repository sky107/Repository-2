/*
Coded by : Siddharth kumar Yadav
Email:siddharhsk101@gmail.com
*/

import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    static void compute(BigInteger n,BigInteger k){
        BigInteger x,y;
        x=n.subtract(k);
        x=x.divide(k);
        y=x.add(k);
        System.out.println(y);
        System.out.println(x);
    }
    public static void main(String args[]) {
     Scanner sc=new Scanner(System.in);
     BigInteger n,k;
     int tests=1;
     while(tests>0){
         n=sc.nextBigInteger();
         k=sc.nextBigInteger();
         compute(n,k);
         tests-=1;
     }
    }
}
