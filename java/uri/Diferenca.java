package uri;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Diferenca{
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        int a, b, c, d, dif;
        a = Integer.parseInt(in.readLine());
        b = Integer.parseInt(in.readLine());
        c = Integer.parseInt(in.readLine());
        d = Integer.parseInt(in.readLine());
        dif = (a * b - c * d);  
        System.out.printf("DIFERENCA = %d\n", dif);
    }
}