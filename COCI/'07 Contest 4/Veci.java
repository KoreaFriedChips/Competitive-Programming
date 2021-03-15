import java.io.*;
import java.util.*;

public class main {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringTokenizer st;

    static String read() throws IOException {
        while (st == null || !st.hasMoreTokens())
            st = new StringTokenizer(br.readLine().trim());
        return st.nextToken();
    }

    static long readLong() throws IOException {
        return Long.parseLong(read());
    }

    static int readInt() throws IOException {
        return Integer.parseInt(read());
    }

    static double readDouble() throws IOException {
        return Double.parseDouble(read());
    }

    static char readChar() throws IOException {
        return read().charAt(0);
    }

    static String readLine() throws IOException {
        return br.readLine().trim();
    }

    public static void main(String[] args) throws IOException {
        int x = readInt();
        String s = String.valueOf(x);
        char[] n = s.toCharArray();
        Arrays.sort(n);
        for (int i = x + 1; i < 999999; i++) {
            String str = String.valueOf(i);
            char[] m = str.toCharArray();
            Arrays.sort(m);
            if (Arrays.equals(n, m)) {
                System.out.println(i);
                return;
            }
        }
        System.out.println(0);
    }
}
