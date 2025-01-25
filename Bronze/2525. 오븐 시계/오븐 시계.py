h,m=map(int,input().split())
a=int(input())
if a+m<60:
    print(h,m+a)
elif (h+((m+a)//60)<24):
         print(h+((m+a)//60),((m+a)%60))
else :
    print((h+((m+a)//60))-24,((m+a)%60))
