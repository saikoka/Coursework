
public class LuckyNines {

	public static void main(String[] args) {
		System.out.println("Lower end of the range:");
		int lower= IO.readInt();
		System.out.println("Higher end of the range:");
		int higher= IO.readInt();
		IO.outputIntAnswer(countLuckyNines(lower, higher));

	}
	
	public static int countLuckyNines(int lowerEnd, int upperEnd) {
		int count = 0;
		if(upperEnd>lowerEnd){
		for (int i = lowerEnd; i <= upperEnd; i++) {
			int temp = i;
			while (Math.abs(temp) >0) {
				if (Math.abs(temp) % 10 == 9) {
					count++;
					temp /= 10;
				} else {
					temp /= 10;
				}
			}

		}
		return count;
	}
		else {
			return -1;
		}

}
}
