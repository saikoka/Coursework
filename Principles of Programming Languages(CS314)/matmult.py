arr1Rows, arr1Columns = map(int, input().split())
Matrix1 = [[0 for x in range(arr1Columns)] for y in range(arr1Rows)]

for i in range(arr1Rows):
    numbers1 = list(map(float, input().split()))
    for y in range(arr1Columns):
        Matrix1[i] = numbers1

arr2Rows, arr2Columns = map(int, input().split())
Matrix2 = [[0 for abc in range(arr2Columns)] for xy in range(arr2Rows)]

for ab in range(arr2Rows):
    numbers2 = list(map(float, input().split()))
    for xyz in range(arr2Columns):
        Matrix2[ab] = numbers2

if arr1Columns != arr2Rows:
    print("invalid input")
else:
    Matrix = [[0 for z in range(arr2Columns)] for c in range(arr1Rows)]
    for q in range(arr1Rows):
        for r in range(arr2Columns):
            SpecificIndex = 0
            for m in range(arr1Columns):
                SpecificIndex += Matrix1[q][m] * Matrix2[m][r]
            Matrix[q][r] = SpecificIndex

    for l in range(arr1Rows):
        for r in range(arr2Columns):
            print(Matrix[l][r], end=" ")
        print()
