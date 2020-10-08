using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace LeaderNumber
{
    
    class Program
    {
        public int Solution(int[] A)
        {
            var L = new int[A.Length + 1];
            L[0] = -1;
            for(int i = 0; i< A.Length; i++)
            {
                L[i + 1] = A[i];
            }

            var pos = A.Length / 2 + 1;
            var candidate = A[0];
            var count = 0;

            for( int i = 1; (i + count) < L.Length && count < pos; i+=count, candidate = count < pos ? L[i] : candidate, count = count < pos ? 0 : count)
            {
                while (i+count < L.Length && L[i + count] == candidate)
                {
                    count = count + 1;
                }
            }
            if (count > pos)
                return candidate;
            return (-1);
        }
        static void Main(string[] args)
        {
            Console.Write(new int[]{1,2,3,4,1,2,3,4,5});
        }
    }
}
