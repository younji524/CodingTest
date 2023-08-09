zip() 함수는 여러 개의 순회 가능한(iterable) 객체를 인자로 받고, 
각 객체가 담고 있는 원소를 튜플의 형태로 차례로 접근할 수 있는 반복자(iterator)를 반환한다.

>>> numbers = [1, 2, 3]
>>> letters = ["A", "B", "C"]
>>> for pair in zip(numbers, letters):
...     print(pair)
...
(1, 'A')
(2, 'B')
(3, 'C')

여러 그룹의 데이터를 루프를 한 번만 돌면서 처리할 수 있다.

>>> for number, upper, lower in zip("12345", "ABCDE", "abcde"):
...     print(number, upper, lower)
...
1 A a
2 B b
3 C c
...

zip() 함수를 이용하면 두 개의 리스트나 튜플 부터 쉽게 사전(dictionary)을 만들 수 있다. 
키와 값을 담고 있는 리스트를 zip() 함수에 넘긴 후, 그 결과를 다시 dict() 함수에 넘기면 된다.
>>> keys = [1, 2, 3]
>>> values = ["A", "B", "C"]
>>> dict(zip(keys, values))
{1: 'A', 2: 'B', 3: 'C'}

* 주의사항 *
zip() 함수로 넘기는 인자의 길이가 다를 때는 주의를 해야 한다. 
왜냐하면 가장 짧은 인자를 기준으로 데이터가 엮이고, 나머지는 버려지기 때문이다.

출처 : https://www.daleseo.com/python-zip/
