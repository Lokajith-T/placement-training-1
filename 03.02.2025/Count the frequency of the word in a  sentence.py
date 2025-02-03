from collections import Counter

sentence = input("Enter a sentence: ")
word_counts = Counter(sentence.split())

for word, count in word_counts.items():
    print(f"{word}: {count}")
