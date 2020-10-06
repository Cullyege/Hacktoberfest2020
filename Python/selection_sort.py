

def selection_sort(arr, size):
    for i in range(len(arr)):
        min_= i
        for j in range(i+1, len(arr)):
            if arr[min_] > arr[j]:
                min_ = j

        arr[i], arr[min_] = arr[min_], arr[i]

if __name__ == '__main__':
    array = list(map(int, input("Enter Space Seperated Integers: ").split()))
    print("Array before selection sort:",array)
    selection_sort(array, len(array))
    print("Array after selection sort:",array)
