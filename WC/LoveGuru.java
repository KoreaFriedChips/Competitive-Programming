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

    static int qpow(int x, int n, int mod) {
        if (n == 0)
            return 1;
        int temp = qpow(x, n / 2, 10);
        if (n % 2 == 0)
            return temp * temp % mod;
        return temp * temp % mod * x % mod;
    }

    public static void main(String[] args) throws IOException {
        String a = readLine().toLowerCase(), b = readLine().toLowerCase();
        int x = 0, y = 0;
        for (int i = 0; i < a.length(); i++) {
            x += qpow(a.charAt(i) - 'a' + 1, i + 1, 10);
        }
        for (int i = 0; i < b.length(); i++) {
            y += qpow(b.charAt(i) - 'a' + 1, i + 1, 10);
        }
        x %= 10;
        if (x == 0)
            x += 10;
        y %= 10;
        if (y == 0)
            y += 10;
        System.out.println(x + y);
    }
}
