using System;
class URI{
    static void Main(){
        string a = Console.ReadLine();
        double b = double.Parse(Console.ReadLine().Trim());
        double c = double.Parse(Console.ReadLine().Trim());
        double tot = b + c * 0.15;
        tot = Math.Round(tot, 2);
        Console.WriteLine("TOTAL = R$ {0:f2}", tot);
    }
}