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

    static boolean monkey(String x) {
        if (x.length() > 0) {
            int id = x.indexOf("N");
            if (id >= 0) {
                boolean flag = false;
                for (int i = 0; i < x.length(); i++) {
                    if (x.charAt(i) == 'N') {
                        flag = flag || (word(x.substring(0, i)) && monkey(x.substring(i + 1)));
                        if (flag)
                            break;
                    }
                }
                if (!flag) {
                    return word(x);
                }
                return flag;
            } else {
                return word(x);
            }
        }
        return false;
    }

    static boolean word(String x) {
        if (x.length() > 0) {
            int id = x.lastIndexOf("S");
            if (x.equals("A")) {
                return true;
            }
            if (x.startsWith("B") && x.endsWith("S")) {
                return monkey(x.substring(1, id));
            }
        }
        return false;
    }

    public static void main(String[] args) throws IOException {
        while (true) {
            String x = readLine();
            if (x.equals("X")) {
                break;
            }
            System.out.println(monkey(x) ? "YES" : "NO");
        }
    }
}
