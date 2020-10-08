
import java.util.ArrayList;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author dmmah
 */
public class SuperSet 
{
    static ArrayList<ArrayList<Integer>> set;
    
    static void withRecursion(ArrayList<Integer> curr, int[] array, int index)
    {
        if(index==array.length)
            return;
        
        withRecursion(curr, array, index+1);
        curr.add(array[index]);
        set.add(new ArrayList<>(curr));
        withRecursion(curr, array, index+1);
        curr.remove(curr.size()-1);
    }
    
    static void withLoop(int[] array)
    {
        int n = array.length;
        
        for(int i=0; i<(1<<n); i++)
        {
            ArrayList<Integer> curr = new ArrayList<>();
            
            for(int j=0; j<n; j++)
            {
                if((i&(1<<j))>0)
                    curr.add(array[j]);
            }
            set.add(curr);
        }
    }
    
    public static void main(String[] args)
    {
        set = new ArrayList<>();
        int[] array = {10,43,91,83};
        withRecursion(new ArrayList<>(), array, 0);
        System.out.println("Superset: ");
        for(int i=0; i<set.size(); i++)
            System.out.println(set.get(i));
    }
}
