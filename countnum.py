import math
#brut force method
def countnum1(n):
    count = 0 
    while n !=0:
        n = n//10
        count += 1
    return count
#the proper short method 
def countnum2(n):
    cnt = int(math.log10(n)+1)
    return cnt
if __name__ == "__main__":
    n = int(input("enter the number: "))
    digits = countnum1(n)
    digits2 = countnum2(n)
    print("first approach: ")
    print("the number of digits in the num is(approach 1):",digits)
    print("second approach: ")
    print("the number of digits in the num is(approach 2):",digits2)