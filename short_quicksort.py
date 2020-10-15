def QuickSort(arr):
	n=len(arr)
	if n<=1:
		return arr
	else:
		pivot = arr.pop(0)
		# creating 2 empty lists to segregate greater than pivot elements and less than pivot elements
		lesser_than_pivot = []
		greater_than_pivot = []

		for item in arr:
			if item<pivot:
				lesser_than_pivot.append(item)
			else:
				greater_than_pivot.append(item)
		return QuickSort(lesser_than_pivot) + [pivot] + QuickSort(greater_than_pivot)

# arr = [5, 1, 7, 2, 9, 4, 3]
print("Enter the elements: ")
x= [int(p) for p in input().split()]

print(QuickSort(x))