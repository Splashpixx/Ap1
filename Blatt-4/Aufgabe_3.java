import java.util.Arrays;
import java.util.Random;
import java.util.*;

class Aufgabe_3 {
	public static void main(String[] args) {

		int[] myIntArray = new int[100];
			for (int i = 0; i < myIntArray.length; i++) {
				myIntArray[i] = (int) (Math.random() * 100 -5);
			}	
		
		System.out.println(Arrays.toString(myIntArray));
		Arrays.sort(myIntArray); 
		System.out.println(Arrays.toString(myIntArray));
		
		Scanner in = new Scanner(System.in);
		int find = in.nextInt();
		System.out.println(find + " found at index = "+Arrays.binarySearch(myIntArray,find)); 
	}
}