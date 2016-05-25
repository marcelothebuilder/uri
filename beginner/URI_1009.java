import java.io.IOException;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) throws IOException {
		Employee employee = readEmployee();
		System.out.println(String.format("TOTAL = R$ %.2f", employee.getTotal()));
	}

	private static Employee readEmployee() {
		Scanner scan = new Scanner(System.in);
		
		Employee employee = new Employee();
		employee.setName(scan.nextLine());
		employee.setFixedSalary(scan.nextDouble());
		employee.setSalesAmount(scan.nextDouble());
		
		scan.close();
		
		return employee;
	}
}

class Employee {
	private String name;
	private double fixedSalary;
	private double salesAmount;
	
	private final double BONUS_OVER_SALES = 0.15;
	
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public double getFixedSalary() {
		return fixedSalary;
	}
	public void setFixedSalary(double fixedSalary) {
		this.fixedSalary = fixedSalary;
	}
	public double getSalesAmount() {
		return salesAmount;
	}
	public void setSalesAmount(double salesAmount) {
		this.salesAmount = salesAmount;
	}
	
	public double getBonus() {
		return salesAmount * BONUS_OVER_SALES;
	}
	
	public double getTotal() {
		return getFixedSalary() + getBonus();
	}
}