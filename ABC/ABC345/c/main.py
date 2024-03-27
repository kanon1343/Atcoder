from collections import defaultdict

def main():
    s = input()

    count = defaultdict(int)
    ans = 0
    for i in range(len(s)):
        ans += i - count[s[i]]
        count[s[i]] += 1

    if max(count.values()) > 1:
        ans += 1
    print(ans)


if __name__ == "__main__":
    main()