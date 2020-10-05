void main() {
  List<int> arr = [0, 1, 3, 4, 5, 8, 9, 22];
  int searchElement = 3;
  int min = 0;
  int max = arr.length - 1;
  binarySearch(arr, searchElement, min, max);
}

binarySearch(List<int> arr, int userValue, int min, int max) {
  if (max >= min) {
    int mid = ((max + min) / 2).floor();
    if (userValue == arr[mid]) {
      print('Element found at index: ${mid}');
    } else if (userValue > arr[mid]) {
      binarySearch(arr, userValue, mid + 1, max);
    } else {
      binarySearch(arr, userValue, min, mid - 1);
    }
  }
  return null;
}
