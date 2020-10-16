using System;

namespace MyCalculator
{
    class Program
    {
        private const double min = -1000;
        private const double max = 1000;
        static void Main(string[] args)
        {
            double first = 0;
            double second = 0;
            
            double sum = 0;
            double diff = 0;
            double mult = 0;
            double div = 0;
            
            bool OKBool = true;
            Console.WriteLine("Welcome to the Calculator");
            Console.Write("\nEnter first number ");
            firstDouble = double.Parse(Console.ReadLine());
            if ((first < min) || (first > max))
            {
                Console.WriteLine("\nFirst input number, {0}, is not within range of {1} and {2}. Program will end.\n",
                    first, min, max);
                OKBool = false;
            }
            if (OKBool)
            {
                Console.Write("\nEnter second number: ");
                second = double.Parse(Console.ReadLine());

                if ((second < min) || (second > max))
                { 
                    Console.WriteLine("\nSecond input number, {0}, is not within range of {1} and {2}. Program will end.\n",
                        second, min, max);
                    OKBool = false;
                }
            }
                if (OKBool)
                {
                    sum= first + second;
                    diff= first - second;
                    mult= first * second;
                    div= first / second;

                Console.WriteLine("\n{0} + {1} = {2}\n",
                    first, second, sum);
                Console.WriteLine("\n{0} - {1} = {2}\n",
                    first, second, diff);
                Console.WriteLine("\n{0} * {1} = {2}\n",
                    first, second, mult);
                Console.WriteLine("\n{0} / {1} = {2}\n",
                    first, second, div);
            }

                Console.WriteLine("Press ENTER key to end program");
                Console.ReadLine();
            }
        }
    }

