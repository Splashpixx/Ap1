import java.math.*;
import java.util.*;
import java.awt.geom.*;

class Aufgabe_5 {
	
	public static double Dumm( float n, float m ){	
		return (double) Math.pow(n, m);
	}
	
	public static void main(String[] args) {
			
			Scanner in = new Scanner(System.in);
			
			System.out.println("Programm zur Berechnung der Potenz");
			System.out.println("Bitte geben Sie x ein:");
			
			String x = in.next();
			System.out.println("Bitte geben Sie y ein:");
			String y = in.next();
			
			String zwei = x.replace(',', '.');
			Float zwei2 = new Float(zwei);
			
			String hunger = y.replace(',', '.');
			Float hunger2 = new Float(hunger);
			
			
			System.out.println("Die Potenz von x hoch y ist");
			double newfloat = Dumm(zwei2, hunger2);
			String numberAsString = String.valueOf(newfloat);

			System.out.println(numberAsString.replace('.', ','));
	}
}