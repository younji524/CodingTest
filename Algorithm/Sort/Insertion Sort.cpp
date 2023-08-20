/*
삽입 정렬(Insertion Sort)

삽입 정렬은 tmp 변수에 값을 저장하고 tmp 변수 앞의 원소들과의 크기를 비교해 위치를 바꾸는 정렬법이다.
삽입 정렬은 O(N^2)의 시간 복잡도를 갖는다.
*/

#include<iostream>

using namespace std;

int main() {
    const int n = 8;
    int arr[n] = { 8, 6, 5, 3, 1, 2, 7, 4 };

    for (int i = 1; i < n; i++) {
      int tmp = arr[i];
      // tmp 앞의 값들을 tmp와 비교하여 swap
      for (int j = i - 1; j >= 0; j--) { 
        if (a[j] > tmp) {
          a[j + 1] = a[j];
          a[j] = tmp;
        }
        else break;
      }
    }
}
