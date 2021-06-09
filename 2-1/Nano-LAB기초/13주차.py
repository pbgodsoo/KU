def mul(*values):
    변수 = 1
    for i in values:
        변수 *= i
    return 변수
print(mul(5, 7, 9, 10))
