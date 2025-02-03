def is_armstrong(num):
    digits = [int(d) for d in str(num)]
    power = len(digits)
    return sum(d**power for d in digits) == num

num = int(input("Enter a number: "))
if is_armstrong(num):
    print(f"{num} is an Armstrong number.")
else:
    print(f"{num} is not an Armstrong number.")
