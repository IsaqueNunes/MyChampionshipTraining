package uri;

import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class CalculoSimples {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        String strprod[] = in.readLine().split(" ");
        String strprod2[] = in.readLine().split(" ");
        int qt1 = Integer.parseInt(strprod[1]), qt2 = Integer.parseInt(strprod2[1]);
        float valor1 = Float.parseFloat(strprod[2]), valor2 = Float.parseFloat(strprod2[2]);
        float total = qt1 * valor1 + qt2 * valor2;
        System.out.printf("VALOR A PAGAR: R$ %.2f\n", total);
    }
}
