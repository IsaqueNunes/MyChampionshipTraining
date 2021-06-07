package uri;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class ExtremamenteBasico {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);
        int A, B;
        A = Integer.parseInt(in.readLine());
        B = Integer.parseInt(in.readLine());
        System.out.printf("X = %d\n", A + B);
    }
    
}
