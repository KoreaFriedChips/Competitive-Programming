import java.io.*;
import java.util.*;

public class DamageOutput {
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
        int n = readInt(); long m = readLong(), psa[] = new long[n+1];
        for (int i = 1; i <= n; i++) {
            psa[i] = readLong() +psa[i-1];
        }
        for (int i = 1; i <= n; i++)
	    {
		    System.out.print(psa[i] + " ");
	    }
        int ans = Integer.MAX_VALUE;
        for (int L=1, R=1; R <= n; R++) {
            while (psa[R] -psa[L-1] >= m) {
                ans = Math.min(ans, R- L +1);
                System.out.println(R+" "+L);
                L++;
            }
        }
        System.out.println(ans == Integer.MAX_VALUE? -1: ans);
    }
}
