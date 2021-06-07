package uri;

import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Consumo {
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int x = Integer.parseInt(in.readLine());
        double y = Double.parseDouble(in.readLine());
        double gasto = x/y;
        System.out.printf("%.3f km/l", gasto);
    }
}