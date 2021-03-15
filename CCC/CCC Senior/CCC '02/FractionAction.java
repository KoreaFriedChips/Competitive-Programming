import java.io.*;
import java.util.*;

public class Main {
    static String simplify(int n, int d) {
        for (int i = 10; i > 0; i--) {
            if (n%i == 0 && d%i ==0) {
                n = n/i;
                d = d/i;
            }
        }
        return (n+"/"+d);
    }
    static int hasCommonFactor(int n, int d) {
        int commonFactor = 0;
        if (d % n == 0) {
            commonFactor = n;
        } else if (d % 2 == 0 && n % 2 ==0) {
            commonFactor = 2;
        }
        return commonFactor;
    }
    static String simpleFraction(int n, int d) {
        int numerator = n % d;
        if (hasCommonFactor(numerator, d) > 0) {
            d = d/hasCommonFactor(numerator, d);
            numerator = numerator/hasCommonFactor(numerator, d);
        }
        return (numerator+"/"+d);
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int numerator = input.nextInt();
        int denominator = input.nextInt();
        if (numerator % denominator == 0) {
            System.out.println(numerator / denominator);
        } else if (numerator < denominator) {
            System.out.println(simplify(numerator,denominator));
        } else {
            System.out.println(numerator/denominator + " " + simpleFraction(numerator,denominator));
        }
    }
}