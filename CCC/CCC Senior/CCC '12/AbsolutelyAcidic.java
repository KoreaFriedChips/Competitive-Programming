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
        int n = readInt(); int ar[] = new int[1003]; int arr[] = new int[1003];
        for (int i = 0; i < n; i++) {
            int x = readInt();
            ar[x]++; arr[x]++;
        }
        Arrays.sort(ar);
        int f = ar[ar.length-1];
        int s = ar[ar.length-2];
        if (f == s) {
            LinkedList<Integer> list = new LinkedList<>();
            for (int i = 1; i <= 1000; i++) {
                if (arr[i] == f) {
                    list.add(i);
                }
            }
            System.out.println(list.get(list.size()-1) - list.get(0));
        }
        else {
            int val = 0;
            LinkedList<Integer> list = new LinkedList<>();
            for (int i = 1; i <= 1000; i++) {
                if (arr[i] == f) {
                    val = i;
                } else if (arr[i] == s) {
                    list.add(i);
                }
            }
            int a = Math.abs(val-list.get(0));
            int b = Math.abs(val-list.get(list.size()-1));
            if (a >= b) {
                System.out.println(a);
            } else {
                System.out.println(b);
            }
        }
    }
}

