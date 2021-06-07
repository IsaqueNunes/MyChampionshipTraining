package uri;

import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import static java.lang.Math.abs;;

public class MaiorABS {
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        String[] values = in.readLine().split(" ");
        int a = Integer.parseInt(values[0]);
        int b = Integer.parseInt(values[1]);
        int c = Integer.parseInt(values[2]);
        int maiorAB = (a + b + abs(a - b)) / 2;
        int maiorABC = (maiorAB + c + abs(maiorAB - c)) / 2;
        System.out.printf("%d eh o maior\n", maiorABC);
    }
}