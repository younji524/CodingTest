/*
선택 정렬(Selction Sort)

선택 정렬은 데이터 중 최소값을 추출하여 정렬의 맨 앞으로 이동시켜 정렬해 나가는 알고리즘이다.
선택 정렬은 O(N^2)의 시간 복잡도를 갖는다.
*/

#include<iostream>
#include<algorithm>  // swap 함수를 포함하는 헤더 파일

using namespace std;

int main(){
  int arr[8] = {8, 6, 5, 3, 1, 2, 7, 4};
  
  for(int i = 0; i < 8; i++) {
    int idx = i;
    for (int j = i + 1; j < 8; j++) {
      if (arr[idx] > arr[j]) {
        idx = j;  // i 뒤 모든 원소들의 값을 확인해 최소값의 위치를 저장
      }
    }
    swap(arr[i], arr[idx]);  // 최소값의 위치와 i의 위치를 스왑해 최소값을 가장 앞으로 위치하도록 함
  }

  for(int i = 0; i < 8; i++) {
    cout << arr[i] << " "; // {1, 2, 3, 4, 5, 6, 7, 8}
  }

}
