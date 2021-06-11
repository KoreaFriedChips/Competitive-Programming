import java.io.*;
import java.util.*;

public class LuhnAlgorithm {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
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

    static int digitSum(int n) {
        int ans = 0;
        while (n != 0) {
            ans += n % 10;
            n /= 10;
        }
        return ans;
    }

    public static void main(String[] args) throws IOException {
        for (int i = 0; i < 5; i++) {
            String[] n = readLine().split(" ");
            StringBuilder id = new StringBuilder();
            for (int j = 0; j < 5; j++) {
                int ans = 0;
                if (n[j].length() % 2 == 0) {
                    for (int k = 1; k < n[j].length(); k += 2) {
                        ans += digitSum(2 * Integer.parseInt(String.valueOf(n[j].charAt(k))));
                    }
                    for (int k = 0; k < n[j].length(); k += 2) {
                        ans += Integer.parseInt(String.valueOf(n[j].charAt(k)));
                    }
                    ans = 10 - ans % 10;
                    if (ans == 10) {
                        id.append(0);
                    } else {
                        id.append(ans);
                    }
                } else {
                    for (int k = 0; k < n[j].length(); k += 2) {
                        ans += digitSum(2 * Integer.parseInt(String.valueOf(n[j].charAt(k))));
                    }
                    for (int k = 1; k < n[j].length(); k += 2) {
                        ans += Integer.parseInt(String.valueOf(n[j].charAt(k)));
                    }
                    ans = 10 - ans % 10;
                    if (ans == 10) {
                        id.append(0);
                    } else {
                        id.append(ans);
                    }
                }
            }
            System.out.println(id);
        }
    }
}