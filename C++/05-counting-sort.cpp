#include <iostream>
using namespace std;

int main1() {
    int n;
    cin >> n;

    int a[n];
    int maxNum=0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i]>maxNum){
            maxNum=a[i];
        }
    }

    int freq[maxNum+1] = {0};
    for (int i = 0; i < n; i++) {
        freq[a[i]]++;
    }

    int sortedA[n];
    for (int i = 0; i < maxNum+1; i++) {
        if(freq[i]!=0){
            while(freq[i]--){
                cout << i<<" ";
            }
        }
    }
    return 0;
}

int main(){
	
	int n;//=6;
	cin>>n;
	int a[n];// = {1,3,4,2,7,8};
	// scan array
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	// find max element
	int max_ele = a[0];
	for(int i=1;i<n;i++)
		max_ele = max(max_ele, a[i]);
	// create frequency array
	int frequency[max_ele+1]={0}; // all 0
	// calculate frequency
	for(int i=0;i<n;i++){
		frequency[a[i]]++;
	}
	// // writing back to array the count
	int k=0;
	for(int i=0; i<=max_ele;i++){
		while(frequency[i]--){
			a[k++] = i;
		}
	}

	// print array
	for(int i=0;i<n;i++){
		cout<<a[i]<<", ";
	}
	cout<<endl;
	return 0;
}

/*
Problem: Counting sort.
Based upon idea of counting.
Advantage: retuduces time but not always.
Method:1
	Create array of size max(array).
	store frequency of element in frequency array.
	Print element frequency times/insert to original array.
*/