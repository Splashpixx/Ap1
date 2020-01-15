import java.math.*;
import java.util.*;


class Main {
	
	public static void main(String[] args) {
		
		// wir erstellen eine Warteschlange die mit s gecalled wird
		Queu s = new Queu();

		System.out.print("*einfüg*");
		s.rein(8);		// fügt 8 Hinzu
		s.rein(85);		// Fügt 85 hinzu
		s.rein(18);		// Fügt 18 Hinzu
		s.rein(9);		// 9 kann nicht hinzugefügt werden weil voll
		System.out.println("*schlange*");
		s.next();			// Zeigt die nächste "Person" an die dran kommt
		s.nextLeave();	// s.next verlässt die schlange
		s.rein(9);		// 9 darf endlich in die schlange 
		System.out.println("*output*");
		s.output();
		System.out.print("*abfage*");
		s.is_voll();		// schauen ob die schlange voll ist
		s.is_leer();		// schauen ob die schlange leer ist
		
		s.next();			// anzeigen wen als nächstes die schlange verlassen darf
	}

	
}
