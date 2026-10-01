class Employee {
	int id;
	String name;
	double salary;
}

class Test4 {
	public static void main(String[] args) {
		Employee e1 = new Employee();
		e1.id = 101;
		e1.name = "Raj";
		e1.salary = 45000;

		System.out.println(e1);
		System.out.println("ID : " + e1.id);
		System.out.println("Name : " + e1.name);
		System.out.println("Salary : " + e1.salary);
	}
}
