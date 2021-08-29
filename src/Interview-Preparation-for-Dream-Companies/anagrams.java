import java.util.Scanner;
import java.util.Arrays;

//import java.util.*;


class Anagrams{
	public static void main(String args[]){
		//String str1,str2;
		Scanner br = new Scanner(System.in);
		System.out.println("Enter first string.\n");
        String s1=br.nextLine();
		System.out.println("Enter Second string.\n");
		String s2=br.nextLine();
		if(areAngrams(s1,s2)){
			System.out.println("Angrams String.");
		}
		else{
			System.out.println("Not Anagrams.");
		}
	}
	static int areAnagrams(String str1, String str2)
    {
        
        int count1[] = new int[1000]; 
        int count2[] = new int[1000];
 
        
        for (int i = 0; i < str1.length() ; i++)
            count1[str1.charAt(i) -'a']++;
     
        
        for (int i = 0; i < str2.length() ; i++)
            count2[str2.charAt(i) -'a']++;
 
        
        int result = 0;
        for (int i = 0; i < 26; i++)
            result += Math.abs(count1[i] -
                               count2[i]);
        return result;
    }
}