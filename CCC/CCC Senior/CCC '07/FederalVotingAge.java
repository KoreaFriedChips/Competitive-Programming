import java.io.*;
import java.util.*;

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
        for (int i = 0; i < n; i++) {
            int y = readInt(), m = readInt(), d = readInt();
            if (y > 1989) {
                System.out.println("No");
                continue;
            } else if (y == 1989) {
                if (m > 2) {
                    System.out.println("No");
                } else if (m == 2) {
                    if (d > 27) {
                        System.out.println("No");
                    } else {
                        System.out.println("Yes");
                    }
                } else {
                    System.out.println("Yes");
                }
            } else {
                System.out.println("Yes");
            }
        }
    }
}

