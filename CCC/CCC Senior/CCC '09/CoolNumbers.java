import java.io.*;
import java.util.*;
import java.util.StringTokenizer;
import java.math.RoundingMode;
import java.text.DecimalFormat;

public class main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringTokenizer st;

    static String read () throws IOException {
        while (st == null || !st.hasMoreTokens())
            st = new StringTokenizer(br.readLine().trim());
        return st.nextToken();
    }
    static long readLong () throws IOException {
        return Long.parseLong(read());
    }
    static int readInt () throws IOException {
        return Integer.parseInt(read());
    }
    static double readDouble () throws IOException {
        return Double.parseDouble(read());
    }
    static char readChar () throws IOException {
        return read().charAt(0);
    }
    static String readLine () throws IOException {
        return br.readLine().trim();
    }
    public static void main(String[] args) throws IOException {
        int a = readInt();
        int b = readInt();
        int count = 0;
        for (int i = 1; i <= b; i++) {
            if (Math.pow(i, 6) <= b && Math.pow(i, 6) >= a) {
                count++;
            }
            if (Math.pow(i, 6) > b) {
                break;
            }
        }
        System.out.println(count);
    }
}