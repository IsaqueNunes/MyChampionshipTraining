package uri;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.text.DecimalFormat;

public class SalarioBonus {
    public static void main(String[] args) throws IOException{
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        String a, d = "\0";
        double b, c;
        a = in.readLine();
        a = d;
        d = a;
        b = Double.parseDouble(in.readLine());
        c = Double.parseDouble(in.readLine());
        System.out.println("TOTAL = R$ " + new DecimalFormat("#0.00").format(b + (c * 0.15)));
    }
}
