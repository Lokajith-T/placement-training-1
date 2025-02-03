def fibonacci(n):
    if n <= 0:
        return "Invalid input"
    elif n == 1:
        return 0
    elif n == 2:
        return 1
    return fibonacci(n - 1) + fibonacci(n - 2)

num = int(input("Enter the number of terms: "))
print([fibonacci(i) for i in range(1, num + 1)])
