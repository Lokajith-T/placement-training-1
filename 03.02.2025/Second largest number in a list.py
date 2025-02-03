def second_largest(numbers):
    unique_numbers = list(set(numbers))  # Remove duplicates
    unique_numbers.sort(reverse=True)
    return unique_numbers[1] if len(unique_numbers) > 1 else None

nums = list(map(int, input("Enter numbers separated by space: ").split()))
print("Second Largest:", second_largest(nums))
