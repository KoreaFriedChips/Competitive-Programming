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

    static int n, l;
    static List<String> rset[];

    public static void main(String[] args) throws IOException {
        n = readInt();
        l = readInt();
        rset = new ArrayList[n];
        List<String> ans = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            rset[i] = new ArrayList<>();
            int m = readInt();
            for (int j = 0; j < m; j++)
                rset[i].add(read());
            if (i > 0)
                rset[i].add("");
        }
        solve(0, "", ans);
        Collections.sort(ans);
        for (String x : ans)
            System.out.println(x);
    }

    static void solve(int i, String word, List<String> ans) {
        if (i >= n || word.length() == l) {
            ans.add(word);
            return;
        }
        for (String c : rset[i])
            solve(i + 1, word + c, ans);
    }
}
