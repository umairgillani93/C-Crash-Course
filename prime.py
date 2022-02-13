def main():
  n = int(input())
  for i in range(2, n):
    if n % i == 0:
      return "not prime"

    else:
      continue

  return "prime"

print(main())
