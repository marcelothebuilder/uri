import java.io.IOException;
import java.util.Scanner;

public class Main {

	private static int A;
	private static int B;
	private static int C;
	private static int D;

	public static void main(String[] args) throws IOException {
		readFourIntegers();

		int diff = (A * B - C * D);

		String result = String.format("DIFERENCA = %d", diff);

		System.out.println(result);
	}

	private static void readFourIntegers() {
		Scanner scan = new Scanner(System.in);
		A = scan.nextInt();
		B = scan.nextInt();
		C = scan.nextInt();
		D = scan.nextInt();
		scan.close();
	}

}