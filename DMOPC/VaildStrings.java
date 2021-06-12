import java.io.*;
import java.util.*;
import java.util.StringTokenizer;

class TestCode {
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
        while (n != 0) {
            String x = readLine();
            boolean flag = false;
            ArrayList<Character> brack = new ArrayList<>();
            for (int i = 0; i < x.length(); i++) {
                if (x.charAt(i) == '(') {
                    brack.add('(');
                } else if (x.charAt(i) == ')') {
                    if (brack.isEmpty()) {
                        System.out.println("NO");
                        flag = true;
                        break;
                    } else {
                        brack.remove(0);
                    }
                }
            }
            if (brack.isEmpty() && !flag) {
                System.out.println("YES");
            } else if (!brack.isEmpty() && !flag) {
                System.out.println("NO");
            }
            n--;
        }
    }
}