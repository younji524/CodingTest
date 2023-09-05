def solution(k, tangerine):
    tangerine_dic = {}

    for i in tangerine:
        if i not in tangerine_dic:
            tangerine_dic[i] = 0
        tangerine_dic[i] += 1

    tangerine_dic = sorted(tangerine_dic.items(), key = lambda x: x[1], reverse = True)

    answer = 0
    while k > 0:
        k -= tangerine_dic[i][1]
        answer += 1

    return answer

>> collections 라이브러리 내 Counter 함수를 사용한 경우
import collections

def solution(k, tangerine):
    answer = 0
    cnt = collections.Counter(tangerine)

    for v in sorted(cnt.values(), reverse = True):
        k -= v
        answer += 1
        if k <= 0:
            break
    return answer
