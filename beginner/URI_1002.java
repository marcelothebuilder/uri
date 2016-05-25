import java.io.IOException;
import java.util.Scanner;

/**
 * IMPORTANT: O nome da classe deve ser "Main" para que a sua solução execute
 * Class name must be "Main" for your solution to execute El nombre de la clase
 * debe ser "Main" para que su solución ejecutar
 */
public class Main {

	public static void main(String[] args) throws IOException {

		/**
		 * Escreva a sua solução aqui Code your solution here Escriba su
		 * solución aquí
		 */
		
		final double PI = 3.14159;
		
		try (Scanner scan = new Scanner(System.in)) {
			double raio = scan.nextDouble();
			double area = Math.pow(raio, 2.0) * PI;
			
			String result = String.format("A=%.4f", area);

			System.out.println(result);
		} catch (Exception e) {
		}

	}

}