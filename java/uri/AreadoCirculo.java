package uri;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class AreadoCirculo {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        Double r, a;
        final Double pi = 3.14159;
        r = Double.parseDouble(in.readLine());
        a = r * r * pi;
        System.out.printf("A=%.4f\n", a);
    }
}
