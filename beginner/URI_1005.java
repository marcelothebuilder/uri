import java.io.IOException;
import java.util.Scanner;

public class Main {

	private static double firstGrade;
	private static double secondGrade;

	public static void main(String[] args) throws IOException {
		readTwoDoubles();
		final double FIRST_GRADE_WEIGHT = 3.5;
		final double SECOND_GRADE_WEIGHT = 7.5;

		double average = ((firstGrade * FIRST_GRADE_WEIGHT) + (secondGrade * SECOND_GRADE_WEIGHT))
				/ (FIRST_GRADE_WEIGHT + SECOND_GRADE_WEIGHT);

		String result = String.format("MEDIA = %.5f", average);

		System.out.println(result);
	}

	private static void readTwoDoubles() {
		Scanner scan = new Scanner(System.in);
		firstGrade = scan.nextDouble();
		secondGrade = scan.nextDouble();
		scan.close();
	}

}