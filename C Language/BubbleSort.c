//bubble sort using C
//brute force approachs
#include<stdio.h>
int main(){
   int n,i,j,min,temp;
   printf("enter no of elements:");
   scanf("%d",&n);
   int a[n];
   printf("enter array elements:");
   for(i=0;i<n;i++){
      scanf("%d",&a[i]);
   }
   for(i=0;i<n-1;i++){
      for(j=i+1;j<n;j++){
         if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
      }
   }
   printf("sorted using bubble sort:");
   for(i=0;i<n;i++){
      printf("%d \t",a[i]);
    }
   printf("\n");
   return 0;
}
