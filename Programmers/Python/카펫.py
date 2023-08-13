def fun(n):
    ans = []
    for i in range(1, n + 1):
        if n % i == 0:
            ans.append(i)
            
    return ans

def solution(brown, yellow):
    ans = fun(yellow)

    for i in range(len(ans)):
        if (ans[i] + 2) * (ans[-i-1] + 2) == brown + yellow:
            
            return [ans[-i-1] + 2, ans[i] + 2]
