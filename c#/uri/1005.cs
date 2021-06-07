using System;
class URI{
    static void Main(string[] args){
        float a = float.Parse(Console.ReadLine().Trim());
        float b = float.Parse(Console.ReadLine().Trim());
        double c = ((a * 3.5) + (b * 7.5))/11;
        Console.WriteLine("MEDIA = {0:f5}", c);
    }
}