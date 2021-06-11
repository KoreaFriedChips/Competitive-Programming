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

    public static void main(String[] args) throws IOException {
        int n = readInt(), t = readInt();
        Map<String, Integer> m = new HashMap<>();
        m.put("home", 0);
        m.put("Waterloo GO", 1);
        for (int i = 0; i < n; i++) {
            String s = readLine();
            m.put(s, m.size());
        }
        List<Integer>[] l = new ArrayList[m.size()];
        for (int i = 0; i < m.size(); i++) {
            l[i] = new ArrayList<Integer>();
        }
        for (int i = 0; i < t; i++) {
            String[] s = readLine().split("-");
            int a = m.get(s[0]), b = m.get(s[1]);
            l[a].add(b);
            l[b].add(a);
        }
        Queue<Integer> q = new ArrayDeque<>();
        int[] dis = new int[m.size()];
        Arrays.fill(dis, 100000);
        dis[0] = 0;
        q.offer(0);
        while (!q.isEmpty()) {
            int cur = q.poll();
            for (int i : l[cur]) {
                if (dis[i] > dis[cur] + 1) {
                    dis[i] = dis[cur] + 1;
                    q.offer(i);
                }
            }
        }
        if (dis[m.get("Waterloo GO")] == 100000)
            System.out.println("RIP ACE");
        else
            System.out.println(dis[m.get("Waterloo GO")]);
    }
}
