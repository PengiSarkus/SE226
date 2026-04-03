
def factorial(x):
    if x<=1:
        return 1
    return x*factorial(x-1)

calcAbsoluteValue = lambda a: a*-1 if a<0 else a

def exp_x(x,n):
    total = 0
    for i in range(n):
        if i%2 == 0:
            total += calcAbsoluteValue((x**(2*i))/(factorial(2*i)))
        else:
            total -= calcAbsoluteValue((x**(2*i))/(factorial(2*i)))
    return total

sum = 0;

def globalVariableQuestion(n,r):
    """
    Starts calculating with the last term (r to the power of n) and makes it's way down until (r to the power of 0) with recursion. Uses a global variable called sum to determine the result
    As for sign handling the power operator (**) naturally processes negative values according to the mathematical rules
    """

    global sum
    if n<0:
        return
    sum  += (r**n)
    globalVariableQuestion(n - 1, r)


