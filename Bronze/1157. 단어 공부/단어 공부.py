word = input().upper()
word_list =list(set(word))
List = []

for i in word_list:
    count = word.count(i)
    List.append(count)

if List.count(max(List)) > 1:
    print('?')
else:
    print(word_list[List.index(max(List))])
