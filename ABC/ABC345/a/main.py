def main():
    s = input()

    if s[0] != '<':
        print("No")
        exit()

    if s[len(s)-1] != '>':
        print("No")
        exit()

    for i in range(1, len(s)-1):
        if s[i] != '=':
            print("No")
            exit()

    print("Yes")

if __name__ == "__main__":
    main()