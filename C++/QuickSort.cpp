//sorting using quick sort in C++ language

#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int left, int right) {
    int pivot = arr[left];
    int i = left + 1;
    int j = right;

    while(true){
       while(i <= right && arr[i] <= pivot)
          i++;
       while(arr[j] > pivot)
          j--;
       if(i < j)
          swap(arr[i],arr[j]);
       else{
          swap(arr[left],arr[j]);
          return j;
       }
    }
}

void printArray(int arr[],int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void quickSort(int arr[], int left, int right, int n) {
    if (left < right) {
        int s = partition(arr,left,right);
        cout << "Pivot [" << arr[s] << "] positioned: ";
        printArray(arr, n);
        quickSort(arr,left,s - 1, n);
        quickSort(arr,s + 1,right, n);
    }
}

int main() {
    int n;
    cout<<"Enter No. of elements :";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements :";
    for(int i = 0; i < n; i++){
       cin>>arr[i];
    }
    quickSort(arr, 0, n - 1, n);
    cout << "Sorted elements: ";
    printArray(arr,n);
    return 0;
}
