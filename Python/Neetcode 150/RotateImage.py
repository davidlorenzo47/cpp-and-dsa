def rotate(mat):
    el_l = len(mat[0])
    i=0
    while i < (el_l):
        for j in range (el_l):
            mat[i][j], mat[j][el_l-1] = mat[j][el_l-1], mat[i][j]
            mat[i][j], mat[el_l-1][el_l-1-j] = mat[el_l-1-j][el_l-1], mat[i][j]
            mat[i][j], mat[el_l-j-1][0] = mat[el_l-j-1][0], mat[i][j]
            print(mat)
            i += 1
        break
    return mat

mat = [[1,2,3],[4,5,6],[7,8,9]]
print(rotate(mat))