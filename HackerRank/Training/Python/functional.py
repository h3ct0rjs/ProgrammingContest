if __name__ == '__main__':
    n = int(input())
    arr = [int(i) for i in input().split(' ')]
    m=max(arr)
    newarr=list(filter((m).__ne__,arr))
    print(max(newarr))

