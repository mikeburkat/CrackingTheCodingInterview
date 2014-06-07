package chapter1;

public class Q5 {
	
	public String compressString(String original) {
		
		original = original.toLowerCase();
		StringBuilder compressed = new StringBuilder();
		
		int i = 0;
		while (i < original.length()) {
			char c = original.charAt(i);
			int frequency = 0;
			while (i < original.length() && c == original.charAt(i)) {
				frequency++;
				i++;
			}
			compressed.append(c);
			compressed.append(frequency);
		}
		String comp = compressed.toString();
		
		if (original.length() <= comp.length())
			return original;
		else
			return comp;
	}
	
	
	public static void main(String[] args) {
		Q5 test = new Q5();
		String testS1 = "aabcccccaaa";
		System.out.println(testS1 +" | "+ test.compressString(testS1) );
		
		String testS2 = "abcdef";
		System.out.println(testS2 +" | "+ test.compressString(testS2) );
		
		
		
	}
}
