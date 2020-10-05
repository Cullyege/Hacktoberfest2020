/*Method takes in a list and returns a Sorted list. Runtime O(n^2)

List<int> bubbleSort(List<int> list){
    for (int i = 0; i < list.length; i++){
        for (int j = 0; j < list.length - 1; j++){
            if (list[j] > list[j + 1]){
                int num = list[j];
                list[j] = list[j + 1];
                list[j + 1] = num;
            }
        }
    }
  return list;
}
