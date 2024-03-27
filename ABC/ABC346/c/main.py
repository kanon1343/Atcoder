def sum_of_missing_numbers(N, K, A):
    # Aに含まれる整数をセットに変換
    A_set = set(A)
    
    # 1以上K以下の整数の集合を生成
    all_numbers = K * (K + 1) // 2
    num = 0
    
    for i in A_set:
        if i <= K:
            num += i
    return all_numbers - num

def main(): 
    # 入力を受け取る
    N, K = map(int, input().split())
    A = list(map(int, input().split()))

    print(sum_of_missing_numbers(N, K, A))


if __name__ == "__main__":
    main()