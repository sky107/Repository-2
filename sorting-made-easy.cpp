/*
Coded by Siddharth Kumar Yadav
Email:siddharthsk101@gmail.com
Title:STL implementation of popular sorting algorithms derived from logical procedure
*/

#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int len) {
  for (int pass = 0; pass < len - 1; pass++)
    for (int i = 0; i < len - pass - 1; i++)
      (a[i] > a[i + 1]) ? swap(a[i], a[i + 1]) : swap(a[i], a[i]);
}

void selectionSort(int a[], int len) {
  for (int i = 0; i < len - 1; i++)
    swap(a[i], a[distance(a, find(a + i, a + len, *min_element(a + i + 1, a + len)))]);
}

void insertionSort(int arr[], int len) {
  int j;
  for (int i = 1; i < len; i++) {
    long long int temp = arr[i];
    j = i;
    while (j > 0) {
      if (arr[j - 1] > temp) {
        arr[j] = arr[j - 1];
        arr[j - 1] = temp;
      }
      j--;
    }
  }
}

void shellSort(int a[], int len) {
  for (int gap = len / 2; gap >= 1; gap /= 2)
    for (int j = gap; j < len; j++)
      for (int i = j - gap; i >= 0; i = i - gap) {
        if (a[i + gap] < a[i])
          swap(a[i + gap], a[i]);
        else
          break;
      }
}

int main(){
  int a[]={64,34,2,1,25,12,22,11,90};
//  bubbleSort(a,9);
//  shellSort(a,9);
//  selectionSort(a,9);
    insertionSort(a,9);
  for(auto x:a)cout<<x<<" ";
  return 0;
}

// #include <iostream>
// using namespace std;
// bool isSorted(int* a,int n){
//     if(n==0 or n==1){
//         return true;
//     }
//     if(a[0]<a[1] and isSorted(a+1,n-1)){
//         return true;
//     }
//     return false;
// }
// int main() {
//     int a[]={34,43,4,3,4};


//     cout<<((isSorted(a,5))?"YEs\n":"NO\n");

// }
//Above is a code to check wheather the array is sorted or not using recursion

