import java.io.*;
import java.util.*;

public class BlockGame {
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
    static int[] freq(String x) {
        int[] a = new int[26];
        for (int i = 0; i < x.length(); i++) {
            int id = x.charAt(i)-'a';
            a[id]++;
        }
        return a;
    }
    public static void main(String[] args) throws IOException {
        int n = readInt(); int a[] = new int[26];
        for (int i = 0; i < n; i++) {
            String x = read(), y = read();
            int[] fx = freq(x);
            int[] fy = freq(y);
            for (int j = 0; j < 26; j++) {
                if (fx[j] > fy[j]) {
                    a[j] += fx[j]; 
                } else {
                    a[j] += fy[j];
                }
            }
        }
        for (int i = 0; i < a.length; i++) {
            System.out.println(a[i]);
        }
    }
}

