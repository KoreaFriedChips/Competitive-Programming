import java.io.*;
import java.util.*;
import java.util.StringTokenizer;

public class SwapitySwapv3 {
    static void reverse(int[] arr, int a, int b) {
        while (a < b) {
            int t = arr[a];
            arr[a] = arr[b];
            arr[b] = t;
            a++; b--;
        }
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new FileReader("swap.in"));
        PrintWriter pw = new PrintWriter(new BufferedWriter(new FileWriter("swap.out")));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int k = Integer.parseInt(st.nextToken());
        st = new StringTokenizer(br.readLine());
        int a1 = Integer.parseInt(st.nextToken())-1;
        int a2 = Integer.parseInt(st.nextToken())-1;
        st = new StringTokenizer(br.readLine());
        int b1 = Integer.parseInt(st.nextToken())-1;
        int b2 = Integer.parseInt(st.nextToken())-1;
        int cycle = 0;
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) arr[i] = i;
        boolean sorted = true;
        do
        {
            cycle++;
            reverse(arr, a1, a2);
            reverse(arr, b1, b2);
            sorted = true;
            for (int i = 0; sorted && i < n; i++) {
                sorted = arr[i] == i;
            }
        } while (!sorted);
        
        k %= cycle;
        for (int i = 0; i < n; i++) {
            arr[i] = i+1;
        }
        for (int i = 0; i < k; i++) {
            reverse(arr, a1, a2);
            reverse(arr, b1, b2);
        }
        for (int val : arr) {
            pw.println(val);
        }
        pw.close();
    }
}
