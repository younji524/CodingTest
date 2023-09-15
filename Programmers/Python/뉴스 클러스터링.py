from collections import Counter
def solution(str1, str2):
    str1 = [str1[i : i + 2].lower() for i in range(len(str1) - 1) if str1[i : i + 2].isalpha()]
    str2 = [str2[i : i + 2].lower() for i in range(len(str2) - 1) if str2[i : i + 2].isalpha()]
    
    intersection = []
    str2_copy = str2.copy()
    for i in str1:
        if i in str2_copy[:]:
            intersection.append(i)
            str2_copy.remove(i)
    
    union = []
    for i in str1[:]:
        if i not in union:
            for j in range(max(Counter(str1)[i], Counter(str2)[i])):
                union.append(i)
            
    for i in str2[:]:
        if i not in union:
            for j in range(max(Counter(str1)[i], Counter(str2)[i])):
                union.append(i)
    
    if len(intersection) + len(union) == 0:
        return 65536
    elif intersection == union:
        return int(min(len(str1), len(str2)) / max(len(str1), len(str2)) * 65536)
    else:
        return int(len(intersection) / len(union) * 65536)
