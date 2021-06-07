using System;
class URI{
    static void Main(){
        int a = Int32.Parse(Console.ReadLine().Trim());
        int b = Int32.Parse(Console.ReadLine().Trim());
        int c = Int32.Parse(Console.ReadLine().Trim());
        int d = Int32.Parse(Console.ReadLine().Trim());
        int dif = (a * b - c * d);
        Console.WriteLine("DIFERENCA = {0}", dif);
    }
}