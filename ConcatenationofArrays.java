import java.util.Scanner;
 
public class LemonadeVendingMachine {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int t = scanner.nextInt(); // Number of test cases
        
        for (int i = 0; i < t; i++) {
            long n = scanner.nextLong(); // Number of slots
            long k = scanner.nextLong(); // Required number of cans
            
            long[] cans = new long[(int)n];
            long totalCans = 0; // To calculate total cans
            
            for (int j = 0; j < n; j++) {
                cans[j] = scanner.nextLong(); // Number of cans in each slot
                totalCans += cans[j]; // Summing total cans
            }
            
            // Minimum button presses required
            long initialPresses = n; // At least press each button once
            long additionalPresses = Math.max(0, k - initialPresses); // Additional presses needed
            
            // If the total cans is enough to meet or exceed k
            if (totalCans >= k) {
                System.out.println(initialPresses + additionalPresses);
            } else {
                System.out.println(initialPresses); // This condition should not occur as per the problem statement
            }
        }
        
        scanner.close();
    }
}
