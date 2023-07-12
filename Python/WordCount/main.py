
print("Input text:")
text = input()

print(text.split())
wordcount = {}

print("\n")

for word in text.lower().split():
    if word in wordcount:
        wordcount[word] += 1
    else:
        wordcount[word] = 1

print(wordcount)

