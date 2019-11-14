
public class LuckySevens {

	public static void main(String[] args) {
		System.out.println("Lower end of the range:");
		int lower = IO.readInt();
		System.out.println("Higher end of the range:");
		int higher = IO.readInt();
		int count = 0;

		for (int i = lower; i <= higher; i++) {
			int temp = i;

			while (Math.abs(temp) > 0) {
				if (Math.abs(temp) % 10 == 7) {
					count++;
					temp /= 10;
				} else {
					temp /= 10;
				}
			}

		}

		IO.outputIntAnswer(count);

	}

}
