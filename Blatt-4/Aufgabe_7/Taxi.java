//
// Taxi
// Created by Domenic Wolf on 15.01.20.

public class Taxi {
	
	/**
	* Ein Taxi ist ein Objekt, das aus dem Fahrernamen, dem Kennzeichen und * einer eindeutigen Nummer besteht.
	*/
	private String namefahrer; 
	private String kennzeichen; 
	private int id;
	
	/**
	* Der Konstruktor legt ein Taxi Objekt an und speichert darin den * Fahrernamen, das Kennzeichen und die Taxinummer.
	*/
	public Taxi(String namefahrer, String kennzeichen, int id) { 
	this.namefahrer = namefahrer;
	this.kennzeichen = kennzeichen;
	this.id = id;
	}
	
	/**
	* Diese Methoden verwenden wir zur Ausgabe der Meldungen in der Klasse * Schlange.
	*/
	public String getName() { 
		return namefahrer;
	}
	public String getKennzeichen() { 
		return kennzeichen;
	}
	public int getId() { 
		return id;
	} 
}