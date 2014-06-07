package chapter1;

public class Q3 {
	
	public boolean isPermutation(String one, String two) {
		
		String first = one.toLowerCase();
		String second = two.toLowerCase();
		
		if (first.length() != second.length()) {
			return false;
		}
		
		int charFrequency[] = new int[256];
		
		int temp;
		for (int i = 0; i < first.length(); i++) {
			temp = first.charAt(i);
			charFrequency[temp]++;
		}
		
		for (int i = 0; i < second.length(); i++) {
			temp = second.charAt(i);
			if (charFrequency[temp] == 0) {
				return false;
			} else {
				charFrequency[temp]--;
			}
		}
		return true;
	}
	
	
	public static void main(String[] args) {
		Q3 test = new Q3();
		System.out.println( test.isPermutation("Elvis", "Lives") );
		
		System.out.println( test.isPermutation("The Meaning of Life ", "The fine game of nil") );
		
		System.out.println( test.isPermutation("this is Wrong!", "test will fail") );
		
		
	}
}
