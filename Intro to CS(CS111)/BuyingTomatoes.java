
public class BuyingTomatoes {

	public static void main(String[] args) {
		int pounds;
		double cost;
		double price;
		System.out.println("type the number of pounds of tomatoes");
		pounds = IO.readInt();
		while(pounds<0) {
			System.out.println("number must be postiive, please enter number:");
			pounds=IO.readInt();
		}
		
		System.out.println("type in cost per tomato");
		cost = IO.readDouble();
		while(cost<0) {
				System.out.println("cost per tomato must be postiive, please enter number:");
				cost=IO.readDouble();
		}
		price= pounds*cost;
		IO.outputDoubleAnswer(price);
		System.out.println("the total price of the tomatoes is: " + price);

	}

}
