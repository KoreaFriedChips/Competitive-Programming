import java.io.*;
import java.util.*;
import java.util.StringTokenizer;
import java.math.RoundingMode;
import java.text.DecimalFormat;

public class GlobalWarming {
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
        int n = readInt();
        while (n != 0) {
            int[] diff = new int[n-1];
            int x = readInt();
            for (int i = 0; i < n-1; i++) {
                int y = readInt();
                diff[i] = y - x;
                x = y;
            }
            if (diff.length == 0) {
                System.out.println(0);
                n = readInt();
                continue;
            }
            int j = 1;
            main : for (; j < diff.length; j++) {
                for (int k = j; k < diff.length; k++) {
                    if (diff[k-j] != diff[k])
                        continue main;
                }
                break;
            }
            System.out.println(j);
            n = readInt();
        }
    }
}

