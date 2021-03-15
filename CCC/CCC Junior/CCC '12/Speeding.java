import java.util.*;

public class Speeding {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int speedLimit = input.nextInt();
        int recordedSpeed = input.nextInt();
        if (recordedSpeed - speedLimit <= 0) {
            System.out.println("Congratulations, you are within the speed limit!");
        } else if (20 >= recordedSpeed - speedLimit && recordedSpeed - speedLimit >= 1) {
            System.out.println("You are speeding and your fine is $100.");
        } else if (30 >= recordedSpeed - speedLimit) {
            System.out.println("You are speeding and your fine is $270.");
        } else if (recordedSpeed - speedLimit >= 31) {
            System.out.println("You are speeding and your fine is $500.");
        }
    }
}