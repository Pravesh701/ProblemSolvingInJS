import java.util.Scanner;
import java.util.Arrays;

class FindingMajorityElementApproach1{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		int n, i;
		System.out.println("Enter length of Array");
		n = sc.nextInt();
		int arr[] = new int[n];
		System.out.println("Enter Elements of Array");
		for(i=0; i<n; i++){
			arr[i] = sc.nextInt();
		}
		Arrays.sort(arr);
		FindingMajorityElementApproach1 num =new FindingMajorityElementApproach1();
		int p = num.majorityElement(n, arr);
		if(p== -1)
			System.out.println(p);
		else
			System.out.println(" This is the majority Element "+arr[p]);
	}
	public int majorityElement(int n, int arr[]){
		int i, j;
		for(i=0; i <= (n/2); i++){
			if( arr[i] == arr[i+n/2]){
				return i;
			}
		}
		return -1;
	}
}