class HR {
	int id;
	String name;
	double salary;
	double commission;
}

class Test5 {
	public static void main(String[] args) {
		HR h1 = new HR();
		h1.id = 102;
		h1.name = "Priya";
		h1.salary = 55000;
		h1.commission = 5000;

		System.out.println(h1);
		System.out.println("ID : " + h1.id);
		System.out.println("Name : " + h1.name);
		System.out.println("Salary : " + h1.salary);
		System.out.println("Commission : " + h1.commission);
	}
}
