s=input().strip()[1:-1]
if s:
    count=len(set(s.split(', ')))
    print(count)

else:
    count=0
    print(count)