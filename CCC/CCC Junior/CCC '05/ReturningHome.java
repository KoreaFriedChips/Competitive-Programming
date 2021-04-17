import java.util.*;
import java.io.*;

public class ReturningHome {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        ArrayList<String> direction = new ArrayList<>(10);
        ArrayList<String> street = new ArrayList<>(10);
        while (in.hasNext()) {
            String turn = in.nextLine();
            direction.add(turn);
            String name = in.nextLine();
            street.add(name);
            if (street.contains("SCHOOL")) {
                break;
            }
        }
        for (int i = direction.size() - 1; i > 0; i--) {
            if (direction.get(i).equals("R")) {
                System.out.println("Turn LEFT onto " + street.get(i - 1) + " street.");
            } else {
                System.out.println("Turn RIGHT onto " + street.get(i - 1) + " street.");
            }
        }
        if (direction.get(0).equals("R")) {
            System.out.println("Turn LEFT into your HOME.");
        } else {
            System.out.println("Turn RIGHT into your HOME.");
        }
    }
}