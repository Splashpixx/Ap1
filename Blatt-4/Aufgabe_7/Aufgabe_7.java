import java.util.*;

class Aufgabe_7 {
	public static void main(String[] args) {
		
		// Taxen Belegen
		Taxi vik = new Taxi("Frank Viktor", "Gm-inf-1337", 1);
		Taxi moz = new Taxi("Wolfgang Amadeus Mozart", "SB-Dez-1791", 2);
		Taxi cur = new Taxi("Marie Curie", "Wa-Uran-238", 3);
		Taxi freud = new Taxi("Sigmund Freud", "FR-Psy-420", 4);
		Taxi bob = new Taxi("Spongebob Schwammkopf", "A1356021", 5);
		Taxi hefner = new Taxi("Hugh Hefner", "Payboy", 6);
		Taxi job = new Taxi("Steven Paul Jobs", "IT-NeXT-86", 7);
		Taxi amTor = new Taxi("Philipp Amthor", "VG-CDU-69", 8);
		
		
		System.out.println("Taxistand öffnet");
		Taxistand taxistand = new Taxistand(0);
		
		// Taxen einreihen 
		
		taxistand.add(vik);
	//	
	}
}