//sorting using merge sort in c++ language

#include<iostream>
using namespace std;

void mergesort(int[],int,int);
void merge(int[],int,int,int);

void mergesort(int arr[],int l,int r){
   int m;
   if(l < r){
      m = (l + r)/2;
      mergesort(arr,l,m);
      mergesort(arr,m+1,r);
      merge(arr,l,m,r);
   }
}

void merge(int arr[],int l,int m,int r){
   int b[r+1];
   int i = l,j = m+1,k = l;
   while(i <= m && j <= r){
      if(arr[i] < arr[j])
         b[k++] = arr[i++];
      else
         b[k++] = arr[j++];
   }
   while(i <= m)
      b[k++] = arr[i++];
   while(j <= r)
      b[k++] = arr[j++];
   for(i = l; i <= r; i++)
      arr[i] = b[i];
}

int main(){
   int n;
   cout<<"Enter No. of elements :";
   cin>>n;
   int arr[n];
   cout<<"Enter Elements :";
   for(int i = 0; i < n; i++){
      cin>>arr[i];
   }
   mergesort(arr,0,n-1);
   cout<<"Sorted elements :";
   for(int i = 0; i < n; i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;
   return 0;
}
