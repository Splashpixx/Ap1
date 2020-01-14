import java.math.*;
import java.util.*;

class Aufgabe_5 {
	
	public static int Dumm( float n, float m ){	
		return (int) Math.pow(n, m);
	}
	
	public static void main(String[] args) {
		int[] myIntArray = new int[100];
			
			Scanner in = new Scanner(System.in);
			
			System.out.println("Programm zur Berechnung der Potenz");
			System.out.println("Bitte geben Sie x ein:");
			float x = in.nextFloat();
			System.out.println("Bitte geben Sie y ein:");
			float y = in.nextFloat();
			
			System.out.println("Die Potenz von x hoch y ist");
			float newfloat = Dumm(x, y);
			String numberAsString = String.valueOf(newfloat);

			System.out.println(numberAsString.replace('.', ','));
			
 		
	}
}