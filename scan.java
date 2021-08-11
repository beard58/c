package test1;
import java.util.Scanner;

//import com.sun.tools.jdeprscan.scan.Scan;
//import com.sun.java_cup.internal.runtime.Scanner;

public class data {

	public static void main(String[] args) {
		int num;
		String name;
		Scanner sc=new Scanner(System.in);
		System.out.println("enter the name");
		name=sc.next();
		System.out.println("enter the number");
		num=sc.nextInt();
		System.out.println("the name is "+name);
		System.out.println("the number is "+num);
		

	}

}
