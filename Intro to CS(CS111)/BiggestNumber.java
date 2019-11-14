
public class BiggestNumber {

	public static void main(String[] args) {
		System.out.print("How many numbers to enter? ");
		int input = IO.readInt(); //The number of numbers the user will input.//
		int max=0;
		int current;
		System.out.print("Enter a number: ");
		current = IO.readInt();
		max=current;
		for(int i =1; i<input; i++) {
			System.out.println("Enter a number: ");
			current = IO.readInt();
			
			if (current>max) {
				max=current;
			}
			System.our.println();
		}
		IO.outputIntAnswer(max);

	}

}
