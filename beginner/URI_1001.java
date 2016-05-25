import java.io.IOException;
 
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {
 
    public static void main(String[] args) throws IOException {
 
        /**
         * Escreva a sua solução aqui
         * Code your solution here
         * Escriba su solución aquí
         */
         
         try (java.util.Scanner scan = new java.util.Scanner(System.in)) {
        	 int A = scan.nextInt();
             int B = scan.nextInt();
             int X = A + B;
             
             String result = String.format("X = %d", X);
             
             System.out.println(result);
         } catch (Exception e) {
		}
 
    }
 
}