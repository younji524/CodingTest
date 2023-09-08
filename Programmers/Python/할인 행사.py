def check(want, discount):
    result = {}
    for i in want:
        result[i] = 0
            
    for j in discount:
        if j in result:
            result[j] += 1
        else:
            continue
        
    return result

def solution(want, number, discount):
    answer = 0
    discount_part = discount[0 : 10]
    part_dict = check(want, discount_part)
    
    for i in range(len(discount) - 10):
        if number == list(part_dict.values()):
            print(part_dict, i)
            answer += 1
        
        if discount[i] in part_dict:
            part_dict[discount[i]] -= 1

        if discount[i + 10] in part_dict:
            part_dict[discount[i + 10]] += 1
                
    if number == list(part_dict.values()):
            answer += 1

    return answer


>> Counter를 이용한 풀이

from collections import Counter
def solution(want, number, discount):
    answer = 0
    dic = {}
    for i in range(len(want)):
        dic[want[i]] = number[i]

    for i in range(len(discount)-9):
        if dic == Counter(discount[i:i+10]): 
            answer += 1

    return answer
