import java.util.Scanner;


class Anagrams1{
	
	public static void main(String args[]){
		Scanner br = new Scanner(System.in);
		System.out.println("Enter first string.\n");
        String s1=br.nextLine();
		System.out.println("Enter Second string.\n");
		String s2=br.nextLine();
		
		int A[26],B[26],i;
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
    cout<<outp<<endl;
    return 0;
}