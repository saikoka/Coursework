
public class Compress {

	public static void main(String[] args) {

		System.out.println(compress("ab"));

	}

	public static String compress(String original) {
		String newString = "";
		int same = 1;
		if (original.length() == 1) {
			return original;
		}
		for (int i = 0; i < original.length() - 1; i++) {

			if (original.charAt(i) == original.charAt(i + 1)) {
				int z = i;
				while (original.charAt(z) == original.charAt(z + 1)) {
					same++;
					z++;
					if (z >= original.length() - 1) {
						break;
					}

				}
				newString = newString + Integer.toString(same) + original.charAt(i);
				same = 1;
				i = z;
			} else {
				newString = newString + original.charAt(i);
			}
		}
		if (original.charAt(original.length() - 1) != original.charAt(original.length() - 2)) {
			newString = newString + original.charAt(original.length() - 1);
		}

		return newString;
	}

}