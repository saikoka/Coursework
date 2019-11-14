
public class TwoLargest {

	public static void main(String[] args) {

		double largest = 0;
		double secondLargest = -Double.MAX_VALUE;
		System.out.println("Enter a number that will terminate the list");
		double endList = IO.readDouble();
		System.out.println("Enter a series of numbers");
		double firstNumber = IO.readDouble();
		double numbersEntered = endList + 1;
		while (firstNumber == endList) {
			IO.reportBadInput();
			System.out.println("Enter a series of numbers");
			firstNumber = IO.readDouble();
			largest = firstNumber;
		}
		if (firstNumber != endList) {
			largest = firstNumber;
		}

		while (numbersEntered != endList) {
			numbersEntered = IO.readDouble();
			if (numbersEntered == endList) {
				break;
			} else if (numbersEntered > largest) {
				secondLargest = largest;
				largest = numbersEntered;
			} else if (numbersEntered > secondLargest) {
				secondLargest = numbersEntered;
			}
		}

		IO.outputDoubleAnswer(largest);
		IO.outputDoubleAnswer(secondLargest);
	}

}
