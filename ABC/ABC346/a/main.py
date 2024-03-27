def main():
    n = int(input())
    a = list(map(int, input().split()))

    for i in range(n-2):
        print(a[i] * a[i+1], end=' ')
    print(a[n-2] * a[n-1])

if __name__ == "__main__":
    main()