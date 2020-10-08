import java.util.*;
import java.io.*;

public class SubarraysOfAnArray {
    public static void main (String[] args) {
        FastScanner scanner = new FastScanner();
        int n = scanner.nextInt(); // size of the array
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }

        /*
         * The below code finds all the subarrays of an array in O(n^2) time Complexity 
         * There are n*(n + 1) / 2 subarrays of an array. 
         * where n = size of that array 
         */

        for (int i = 0; i < n; i++) {
            String res = "";
            for (int j = i; j < n; j++) {
                res += arr[j];
                System.out.println(res);
            }
        }

    }
}


class FastScanner {
    public BufferedReader reader;
    public StringTokenizer tokenizer;
    public FastScanner() {
        reader = new BufferedReader(new InputStreamReader(System.in), 32768);
        tokenizer = null;
    }
    public String next() {
        while (tokenizer == null || !tokenizer.hasMoreTokens()) {
            try {
                tokenizer = new StringTokenizer(reader.readLine());
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        }
        return tokenizer.nextToken();
    }
    public int nextInt() {
        return Integer.parseInt(next());
    }
    public long nextLong() {
        return Long.parseLong(next());
    }
    public double nextDouble() {
        return Double.parseDouble(next());
    }
    public String nextLine() {
        try {
            return reader.readLine();
        } catch(IOException e) {
            throw new RuntimeException(e);
        }
    }
}

