def average(array):
    # your code goes here
    temp =set(array);
    tl=0;
    for i in temp:
        tl+=i
    ct = len(temp)
    return tl/ct    
if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    result = average(arr)
    print(result)
