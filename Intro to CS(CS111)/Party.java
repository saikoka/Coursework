
public class Party {

	public static void main(String[] args) {
		System.out.println("How many people are attending the party?");
		int numberPeople=IO.readInt();
		
		System.out.println("How many slices should each person be able to eat?");
		int slices=IO.readInt();
		
		System.out.println("How many cans should each person be able to drink?");
		int cans=IO.readInt();
		
		System.out.println("What is the cost of a pizza pie");
		double costPizza=IO.readDouble();
		
		System.out.println("How many slices of pizza are in a pizza pie?");
		int slicesPerPie=IO.readInt();
		
		System.out.println("What is the cost of a case of soda?");
		double costSoda=IO.readDouble();
		
		System.out.println("How many cans are in a case of soda?");
		int cansPerCase=IO.readInt();
		
		int numberPies;
		int numberCases;
		if((double)(numberPeople*slices)%slicesPerPie!=0) {
			numberPies=numberPeople*slices/slicesPerPie+1;
		}
		
		else{
			numberPies=numberPeople*slices/slicesPerPie;
		}
		
		if((double)(numberPeople*cans)%cansPerCase!=0) {
			numberCases=numberPeople*cans/cansPerCase+1;
		}
		else {
			numberCases=numberPeople*slices/slicesPerPie;
		}
		
		IO.outputDoubleAnswer((numberPies*costPizza)+(numberCases*costSoda));
	}

}
