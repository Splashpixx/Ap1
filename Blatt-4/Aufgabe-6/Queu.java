import java.util.*;
import javax.swing.text.*;
import javax.xml.transform.*;

public class Queu {
	
	// Eigenschaft
	private int[] warteschlange;
	
	//Konstruktor 
	public Queu(){
		this.warteschlange = new int[5]; 
		this.warteschlange[0] = 3;
		this.warteschlange[1] = 7;
	}
	
	public Queu(int a){
		this.warteschlange = new int[a]; 
	}
	
	// Methoden
	private  int nextFree(){
			int countUp = 0;
			
			for (int i = 0; i < 5; i++) 
			{
				if (this.warteschlange[i] > 0) countUp++;
			};
			return countUp;
		}

	public void output(){
		int anzahl = this.nextFree();
		int[] arr  = this.warteschlange;
		for (int y = 0; y < 5; y++) {
			System.out.print(arr[y]+ " " );
		}
		
		System.out.println("es sind aktuell " + anzahl + " stellen belegt");
	}

	public int nextLeave() {	
		
		int anzahl = this.nextFree();
		
		for (int i = 0; i < anzahl; i++) {
			
			int foo = i + 1;
			if (i < 4) 
			{
				this.warteschlange[i] = this.warteschlange[foo];
			}
			else 
			{
				this.warteschlange[i] = 0;	
			}
		}
				return anzahl;
	}
		
	public int rein(int a) {	
		
		int anzahl = nextFree();
	
		if (anzahl < 5) 
			{
				this.warteschlange[anzahl] = a;
				System.out.println("\nAnzahl der int's im Array: " + nextFree() );
			}
			else 
			{
				System.out.println("Die warteschlange ist im moment Voll");
			}	
			
		return anzahl;
	}
		
	public void is_voll() {	
		int anzahl = this.nextFree();
	
		if (anzahl == 5) 
			{
				System.out.println( "\nDie warteschlange ist im moment Voll");			
			}
			else 
			{
				System.out.println( "in der Warteschlange sind derzeit nur " + anzahl + " Leute");

			}
	}
		
	public void is_leer() {
		int anzahl = this.nextFree();
		
		if (anzahl == 0) 
			{	
				System.out.println("Die schlange ist leer, was ein wunder bei dem Service");	
			}
			else 
			{
				System.out.println("in der Warteschlange sind derzeit " + anzahl + " Leute");

			}	
	}
		
	public int next() {	
		int anzahl = this.warteschlange[0];
		System.out.println(anzahl);
		return anzahl;
	}
}