# itertools 라이브러리에서 제공하는 permutations 메서드를 사용해서 순열을 구현할 수 있다.
from itertools import permutations

def solution(k, dungeons):
    answer = 0
    permute = permutations(dungeons, len(dungeons)) 
    
    for i in permute:   # ([80, 30], [70, 10], [60, 10])...
        result = 0
        total = k
        
        for j in i:
            if total >= j[0]:
                total -= j[1]
                result += 1
                
        answer = max(answer, result)
            
    return answer
