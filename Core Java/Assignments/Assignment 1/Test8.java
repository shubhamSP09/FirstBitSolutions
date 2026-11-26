class BankAccount {
	long accountNumber;
	String holderName;
	double currentBalance;
	double interestRate;
}

class Test8 {
	public static void main(String[] args) {
		BankAccount b1 = new BankAccount();
		b1.accountNumber = 1234567890;
		b1.holderName = "Akash";
		b1.currentBalance = 75000;
		b1.interestRate = 6.5;

		System.out.println(b1);
		System.out.println("Account Number : " + b1.accountNumber);
		System.out.println("Holder Name : " + b1.holderName);
		System.out.println("Current Balance : " + b1.currentBalance);
		System.out.println("Interest Rate : " + b1.interestRate);
	}
}
