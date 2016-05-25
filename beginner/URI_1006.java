import java.io.IOException;
import java.util.Scanner;

public class Main {

	private static double firstGrade;
	private static double secondGrade;
	private static double thirdGrade;

	public static void main(String[] args) throws IOException {
		readThreeDoubles();
		final double FIRST_GRADE_WEIGHT = 2;
		final double SECOND_GRADE_WEIGHT = 3;
		final double THIRD_GRADE_WEIGHT = 5;

		double gradesSum = (firstGrade * FIRST_GRADE_WEIGHT) + (secondGrade * SECOND_GRADE_WEIGHT) + (thirdGrade * THIRD_GRADE_WEIGHT);
		double average = gradesSum / (FIRST_GRADE_WEIGHT + SECOND_GRADE_WEIGHT + THIRD_GRADE_WEIGHT);

		String result = String.format("MEDIA = %.1f", average);

		System.out.println(result);
	}

	private static void readThreeDoubles() {
		Scanner scan = new Scanner(System.in);
		firstGrade = scan.nextDouble();
		secondGrade = scan.nextDouble();
		thirdGrade = scan.nextDouble();
		scan.close();
	}

}