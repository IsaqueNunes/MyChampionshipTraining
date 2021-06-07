using System;
class URI{
    static void Main(){
        float a = float.Parse(Console.ReadLine().Trim());
        float b = float.Parse(Console.ReadLine().Trim());
        float c = float.Parse(Console.ReadLine().Trim());
        double d = ((a * 2) + (b * 3) + (c * 5))/10;
        Console.WriteLine("MEDIA = {0:f1}", d);
    }
}