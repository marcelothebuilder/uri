import java.util.Locale;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Integer[] numberToLedCount = new Integer[10];
		
		// number -> leds
		numberToLedCount[0] = 6;
		numberToLedCount[1] = 2;
		numberToLedCount[2] = 5;
		numberToLedCount[3] = 5;
		numberToLedCount[4] = 4;
		numberToLedCount[5] = 5;
		numberToLedCount[6] = 6;
		numberToLedCount[7] = 3;
		numberToLedCount[8] = 7;
		numberToLedCount[9] = 6;
		
		Scanner scanner = new Scanner(System.in);
		int testCases = scanner.nextInt();
		scanner.nextLine();
		
		for(int caseNo = 0; caseNo < testCases; caseNo++) {
			String numberAsString = scanner.nextLine().trim();
			char[] chars = numberAsString.toCharArray();
			int ledCount = 0;
			for (int i = 0; i < chars.length; i++) {
				int charAsInt = Character.getNumericValue(chars[i]);
				ledCount += numberToLedCount[charAsInt];
			}
			System.out.println(ledCount + " leds");
		}
		
		scanner.close();
	}
}
