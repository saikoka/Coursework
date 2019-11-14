
public class WordCount {

	public static void main(String[] args) {
		System.out.println(countWords("Th1sisfru$tr4t1ng.", 20));
		
	}

	public static int countWord(String input) {
		int z = 0;
		for (int i = 0; i < input.length(); i++) {

			if (input.toLowerCase().charAt(i) >= 'a' && input.toLowerCase().charAt(i) <= 'z') {
				z++;
			}
		}

		return z;

	}
	
	public static int countWords(String original, int maxLength) {
		int placement=0;
		int counter=0;
		for(int i=0; i<original.length();i++) {
			if(original.charAt(i)==' ') {
				if(countWord(original.substring(placement, i))<=maxLength) {
					counter++;
				}
				placement=i;
			}
		}
		if(countWord(original.substring(placement, original.length()))<=maxLength) {
			counter++;
		}
		return counter;
	}
}
