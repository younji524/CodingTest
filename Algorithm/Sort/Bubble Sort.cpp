/*
버블 정렬(Bubble Sort)

버블 정렬은 이웃한 두 수를 비교하여 작은 수를 앞으로 이동시키며 정렬해 나가는 알고리즘이다.
버블 정렬은 선택 정렬에 비해 시간 복잡도가 높다.
*/

#include<iostream>
#include<algorithm>  // swap 함수를 포함하는 헤더 파일

using namespace std;

int main() {
    const int n = 8;
    int arr[n] = { 8, 6, 5, 3, 1, 2, 7, 4 };

    for (int i = 0; i < n; i++) {
        // 버블 정렬을 하면 큰 수가 뒤로 밀리므로 시간이 지나면 뒷부분의 정렬 여부를 확인할 필요가 없음
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }
}
