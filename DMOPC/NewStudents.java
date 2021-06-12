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
        DecimalFormat df = new DecimalFormat("#.###");
        df.setRoundingMode(RoundingMode.CEILING);
        int n = readInt(), sum = 0;
        for (int i = 0; i < n; i++) {
            sum += readInt();
        }
        int m = readInt();
        for (int i = 0; i < m; i++) {
            sum += readInt();
            n++;
            System.out.println(df.format((double)sum/n));
        }
    }
}