def common_elements(list1, list2):
    return list(set(list1) & set(list2))

list1 = list(map(int, input("Enter first list: ").split()))
list2 = list(map(int, input("Enter second list: ").split()))
print("Common elements:", common_elements(list1, list2))
