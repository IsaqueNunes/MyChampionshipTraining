using System;
using System.Linq;
class URI{
    static void Main(string[] args){
        float a, b, c, total = 0;
        for(int i = 0; i < 2; i++){
            var input = Console.ReadLine().Split(' ').Select(s => float.Parse(s)).ToArray();
            a = input[0]; b = input[1]; c = input[2];
            total+=b * c;
        }
        Console.WriteLine("VALOR A PAGAR: R$ {0:f2}", total);
    }
}