def sumPositive(obj):
    sum = 0
    for ele in obj:
        for i in ele:
            print(i)


obj = {
"a": 2,
"b": {"x": 2, "y": {"foo": 3, "z": {"bar": 2}}},
"c": {"p": {"h": 2, "r": 5}, "q": 'ball', "r": 5},
"d": 1,
"e": {"nn": {"lil": 2}, "mm": 'car'}
}

sumPositive(obj)