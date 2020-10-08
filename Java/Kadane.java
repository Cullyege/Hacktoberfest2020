import java.util.*;
import java.lang.*;

class Kadane{
	public static void main(String[] args){

		int[] array = {3,7,-1,4,5,8,-2,9};
		System.out.println("Max sub array sum: " + kadaneAlgo(array));
	}

	static int kadaneAlgo(int[] arr){
		int len = arr.length;
		int localMax = arr[0];
		int globalMax = arr[0];

		for(int i=1;i<len;i++){
			localMax = Math.max(arr[i], localMax + arr[i]);
			globalMax = Math.max(globalMax, localMax);
		}

		return globalMax;
	}
}