//1000 - Greetings from LightOJ

import java.util.*;

public class Main{
	public static void main(String[]args){
		int t, a, b;
		Scanner sc=new Scanner(System.in);

		t=sc.nextInt();
		for(int i=1; i<=t; i++){
			a=sc.nextInt();
			b=sc.nextInt();

			System.out.println("Case "+i+": "+(a+b));
		}
	}
}