def lcm(a, b):
    num = 1
    while num % a != 0 or num % b != 0:
        num += 1
        
    return num
    
def solution(arr):
    answer = lcm(arr[0], arr[1])
    
    for i in range(2, len(arr)):
        answer = lcm(answer, arr[i])
        
    return answer

# math 라이브러리 내에 gcd(최대공약수), lcm(최소공배수) 함수가 내장되어 있어 쉽게 계산할 수 있다.

import math
 
a = math.gcd()
b = math.gcd(0, 2, 4)
c = math.gcd(10, 5, 100)
