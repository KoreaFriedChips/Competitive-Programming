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
        int n = readInt(), t = readInt(), m[] = new int[t+1];
        int[][] p = new int[n][3]; int[][] v = new int[n][3];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 3; j++) {
                p[i][j] = readInt(); 
                v[i][j] = readInt();
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = t; j >= 0; j--) {
                for (int k = 0; k < 3; k++) {
                    if (p[i][k] <= j) {
                        m[j] = Math.max(m[j], m[j-p[i][k]] + v[i][k]);
                    }
                }
            }
        }
        System.out.println(m[t]);
    }
}