def solution(n):
    fib = [[] for i in range(n + 2)]
    fib[1] = 1
    fib[2] = 2
    
    if n >= 3:
        for i in range(3, n + 1):
            fib[i] = fib[i - 1] % 1234567 + fib[i - 2] % 1234567
    
    return fib[n] % 1234567
