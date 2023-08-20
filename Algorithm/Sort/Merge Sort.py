# 병합 정렬은 분할 정복(divide and conquer) 방식을 사용해 데이터를 분할하고 분할한 집합을 정렬하며 합치는 알고리즘이다.
# 병합 정렬의 시간 복잡도는 O(nlogn)이다.

import sys
input = sys.stdin.readline
result = 0

def merge_sort(s, e): # 시작점과 종료점
  global result
  if e - s < 1: return
  m = int(s + (e - s) / 2) # 중앙값의 정수형
  merge_sort(s, m) # 재귀함수 형태로 구현, 왼쪽 부분에 대해 병합 정렬
  merge_sort(m + 1, e)

  for i in range(s, e + 1):
    # tmp : 정렬할 때 잠시 사용할 임시 리스트 / A : 정렬할 대상 리스트
    tmp[i] = A[i]
    k = s
    idx1 = s
    idx2 = m + 1

    while idx1 <= m and idx2 <= e:  # 두 그룹을 병합하는 로직
      if tmp[idx1] > tmp[idx2]: # 두 그룹 값을 비교하여 뒤쪽 그룹의 데이터 값이 더 작으면 결괏값 업데이트
        A[k] = tmp[idx2]
        result += idx2 - k # 이동한 횟수 카운트
        k += 1  # A에 저장하기 위한 인덱스 이동
        idx2 += 1 
      else:
        A[k] = tmp[idx1]
        k += 1
        idx1 += 1
    while idx1 <= m:
       A[k] = tmp[idx1]
        k += 1
        idx1 += 1
    while idx2 <= e:
        A[k] = tmp[idx2]
        k += 1
        idx2 += 1

N = int(input())
A = list(map(int, input().split()))
A.insert(0, 0)
tmp = [0] * int(N + 1)

merge_sort(1, N)
