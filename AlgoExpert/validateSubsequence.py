# whether sequence array is present in the array 
# and in the same order as sequence

# [5,1,22,6,-1,8,10]
# [1,6,-1,10]

# Time = O(n) and Space = O(1)
def validateSubsequence(array,sequence):
    arrIndex = 0
    seqIndex = 0

    while arrIndex < len(array) and seqIndex < len(sequence):
        if array[arrIndex] == sequence[seqIndex]:
            seqIndex += 1
        arrIndex += 1
    
    return seqIndex == len(sequence)

array = [5,1,22,6,-1,8,10]
sequence = [1,6,-1,10]
print(validateSubsequence(array,sequence))