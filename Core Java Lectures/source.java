class Date {
	int day, month, year;
	String dow;
}

class Test {
	public static void main(String[] args){
		Date d1;//reference
		d1 = new Date();
		d1.day = 24;
		d1.month = 11;
		d1.year = 2026;
		d1.dow = "Tue";
		System.out.println("Date:- " + d1.dow + "," + d1.day + "/" + d1.month + "/" + d1.year + ".");
	}
}