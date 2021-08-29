import java.util.Scanner;


class Anagrams1{
	
	public static void main(String args[]){
		Scanner br = new Scanner(System.in);
        String str1=br.nextLine();
		String str2=br.nextLine();
		
		int[] A=new int[26];
		int[] B=new int[26];
		int i;
    for(i=0 ; i< 26 ; i++)
        A[i] = B[i] = 0;
    for(i = 0 ; i< str1.length() ; i++)
        A[(int)(str1[i] - 'a')]++;
    for(i = 0 ; i< str2.length() ; i++)
        B[(int)(str2[i] - 'a')]++;	
    int outp = 0;
    for(i=0 ; i< 26 ; i++)
    {
        outp = outp + A[i] + B[i] - 2*min(A[i],B[i]);
    }
	System.out.println(outp);
}
}