#A non-empty array A consisting of N integers is given. 
# The array contains an odd number of elements, and each 
# element of the array can be paired with another element 
# that has the same value, except for one element that is left unpaired.
# Find value that occurs in odd number of elements.
# 66%

def solution(A):     
    if len(A) == 1:
         return A[0]
    A = sorted(A)       # O(n*log(N) or N)
    for i in range(0 , len (A) , 2): # O(N)
         if i+1 == len(A):
             return A[i]
         if A[i] != A[i+1]:
             return A[i]