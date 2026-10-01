class PlacedStudent {
	String frn;
	String studentName;
	double distanceCovered;
	String companyName;
	String designation;
}

class Test3 {
	public static void main(String[] args) {
		PlacedStudent p1 = new PlacedStudent();
		p1.frn = "18J0725/20";
		p1.studentName = "Amit";
		p1.distanceCovered = 30.5;
		p1.companyName = "TCS";
		p1.designation = "Software Developer";

		System.out.println(p1);
		System.out.println("FRN : " + p1.frn);
		System.out.println("Student Name : " + p1.studentName);
		System.out.println("Distance Covered : " + p1.distanceCovered);
		System.out.println("Company Name : " + p1.companyName);
		System.out.println("Designation : " + p1.designation);
	}
}
