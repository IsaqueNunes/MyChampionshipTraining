using System;
class URI{
    static void Main(string[] args){
        int a = Int32.Parse(Console.ReadLine().Trim());
        int b = Int32.Parse(Console.ReadLine().Trim());
        float c = float.Parse(Console.ReadLine().Trim());
        float s = b * c;
        Console.WriteLine("NUMBER = {0}", a);
        Console.WriteLine("SALARY = U$ {0:f2}", s);
    }
}