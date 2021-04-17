import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int month = Integer.parseInt(input.nextLine());
        int day = Integer.parseInt(input.nextLine());
        if (month > 2) {
            System.out.println("After");
        } else if (month < 2) {
            System.out.println("Before");
        }
        if (month == 2) {
            if (day == 18) {
                System.out.println("Special");
            } else if (day > 18) {
                System.out.println("After");
            } else {
                System.out.println("Before");
            }
        }
    }
}