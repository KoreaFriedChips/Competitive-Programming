import java.util.*;

 public class CyclicShift {
     public static String shiftText(String s, int cut) { 
        String s1 = s.substring(0, cut); 
        String s2 = s.substring(cut); 
        return s2 + s1; 
    }
    public static void main(String[] args) {
        boolean containsShift = false;
        Scanner in = new Scanner(System.in); 
        String text = in.nextLine();
        String shift = in.nextLine();
        for (int i = 0; i < shift.length(); i++) { 
            if (text.contains(shiftText(shift, i))) { 
                containsShift = true;
                break;
            }
        }
        System.out.println(containsShift? "yes":"no");
    }
 }
 