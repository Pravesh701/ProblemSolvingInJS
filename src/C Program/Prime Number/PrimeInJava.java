import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;
 
class TestClass {
    public static void main(String args[] ) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        StringBuilder sb = new StringBuilder();
        
        for (int i=2; i<n; i++) {
            if (isPrime(i)) {
                sb.append(i).append(" ");
            }
        }
        System.out.println(sb.toString().trim());
        br.close();
    }
    
    private static boolean isPrime(int val) {
        for (int i=2; i<=val/2; i++) {
            if (val % i == 0) {
                return false;
            }
        }
        return true;
    }
}