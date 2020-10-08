class SelectionSort {
  public static void main(String[] args){
    SelectionSort ss = new SelectionSort();
    int[] arr = {2,1,0,8,-4};

    System.out.println("Original Array:");
    ss.printArr(arr);

    arr = ss.sort(arr);

    System.out.println("\nSorted Array:");
    ss.printArr(arr);
  }

  int[] sort(int[] arr){

    int min, minIndex, temp;

    // 'start' is the point where 'unsorted' array begins
    for(int start = 0; start < arr.length - 1; start++){

      // Finding the minimum
      min = arr[start];
      minIndex = start;
      for(int i = start + 1; i < arr.length; i++){
        if(arr[i] < min){
          min = arr[i];
          minIndex = i;
        }
      }

      // Swap the minimum with the first element
      temp = min;
      arr[minIndex] = arr[start];
      arr[start] = temp;
    }

    return arr;
  }

  void printArr(int[] arr){
    for(int i = 0; i < arr.length; i++)
      System.out.print(arr[i] + " ");
  }
}
