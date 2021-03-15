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
        int n = readInt();
        String[] a = new String[n];
        for (int i = 0; i < n; i++) {
            a[i] = readLine();
        }
        int m = readInt();
        String[] b = new String[m];
        for (int i = 0; i < m; i++) {
            b[i] = readLine();
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i].equals(b[j])) {
                    ans++;
                    break;
                }
            }
        }
        System.out.println(ans);
    }
}