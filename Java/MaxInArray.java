package ARRAY;

import java.util.Scanner;
import java.util.Arrays;
import java.util.stream.IntStream;

class ARRAY {

    private final static Scanner scn = new Scanner(System.in);

    public static void main(String[] args) throws Exception {
        int[] array = takeInput();
        display(array);
        System.out.println("The max element in the array is "+maxInArray(array));

    }

    public static int[] takeInput() throws Exception {

        System.out.println(" From how may numbers you want to find maximum value? ");

        int n = 0;
        try {
            n = scn.nextInt();
        } catch (Exception e) {
            throw new Exception("Please enter a valid number !!");
        }
        if(n==0)
        {
            throw new Exception("More than one element needed to find max!!");
        }
        int arr[]=new int[n];
        IntStream.range(0,arr.length).forEach(number->{
                System.out.println("Enter number ");
                arr[number] = scn.nextInt();
            });
            return arr;
    }

    public static void display(int[] arr) {
        System.out.println("--------This is the numbers you entered-----------------");
        Arrays.stream(arr).forEach(System.out::println);
    }

    public static int maxInArray(int[] arr) {
        return Arrays.stream(arr).max().getAsInt();
    }
}


