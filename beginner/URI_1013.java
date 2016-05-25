import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner scanner = new Scanner(System.in);
		int valA = scanner.nextInt();
		int valB = scanner.nextInt();
		int valC = scanner.nextInt();
		scanner.close();
		
		String output = String.format("%d eh o maior", maxOf(valA, valB, valC) );

		System.out.println(output);	
	}

	private static int maxOf(int... values) {
		if (values.length == 2) {
			// só temos 2 valores, podemos retornar o maior e quitar
			return maxOfTwo(values[0], values[1]);
		}

		// [1] será o maior de [0] e [1]
		values[1] = maxOfTwo(values[0], values[1]);

		// queremos uma nova array sem o [0]
		int[] newValues = new int[values.length - 1];
		System.arraycopy(values, 1, newValues, 0, newValues.length);

		return maxOf(newValues);
	}

	private static int maxOfTwo(int a, int b) {
		return (a + b + absOf(a - b)) / 2;
	}

	private static int absOf(int val) {
		return (val < 0) ? -val : val;
	}
}
