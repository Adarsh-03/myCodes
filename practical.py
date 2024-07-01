def squareRoot(n, l):

    x = n
    root = 0
    i = 10
    while (i > 0):

        root = 0.5 * (x + (n / x))

        if (abs(root - x) < l):
            break

        x = root
    return root


n = 49
l = 0.00001
print(squareRoot(n, l))

