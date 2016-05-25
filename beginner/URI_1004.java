import java.io.IOException;
import java.util.Scanner;

public class Main {

	private static int first;
	private static int second;

	public static void main(String[] args) throws IOException {
		readTwoIntegers();

		int PROD = first * second;

		String result = String.format("PROD = %d", PROD);

		System.out.println(result);
	}

	private static void readTwoIntegers() {
		Scanner scan = new Scanner(System.in);
		first = scan.nextInt();
		second = scan.nextInt();
		scan.close();
	}

}