import java.io.*;
import java.util.*;

public class Test {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
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
        String key = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        String x = readLine();
        String ans = "";
        for (int i = 0; i < x.length(); i++) {
            int k = key.indexOf(x.charAt(i));
            ans += key.charAt(k+9);
        }
        System.out.println(ans);
    }
}
