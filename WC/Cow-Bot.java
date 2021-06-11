import java.io.*;
import java.util.*;

public class Main {
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

    static boolean isPrime(int n) {
        if (n <= 1)
            return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }

    static boolean isPalindrome(String s) {
        return new StringBuilder(s).reverse().toString().equals(s);
    }

    public static void main(String[] args) throws IOException {
        int n = readInt();
        for (int i = 0; i < n; i++) {
            int a = readInt(), b = readInt();
            for (int j = 0; j < b; j++) {
                if (isPrime(a))
                    a *= 11;
                else if (Math.sqrt(a) - (int) Math.sqrt(a) == 0)
                    a += Integer.parseInt(new StringBuilder(Integer.toString(a)).reverse().toString());
                else if (isPalindrome(Integer.toString(a)))
                    a = a * 10 + 4;
                else if (Integer.toString(a).charAt(0) == '2')
                    a = Integer.parseInt(new StringBuilder(Integer.toString(a)).insert(0, "5").toString());
                else if (Integer.toString(a).contains("7"))
                    a /= 10;
                else if (a % 6 == 0)
                    a = Integer.parseInt(Integer.toString(a).substring(1));
                else {
                    StringBuilder str = new StringBuilder(Integer.toString(a));
                    if (str.length() % 2 == 0)
                        a = Integer.parseInt(str.insert(str.length() / 2, 1).toString());
                    else
                        a += 231;
                }
            }
            System.out.println(a);
        }
    }
}
