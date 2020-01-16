
// Taxistand
// Created by Domenic Wolf on 15.01.20.

public class Taxistand {
	
	// Eigenschaft
	private int nextFree;
	private Taxi[] warteschlange;
	
	//Konstruktor 
	public Taxistand(int baum){
		this.nextFree = baum;
		warteschlange = new Taxi[5];
	}
	
	// Methoden
	// Required Methods: ausgeben, rein, raus, Clear
	
	public void ausgeben(){
		
		System.out.println("Taxistand");
		
		for (int i = 0; i < 5; i++) {
			if(i<nextFree) {
				System.out.print(warteschlange[i].getId());
			}else{
				System.out.print("frei");
			}
		}

	}
	
	public void rein(Taxi a) {
		
		if (nextFree < 5){
			this.warteschlange[nextFree] = a;
			System.out.println("Das Taxi: "+a.getId()+", "+a.getName()+","+a.getKennzeichen()+" fährt auf Platz "+ (nextFree+1));
			nextFree++;
		} else {
			System.out.println("Die warteschlange ist im moment voller als ich am Wochenende");
		}
	}

	public void raus() {

		if(nextFree==0){
			System.out.println("Es ist kein Taxi da, das den Stand verlassen kann.");
		}else{
			Taxi a = this.warteschlange[0];
			System.out.println("Das Taxi: "+a.getId()+", "+a.getName()+","+a.getKennzeichen()+" drifted away.");
			
			for (int i = 0; i < nextFree; i++) {
				int foo = i + 1;
				if (foo < nextFree) {
					this.warteschlange[i] = this.warteschlange[foo];
				} else {
					this.warteschlange[i] = null;
				}
			}
			nextFree--;
		}

	}

	public void clear() {
		
		nextFree = 0;
		warteschlange = new Taxi[5];
		System.out.println("Alle 5 Plätze sind leer.");
	}
}