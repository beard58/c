package test1;
import java.util.Scanner;

//import com.sun.tools.jdeprscan.scan.Scan;
//import com.sun.java_cup.internal.runtime.Scanner;

public class data {

	public static void main(String[] args) {
		int a,b,c;
		Scanner sc = new Scanner(System.in);
		System.out.println("enter any two numbers");
		a=sc.nextInt();
		b=sc.nextInt();
		c=a*b;
		System.out.println("addtion of two numbers "+c);

	}

}
