def is_prime(num):
    if num <= 1:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

def count_primes(numbers):
    prime_count = 0
    for number in numbers:
        if is_prime(number):
            prime_count += 1
    return prime_count

# 입력 받기
n = int(input(""))
numbers = list(map(int, input("").split()))

# 소수 개수 출력
print(count_primes(numbers))
