import java.util.Scanner;


class Aufgabe_2 {
	
	public static int ackermann( int n, int m )
		{	
			
			System.out.println(m);
			if ( n == 0 )
				return m + 1;
			else
			
				if ( m == 0 )
					return ackermann( n - 1, 1 );
				else
					return ackermann( n - 1, ackermann(n, m - 1) );
		}
	
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		System.out.println("Willkommen in einem ziemlich unnötigen Programm\nJetzt gib bitte der reihe nach x und y an :");
		
		System.out.print("x ");
		int x = in.nextInt();
		
		System.out.print("y ");
		int y = in.nextInt();
		
		System.out.println("ackermann(" + x + "," + y + ")=" );
		try {
			
			System.out.println(ackermann(x,y));
			
		} catch (Exception e) {
			System.out.print(" Da isch was kaputt");
		}finally{
			System.out.println("Well unlucky");
		}
	}
}

//int result;
//result = m+1 ? (n == 0) : ackermann( n - 1, 1 ) ? m = 0  : ackermann( n - 1, ackermann(n, m - 1) );
//return result;