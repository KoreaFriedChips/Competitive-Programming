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
    static String solve(String a, String b) {
        String ans = "";
        for (int i = 0; i < a.length(); i++) {
            if (a.charAt(i) == b.charAt(i))
                ans += "0";
            else
                ans += "1";
        }
        return ans;
    }
    public static void main(String[] args) throws IOException {
        int r = readInt(), c = readInt();
        Set<String> s = new HashSet<>();
        String[] a = new String[r];
        for (int i =0; i < r; i++) {
            a[i] = readLine().replaceAll(" ", "");
        }
        for (int i = 0; i < r; i++) {
            String row = a[i];
            for (int j = i+1; j < r; j++) {
                row = solve(row, a[j]);
            }
            s.add(row);
        }
        System.out.println(s.size());
    }
}

