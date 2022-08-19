

-------------
Preprocessor : Remove comments , add source code of header file , replace macros


Compiler : -> tranform to assemly language

Assembler: Converts to binary language to create .obj file

Linker : If wokring on different modules then combine  all obj tranform to single .exe file


-------------------------
&copy; Siddharth Kumar Yadav
Short implmentation of various sorting algorithms
```
void bubbleSort(int a[], int len) {
  for (int pass = 0; pass < len - 1; pass++)
    for (int i = 0; i < len - pass - 1; i++)
      (a[i] > a[i + 1]) ? swap(a[i], a[i + 1]) : swap(a[i], a[i]);
}
```

```
void selectionSort(int a[], int len) {
  for (int i = 0; i < len - 1; i++)
    swap(a[i], a[distance(a, find(a + i, a + len, *min_element(a + i + 1, a + len)))]);
}
```

```
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
```

```
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
```


-------------
https://www.tutorialspoint.com/design_pattern/index.htm



https://www.youtube.com/watch?v=c5HAwKX-suM&t=1697s
