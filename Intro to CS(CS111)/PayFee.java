
public class PayFee {

	public static void main(String[] args) {
		System.out.println("What is the payment amount?");
		double paymentAmount=IO.readDouble();
		double moneyOwed;
		if(paymentAmount<=500) {
			moneyOwed=10;
		}
		else if(paymentAmount>500 && paymentAmount<5000) {
			if ((paymentAmount*.01)>20) {
				moneyOwed=paymentAmount*.01;
			}
			else {
				moneyOwed=20;
			}
		}
		else if(paymentAmount>=5000&&paymentAmount<10000) {
			if((paymentAmount*.02)>120) {
				moneyOwed=paymentAmount*.02;
			}
			else {
				moneyOwed=120;
			}
		}
		else {
			if(paymentAmount>10000&&paymentAmount<=15000) {
				moneyOwed=((paymentAmount-10000)*.03)+200;
			}
			else {
				moneyOwed=((paymentAmount-15000)*.04)+350;
			}
		}
		
		IO.outputDoubleAnswer(moneyOwed);

	}

}
