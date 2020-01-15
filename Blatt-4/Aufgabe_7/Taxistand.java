//
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
	// Required Methods: Reset/Clear, Enter, Leave,
	
	private  int nextFree(){
			int countUp = 0;
			
			for (int i = 0; i < 5; i++) 
			{
				if (this.warteschlange[i] > 0){ countUp++;}
			};
			return countUp;
		}
	
	public void add(Taxi x){
		// Stuff
	} 
}