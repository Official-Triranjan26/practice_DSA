#include<bits/stdc++.h>
using namespace std;

// Insertion sort in C++

// Function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;

    // Compare key with each element on the left of it until an element smaller than
    // it is found.
    // For descending order, change key<array[j] to key>array[j].
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    cout<<j<<endl;
    array[j + 1] = key;
  }
}

void insertionSort_R(int arr[], int size,int step=1){
	// base case
	if(step==size){
		return;
	}
	// processing
	int key=arr[step];
	int j=step-1;
	step+=1;
	while (key < arr[j] && j >= 0) {
      arr[j + 1] = arr[j];
      --j;
    }
    arr[j + 1] = key;
    // recursive relation
    insertionSort_R(arr,size,step);
}



// Driver code
int main() {
  int data[] = {9, 5, 1, 4, 3};
  int size = sizeof(data) / sizeof(data[0]);
  insertionSort_R(data, size);
  cout << "Sorted array in ascending order:\n";
  printArray(data, size);
}
