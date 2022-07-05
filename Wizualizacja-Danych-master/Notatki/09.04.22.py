import numpy as np
a = np.array([0,1])
print(a)
b = np.arange(1,5,1, dtype='float64')
print(b)
print(type(a))
print(b.dtype)

c= b.astype('float64')
print(c)
print(c.shape)
d=np.array([np.arange(2), np.arange(2)])
print(d)
print(d.shape)
print(d.ndim)
import numpy as np
zero = np.zeros((5,5))
print(zero)

jedynka = np.ones((5,5))
print(jedynka)

pusta = np.empty((6,2))
print(pusta)
print(pusta[1][1])

a = np.arange(1,5,2)
print(a)

b = np.linspace(1,2,8, endpoint=False)
print(b)

c,d =np.indices((5,5))
print(c)
print(d)
e = np.indices((3,3))
print(e)
print(e[0][1][1])

f,g = np.mgrid[0:8, 0:8]
print(f)
print(g)

h = np.diag([a for a in range(5)],-1)
print(h)

i = np.fromiter(range(5), etype='int32')
print(i)

import numpy as np
marcin = b'Marcin'
mar = np.frombuffer(marcin, etype='S4')
print(mar)
mar_1 = np.array(list(marcin), dtype='S1')
print(mar_1)
mar_2 = np.array(list(marcin), dtype='S1' )
print(mar_2)
mar_3 = np.array(list(b'Marcin'), dtype='S1' )
print(mar_3)
mar_4 = np.fromiter(marcin, dtype='I1')
print(mar_4)
a = np.ones((2,2))
b = np.ones((2,2))
c = a + b
print(c)
d = c-b
print(d)
a = np.arange(10)
print(a)

s= slice(2, 7, 2)
print(a[s])

s = range(2,7,2)
print(a[s])
print(a[2:7:2])
print(a[1:5])

b = np.arange(25)
mat = b.reshape((5,5))
print(mat)
print(mat[1:, 0:5])
print(mat[:,1:2])
print(mat[2:5, 1:3])
a = np.array([[1,2,3],[4,5,6],[7,8,9],[10,11,12]])
print(a)

rows = np.array([[0,0][3,3]])