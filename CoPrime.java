import java.util.Scanner;

public class CoPrime {
    public static int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first number: ");
        int a = sc.nextInt();

        System.out.print("Enter second number: ");
        int b = sc.nextInt();

        if (gcd(a, b) == 1)
            System.out.println("The numbers are Co-prime");
        else
            System.out.println("The numbers are NOT Co-prime");
    }
}
