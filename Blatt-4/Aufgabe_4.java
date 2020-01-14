import java.math.*;
import java.util.*;

class Aufgabe_4 {
	public static void main(String[] args) {
			
			Scanner in = new Scanner(System.in);
			
			System.out.println("Programm zur Berechnung der Potenz");
			System.out.println("Bitte geben Sie x ein:");
			float x = in.nextFloat();
			System.out.println("Bitte geben Sie y ein:");
			float y = in.nextFloat();
			
			System.out.println("Die Potenz von x hoch y ist");
			System.out.println(Math.pow(x, y));
	
	}
}