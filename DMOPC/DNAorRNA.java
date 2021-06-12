import java.io.*;
import java.util.*;
import java.util.StringTokenizer;

public class DNAorRNA {
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

    static boolean check(char n) {
        return n == 'A' || n == 'C' || n == 'G' || n == 'T' || n == 'U';
    }

    public static void main(String[] args) throws IOException {
        int n = readInt();
        String x = readLine();
        for (int i = 0; i < n; i++) {
            if (!check(x.charAt(i))) {
                System.out.println("neither");
                return;
            }
        }
        int cT = 0, cU = 0;
        for (int i = 0; i < n; i++) {
            if (x.charAt(i) == 'T') {
                cT++;
            } else if (x.charAt(i) == 'U') {
               cU++;
            }
        }
        if (cT > 0 && cU == 0)
            System.out.println("DNA");
        else if (cU > 0 && cT == 0)
            System.out.println("RNA");
        else if (cU == 0 && cT == 0)
            System.out.println("both");
        else if (cU > 0 && cT > 0)
            System.out.println("neither");
    }
}