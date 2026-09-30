class Student {
	String frn;
	String studentName;
	int distanceCovered;
}

class Test2 {
	public static void main(String[] args){
		Student s1 = new Student();
		s1.frn = "FRNj02026/20";
		s1.studentName = "shubham";
		s1.distanceCovered = 3;
		
		System.out.println("Student---------------------------------");
		System.out.println("FRN		:	" + s1.frn);
		System.out.println("Student Name	:	" + s1.studentName);
		System.out.println("Distance Covered:	" + s1.distanceCovered);

	}
}