package chapter1;

public class Q1 {

	String testString;
	
	public Q1 (String s) {
		testString = s;
	}
	
	public String getString() {
		return testString;
	}
	
	public boolean isCharsUnique() {
		String test = testString.toLowerCase();
		boolean[] seen = new boolean[26];
		
		for(int i = 0; i < test.length(); i++) {
			char c = test.charAt(i);
			int letter = c - 'a';
			if (seen[letter]) {
				return false;
			} else {
				seen[letter] = true;
			}
		}
		
		return true;
	}
	
	public static void main(String[] args) {
		
		Q1 test1 = new Q1("abcdefxyz");
		System.out.println( test1.getString() + ": " + test1.isCharsUnique() );
		
		Q1 test2 = new Q1("abcdxyza");
		System.out.println( test2.getString() + ": " + test2.isCharsUnique() );
		
		Q1 test3 = new Q1("abcdxyzA");
		System.out.println( test3.getString() + ": " + test3.isCharsUnique() );
		
	}
	
}
