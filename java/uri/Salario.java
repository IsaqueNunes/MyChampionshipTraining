package uri;

import java.io.IOException;
import java.io.InputStreamReader;
import java.io.BufferedReader;

public class Salario {
    public static void main(String[] args) throws IOException{
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        int a, b;
        float c;
        a = Integer.parseInt(in.readLine());
        b = Integer.parseInt(in.readLine());
        c = Float.parseFloat(in.readLine());
        System.out.printf("NUMBER = %d\n", a);
        System.out.printf("SALARY = U$ %.2f\n", b * c);        
    }
}