class Student {
	String frn;
	String studentName;
	double distanceCovered;
}

class Test2 {
	public static void main(String[] args) {
		Student s1 = new Student();
		s1.frn = "18J0725/20";
		s1.studentName = "Shubham";
		s1.distanceCovered = 25.5;

		System.out.println(s1);
		System.out.println("FRN : " + s1.frn);
		System.out.println("Student Name : " + s1.studentName);
		System.out.println("Distance Covered : " + s1.distanceCovered);
	}
}
