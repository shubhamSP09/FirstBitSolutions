class Product {
	int productId;
	String productName;
	double price;
	int quantity;
}

class Test10 {
	public static void main(String[] args) {
		Product p1 = new Product();
		p1.productId = 201;
		p1.productName = "Laptop";
		p1.price = 55000;
		p1.quantity = 2;

		System.out.println(p1);
		System.out.println("Product ID : " + p1.productId);
		System.out.println("Product Name : " + p1.productName);
		System.out.println("Price : " + p1.price);
		System.out.println("Quantity : " + p1.quantity);
	}
}
