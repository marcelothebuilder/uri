import java.io.IOException;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) throws IOException {
		try (Scanner scan = new Scanner(System.in)) {
			int A = scan.nextInt();
			int B = scan.nextInt();
			
			int SOMA = A + B;
			
			String result = String.format("SOMA = %d", SOMA);

			System.out.println(result);
			
		} catch (Exception e) {
		}

	}

}