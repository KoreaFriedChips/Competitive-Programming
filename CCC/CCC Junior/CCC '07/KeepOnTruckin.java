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
        ArrayList<Integer> motel = new ArrayList<>(Arrays.asList(0, 990, 1010, 1970, 2030, 2940, 3060, 3930, 4060, 4970, 5030, 5990, 6010, 7000));
        //current motels already on the map
        int a = readInt(); int b = readInt(); int m = readInt();
        for (int i = 0; i < m; i++) {
            motel.add(readInt());
        }
        Collections.sort(motel); //sort the new motels in

        long dp[]= new long[motel.size()]; dp[0] = 1; //dp 
        for (int i = 1; i < motel.size(); i++) {
            for (int j = 0; j < i; j++) {
                int dis = motel.get(i)- motel.get(j);
                if (dis >= a && dis <= b) {
                    dp[i] += dp[j];
                }
            }
        }
        System.out.println(dp[motel.size()-1]); 
    }
}

