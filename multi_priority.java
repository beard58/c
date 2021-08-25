package test1;
//import java.util.Scanner;

//import com.sun.tools.jdeprscan.scan.Scan;
//import com.sun.java_cup.internal.runtime.Scanner;

class MyEmailThread extends Thread
{
	public void run() {
		System.out.println(Thread.currentThread());
		
	}
}
------------------------------------------------------------------------------------
package test1;
public class data {

	public static void main(String[] args)throws InterruptedException {
		MyEmailThread met2=new MyEmailThread();
		MyEmailThread met3=new MyEmailThread();
		MyEmailThread met1=new MyEmailThread();
		met1.start();
		met2.start();
		met3.start();
		System.out.println(Thread.currentThread());
	//	System.out.println();
		try {
			Thread.sleep(3000);
			
		} catch (InterruptedException e) {
			// TODO: handle exception
			e.printStackTrace();
		}
		Thread.currentThread().setPriority(8);
		System.out.println(Thread.currentThread());
		
	
	}
}
