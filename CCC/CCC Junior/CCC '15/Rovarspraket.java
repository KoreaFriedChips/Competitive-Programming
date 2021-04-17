import java.io.*;
import java.util.*;

public class Rovarspraket {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String word = in.nextLine(); //store input
        String vowel = "aeiou";
        String con = "bcdfghjklmnpqrstvwxyz";
        String ncon = "cdfghjklmnpqrstvwxyzz";
        String cvow = "aaeeeiiiiooooouuuuuuu";
        String ans = "";
        for (int i = 0; i < word.length(); i++) {
            if (vowel.indexOf(word.charAt(i)) >= 0) {
                ans = ans+word.charAt(i);
            }
            else {
                int index = con.indexOf(word.charAt(i));
                ans = ans+word.charAt(i)+cvow.charAt(index)+ncon.charAt(index);
            }
        }
        System.out.println(ans);
    }
}