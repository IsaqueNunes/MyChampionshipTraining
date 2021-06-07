package uri;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class MediaUm {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        double a, b, c;
        a = Double.parseDouble(in.readLine());
        b = Double.parseDouble(in.readLine());
        c = ((a * 3.5) + (b * 7.5)) / (7.5+3.5);
        System.out.printf("MEDIA = %.5f\n", c);
    }
}
