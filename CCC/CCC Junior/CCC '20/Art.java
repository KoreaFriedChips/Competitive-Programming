import java.io.*;
import java.util.*;

public class Art {
    public static void main(String[] args) {
        Scanner n = new Scanner(System.in);
        int drops = Integer.parseInt(n.nextLine());
        int[] x = new int[drops];
        int[] y = new int[drops];
        for (int i = 0; i < drops; i++) { 
            String[] inputNum = n.nextLine().split(",");
            x[i] = Integer.parseInt(inputNum[0]); 
            y[i] = Integer.parseInt(inputNum[1]); 
        }
        n.close();
        int xMin = Integer.MAX_VALUE; 
        int xMax = Integer.MIN_VALUE;
        int yMin = Integer.MAX_VALUE;
        int yMax = Integer.MIN_VALUE;
        for (int i = 0; i < drops; i++) {
            if (x[i] < xMin) { 
                xMin = x[i]; 
            }
            if (x[i] > xMax) {
                xMax = x[i];
            }
            if (y[i] < yMin) {
                yMin = y[i];
            }
            if (y[i] > yMax) {
                yMax = y[i];
            }
        }
        System.out.println((xMin - 1) + "," + (yMin - 1)); 
        System.out.println((xMax + 1) + "," + (yMax + 1));
    }
}
    