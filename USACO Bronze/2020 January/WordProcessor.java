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
        int n = readInt(), k = readInt();
        String[] arr = new String[103];
        for (int i = 0; i < n; i++) {
            arr[i] = read();
        }

        int len = 0;
        for (int i = 0; i < n; i++) {
            if (i < n -1) {
                if (len + arr[i].length() <= k) {
                    if (len + arr[i+1].length() <= k-arr[i].length()) {
                        System.out.print(arr[i] + " ");
                        len += arr[i].length();
                    } else {
                        System.out.print(arr[i]);
                        len += arr[i].length();
                    }
                } else {
                    System.out.println();
                    len = 0;
                    if (len + arr[i+1].length() <= k-arr[i].length()) {
                        System.out.print(arr[i] + " ");
                        len += arr[i].length();
                    } else {
                        System.out.print(arr[i]);
                        len += arr[i].length();
                    }
                }
            } else {
                if (len + arr[i].length() <= k) {
                    System.out.print(arr[i]);
                } else {
                    System.out.println();
                    System.out.print(arr[i]);
                }
            }
        }
        System.out.println();
    }
}
