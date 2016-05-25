import java.util.Locale;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner scan = new Scanner(System.in);
		final long MINUTE_SECONDS = 60;
		final long HOURS_SECONDS = MINUTE_SECONDS * 60;
		
		long timeInSeconds = scan.nextLong();
		
		long hours = timeInSeconds / HOURS_SECONDS;
		long hoursRemainder = timeInSeconds % HOURS_SECONDS;
		long minutes = hoursRemainder / MINUTE_SECONDS;
		long minutesRemainder = hoursRemainder % MINUTE_SECONDS;
		
		String timeFormatted = String.format("%d:%d:%d", hours, minutes, minutesRemainder);
		
		System.out.println(timeFormatted);
		
		scan.close();
	}
}