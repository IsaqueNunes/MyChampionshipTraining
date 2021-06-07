package uri;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class MediaDois {
    public static void main(String[] args) throws IOException{
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        double a, b, c, m;
        a = Double.parseDouble(in.readLine());
        b = Double.parseDouble(in.readLine());
        c = Double.parseDouble(in.readLine());
        m = ((a * 2) + (b * 3) + (c * 5))/(2 + 3 + 5);
        System.out.printf("MEDIA = %.1f\n", m);
    }
}