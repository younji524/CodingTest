# 계수 정렬(Counting Sort)

import sys
input = sys.stdin.readline
N = int(input())
count = [0] * 10001

for i in range(N):
  count[int(input())] += 1  # 해당하는 index의 값 1 증가

for i in range(10001):
  if count[i] != 0:  # count[index] 값이 0이 아니면
    for _ in range(count[i]): # 해당 index 값만큼 index를 반복하여 출력
      print(i)
