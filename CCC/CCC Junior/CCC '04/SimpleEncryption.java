import java.util.*;
import java.io.*;

public class SimpleEncryption {
    public static int shiftValue(char n) {
        String lex = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int shift = 0;
        for (int i = 0; i < 26; i++) {
            if (n == lex.charAt(i)) {
                shift = i;
            }
        }
        return shift;
    }

    public static char shift(char m, int s) {
        if (m + s <= 90) {
            m += s;
        } else {
            m += (s-26);
        }
        return m;
    }

    static String removeSpecialCharacter(String s) {
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) < 'A' || s.charAt(i) > 'Z' && s.charAt(i) < 'a' || s.charAt(i) > 'z') {
                s = s.substring(0, i) + s.substring(i + 1);
                i--;
            }
        }
        return s;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String key = in.nextLine();
        String mess = in.nextLine();
        String message = removeSpecialCharacter(mess);

        int row = message.length()/key.length()+2;
        char[][] block = new char[row][key.length()];
        for (int i = 0; i < key.length(); i++) {
            block[0][i] = key.charAt(i);
        }
        int count = 0;
        for (int i = 1; i < row; i++) {
            for (int j = 0; j < key.length(); j++) {
                if (count >= message.length()) {
                    block[i][j] = ' ';
                } else {
                    block[i][j] = message.charAt(count);
                    count++;
                }
            }
        }

        for (int i = 1; i < row; i++) {
            for (int j =0; j < key.length(); j++) {
                if (block[i][j] != ' ') {
                    block[i][j]= shift(block[i][j], shiftValue(block[0][j]));
                }
            }
        }

        for (int i = 1; i < row; i++) {
            for (int j =0; j < key.length(); j++) {
                if (block[i][j] != ' ') {
                    System.out.print(block[i][j]);
                }
            }
        }

    }
}