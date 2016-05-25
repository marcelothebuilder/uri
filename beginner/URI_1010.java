import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) throws IOException {
		ShoppingCart cart = new ShoppingCart();
		readProducts(cart);
		System.out.println(String.format("VALOR A PAGAR: R$ %.2f", cart.getTotal()));
	}

	private static void readProducts(ShoppingCart cart) {
		Scanner scan = new Scanner(System.in);

		Product product = new Product();
		product.setCode(scan.nextInt());
		product.setNumberOfUnits(scan.nextInt());
		product.setUnitPrice(scan.nextDouble());
		
		cart.add(product);
		
		Product product2 = new Product();
		product2.setCode(scan.nextInt());
		product2.setNumberOfUnits(scan.nextInt());
		product2.setUnitPrice(scan.nextDouble());
		
		cart.add(product2);
		
		scan.close();
	}
}

class Product {
	private int code;
	private int numberOfUnits;
	private double unitPrice;

	public int getCode() {
		return code;
	}

	public void setCode(int code) {
		this.code = code;
	}

	public int getNumberOfUnits() {
		return numberOfUnits;
	}

	public void setNumberOfUnits(int numberOfUnits) {
		this.numberOfUnits = numberOfUnits;
	}

	public double getUnitPrice() {
		return unitPrice;
	}

	public void setUnitPrice(double unitPrice) {
		this.unitPrice = unitPrice;
	}

	public double getTotal() {
		return getNumberOfUnits() * getUnitPrice();
	}
}

class ShoppingCart {
	private List<Product> products = new ArrayList<>();
	public void add(Product product) {
		products.add(product);
	}
	
	public double getTotal() {
		double total = 0;
		for (Product product : products) {
			total += product.getTotal();
		}
		return total;
	}
}