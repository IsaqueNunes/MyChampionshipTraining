package uri;

import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Esfera {
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        double raio = Double.parseDouble(in.readLine());
        double volume;
        final double PI = 3.14159;
        volume = (4.0/3.0) * PI * (raio * raio * raio);
        System.out.printf("VOLUME = %.3f", volume);
    }
}