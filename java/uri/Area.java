package uri;

import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Area{
    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        String[] values = in.readLine().split(" ");
        final double PI = 3.14159;
        double a = Double.parseDouble(values[0]);
        double b = Double.parseDouble(values[1]);
        double c = Double.parseDouble(values[2]);
        double triangulo, circulo, trapezio, quadrado, retangulo;

        triangulo = (a * c)/2.0;
        circulo = PI * (c * c);
        trapezio = ((a + b) * c) / 2;
        quadrado = b * b;
        retangulo = a * b;

        System.out.printf(
            "TRIANGULO: %.3f\n" +
            "CIRCULO: %.3f\n" +
            "TRAPEZIO: %.3f\n" +
            "QUADRADO: %.3f\n" +
            "RETANGULO: %.3f\n", 
            triangulo, circulo, trapezio, quadrado, retangulo
        );
    }
}