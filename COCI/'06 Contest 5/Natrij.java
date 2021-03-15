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
        String[] t1 = readLine().split(":");
        String[] t2 = readLine().split(":");
        int h = Integer.parseInt(t2[0]) - Integer.parseInt(t1[0]);
        int m = Integer.parseInt(t2[1]) - Integer.parseInt(t1[1]);
        int s = Integer.parseInt(t2[2]) - Integer.parseInt(t1[2]);
        if (s < 0) {
            s += 60;
            m--;
        }
        if (m < 0) {
            m += 60;
            h--;
        }
        if (h < 0) {
            h += 24;
        }
        if (h == 0 && m == 0 && s == 0) {
            h = 24;
        }
        System.out.printf("%02d:%02d:%02d", h, m, s);
    }
}
