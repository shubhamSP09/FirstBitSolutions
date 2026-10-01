class Admin {
	int id;
	String name;
	double salary;
	double allowance;
}

class Test7 {
	public static void main(String[] args) {
		Admin a1 = new Admin();
		a1.id = 104;
		a1.name = "Neha";
		a1.salary = 50000;
		a1.allowance = 7000;

		System.out.println(a1);
		System.out.println("ID : " + a1.id);
		System.out.println("Name : " + a1.name);
		System.out.println("Salary : " + a1.salary);
		System.out.println("Allowance : " + a1.allowance);
	}
}
