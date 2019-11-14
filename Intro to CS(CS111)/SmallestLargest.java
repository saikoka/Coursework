
public class SmallestLargest {

	public static void main(String[] args) {
		double numbersEntered = 0;
		double numbersEntered2=0;
		
		double max = 0;
		double min=0;
		System.out.println("Enter a number that will terminate the list");
		double endList=IO.readDouble();
		System.out.println("Enter a series of numbers");
		double firstNumber=IO.readDouble();
		while(firstNumber==endList) {
			IO.reportBadInput();
			System.out.println("Enter a series of numbers");
			firstNumber=IO.readDouble();
			max=firstNumber;
			min=firstNumber;
			
			
		}
		if (firstNumber!=endList) {
		max=firstNumber;
		min=firstNumber;
		}
		while(numbersEntered!=endList) {
			numbersEntered=IO.readDouble();
			if(numbersEntered==endList) {
				break;
			}
			if(numbersEntered>max) {
				max=numbersEntered;
			}
			else if(numbersEntered<min) {
				min=numbersEntered;
			}
			
		}
		
		if((max==firstNumber)&&(min==firstNumber)) {
			IO.reportBadInput();
			System.out.println("Enter a series of numbers");
			firstNumber=IO.readDouble();
			while(firstNumber==endList) {
				IO.reportBadInput();
				System.out.println("Enter a series of numbers");
				firstNumber=IO.readDouble();
				max=firstNumber;
				min=firstNumber;
				
				
			}
			if (firstNumber!=endList) {
			max=firstNumber;
			min=firstNumber;
			}
			while(numbersEntered2!=endList) {
				numbersEntered2=IO.readDouble();
				if(numbersEntered2==endList) {
					break;
				}
				if(numbersEntered2>max) {
					max=numbersEntered2;
				}
				else if(numbersEntered2<min) {
					min=numbersEntered2;
				}
				
			}
			IO.outputDoubleAnswer(min);
			IO.outputDoubleAnswer(max);
		}
		else {
		IO.outputDoubleAnswer(min);
		IO.outputDoubleAnswer(max);
		}

}
}
