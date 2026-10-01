class Date {
	int day;
	int month;
	int year;
	String dow;
}

class Test1 {
	public static void main(String[] args) {
		Date d1 = new Date();
		d1.day = 30;
		d1.month = 9;
		d1.year = 2026;
		d1.dow = "Wednesday";

		System.out.println(d1);
		System.out.println("Date : " + d1.day + "-" + d1.month + "-" + d1.year);
		System.out.println("Day : " + d1.dow);
	}
}
