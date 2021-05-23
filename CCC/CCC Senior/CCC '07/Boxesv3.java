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

    public static void main(String[] args) throws IOException {
        int l, w, h, n, j, m;
        n = readInt();
        Box[] b = new Box[n];
        Box hold;
        for (int i = 0; i < n; i++) {
            l = readInt();
            w = readInt();
            h = readInt();
            b[i] = new Box(l, w, h);
        }
        for (int i = 1; i < n; i++) {
            j = i - 1;
            hold = b[i];
            while (j >= 0 && b[j].volume > hold.volume) {
                b[j + 1] = b[j];
                j--;
            }
            b[j + 1] = hold;
        }
        m = readInt();
        for (int i = 0; i < m; i++) {
            l = readInt();
            w = readInt();
            h = readInt();
            hold = new Box(l, w, h);
            j = 0;
            while (j < n && (hold.l > b[j].l || hold.w > b[j].w || hold.h > b[j].h))
                j++;
            if (j < n)
                System.out.println(b[j].volume);
            else
                System.out.println("Item does not fit.");
        }
    }
}

class Box {
    public int l, w, h;
    public long volume;

    public Box(int a, int b, int c) {
        int t;
        l = a;
        w = b;
        h = c;
        if (l > w) {
            t = l;
            l = w;
            w = t;
        }
        if (w > h) {
            t = w;
            w = h;
            h = t;
        }
        if (l > w) {
            t = l;
            l = w;
            w = t;
        }
        volume = l * w * h;
    }
}