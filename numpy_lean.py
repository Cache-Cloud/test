import numpy as nm
def nd():
    a=nm.array([1,2,3])
    b=nm.array([4,5,6])
    c=nm.array([7,8,9])
    d=a**2+b**2+c**2
    print(d)
def py():
    a=[1,2,3]
    b=[4,5,6]
    c=[7,8,9]
    d=0
    for i in range(len(a)):
        d+=a[i]**2+b[i]**2+c[i]**3
    return(d)
py()
nd()
