output = [i for i in range(1, 100 + 1) if"{:b}".format(i).count("0") == 1]
for i in output:
    print("{} : {}".format(i, "{:b}".format(i)))
print("합계: ", sum(output))
