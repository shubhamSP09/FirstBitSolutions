class SalesManager {
	int id;
	String name;
	double salary;
	double incentive;
	double target;
}

class Test6 {
	public static void main(String[] args) {
		SalesManager s1 = new SalesManager();
		s1.id = 103;
		s1.name = "Suresh";
		s1.salary = 60000;
		s1.incentive = 10000;
		s1.target = 500000;

		System.out.println(s1);
		System.out.println("ID : " + s1.id);
		System.out.println("Name : " + s1.name);
		System.out.println("Salary : " + s1.salary);
		System.out.println("Incentive : " + s1.incentive);
		System.out.println("Target : " + s1.target);
	}
}
