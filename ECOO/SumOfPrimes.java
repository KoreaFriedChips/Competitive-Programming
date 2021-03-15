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
    public static void main(String[] args) throws IOException {
        ArrayList<Integer> primes = sieve(10000000);
        int size = primes.size() -1;
        loop:
        for (int i = 0; i < 5; i++) {
            int n = readInt();
            if (isPrime(n)) {
                System.out.println(n + " = " + n);
                continue;
            }
            for (int j = size; j >= 3; j--) {
                int m = primes.get(j);
                if (n - m >= m && isPrime(n-m)) {
                    System.out.println(n + " = " + m + " + " + (n-m));
                    continue loop;
                }
            }
            for (int j = n/3; j >= 3; j--) {
                for (int k = n/3*2; k >= j; k--) {
                    if (n - j - k >= k && isPrime(j) && isPrime(k) && isPrime(n-j-k)) {
                        System.out.println(n + " = " + j + " + " + k + " + " + (n-j-k));
                        continue loop;
                    }
                }
            }
        }
    }

    static ArrayList<Integer> sieve(int n) {
        ArrayList<Integer> values = new ArrayList();
        boolean[] isprime = new boolean[n];
        Arrays.fill (isprime, true);
        for (int i = 2; i < n; i++) {
            if (isprime[i]) {
                for (int j = 2*i; j < n; j+=i) {
                    isprime[j] = false;
            }
            values.add(i);
            }
        }
        values.remove(0);
        return values;
    }

    static boolean isPrime(int n) {
        if (n <= 1) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
}

