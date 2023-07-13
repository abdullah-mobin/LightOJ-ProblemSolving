import java.util.Scanner;

public class Positive_Negative_Sign {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            int t = scanner.nextInt(); 
            
            for (int i = 1; i <= t; i++) {
                long n = scanner.nextInt(); 
                long m = scanner.nextInt(); 
                
                System.out.println("Case " + i + ": " + (n*m)/2);
            }
            
            scanner.close();
        }

    }
}