class Book {
	int bookId;
	String bookName;
	String author;
	double price;
}

class Test9 {
	public static void main(String[] args) {
		Book b1 = new Book();
		b1.bookId = 101;
		b1.bookName = "Java Programming";
		b1.author = "James";
		b1.price = 450;

		System.out.println(b1);
		System.out.println("Book ID : " + b1.bookId);
		System.out.println("Book Name : " + b1.bookName);
		System.out.println("Author : " + b1.author);
		System.out.println("Price : " + b1.price);
	}
}
