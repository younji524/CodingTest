# 수 N 개가 주어졌을 때 i 번째 수에서 j 번째 수까지의 합을 구하는 프로그램을 작성하시오
# 구간 합을 매번 계산한다면 최악의 경우 1억 회 이상의 연상을 수행하게 되어 1초 이상의 수행 시간이 필요하다

import sys
input = sys.stdin.readline
suNo, quizNo = map(int, input().split())
numbers = list(map(int, input().split()))
prefix_sum = [0]
tmp = 0

for i in numbers:
  tmp += i
  prefix_sum.append(tmp)                      # 합 배열 만들기

for i in range(quizNo):  
  s, e = map(int, input().split())            # 주어진 질의로부터 구해야 할 구간을 받아옴
  print(prefix_sum[e] - prefix_sum[s-1])      # 합 배열에서 구간 합 구하기
