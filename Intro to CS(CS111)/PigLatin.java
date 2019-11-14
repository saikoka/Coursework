
public class PigLatin {

	public static void main(String[] args) {
		System.out.println(translate("apple"));
	}
	
	public static String translate (String original) {
		original=original.toLowerCase();
		if (original.charAt(0)=='a'||original.charAt(0)=='e'||original.charAt(0)=='i'||original.charAt(0)=='o'||original.charAt(0)=='u') {
			return original+"vai";
		}
		else {
			return original.substring(1)+original.charAt(0)+"ai";
		}
	}

}
