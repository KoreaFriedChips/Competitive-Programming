import java.io.*;
import java.util.*;

public class EnglishFrench {
    public static void main(String[] args) {
        int tCounter = 0, sCounter = 0;
        Scanner input = new Scanner(System.in);
        int numberOfLines = Integer.parseInt(input.nextLine());
        String[] lines = new String[numberOfLines];
        for (int i = 0; i < numberOfLines; i++) {
            lines[i] = input.nextLine();
            for (int j = 0; j < lines[i].length(); j++) {
                String sentence = lines[i].toLowerCase();
                if (sentence.charAt(j) == 't') {
                    tCounter += 1;
                } else if (sentence.charAt(j) == 's'){
                    sCounter += 1;
                }
            }
        } 
        if (tCounter > sCounter) {
            System.out.println("English");
        } else if (tCounter == sCounter) {
            System.out.println("French");
        } else {
            System.out.println("French");
        }
    }
}