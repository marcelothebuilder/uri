import java.io.IOException;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) throws IOException {
		Employee employee = readEmployee();

		System.out.println(String.format("NUMBER = %d", employee.getNumber()));
		System.out.println(String.format("SALARY = U$ %.2f", employee.getMonthlySalary()));
	}

	private static Employee readEmployee() {
		Scanner scan = new Scanner(System.in);
		
		int number = scan.nextInt();
		int workedHours = scan.nextInt();
		double salPerHour = scan.nextDouble();
		
		Employee employee = new Employee();
		employee.setNumber(number);
		employee.setWorkedHours(workedHours);
		employee.setSalaryPerHour(salPerHour);
		scan.close();
		return employee;
	}
}

class Employee {
	private int number;
	private int workedHours;
	private double salaryPerHour;

	public int getNumber() {
		return number;
	}

	public void setNumber(int number) {
		this.number = number;
	}

	public int getWorkedHours() {
		return workedHours;
	}

	public void setWorkedHours(int workedHours) {
		this.workedHours = workedHours;
	}

	public double getSalaryPerHour() {
		return salaryPerHour;
	}

	public void setSalaryPerHour(double salaryPerHour) {
		this.salaryPerHour = salaryPerHour;
	}

	public double getMonthlySalary() {
		return workedHours * salaryPerHour;
	}
}