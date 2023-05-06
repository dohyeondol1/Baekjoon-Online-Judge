A, B, C = map(int, input().split())
print(A * max(B, C) // min(B, C))
# 인수로 받은 자료형 내에서 최댓값, 최솟값을 구하는 함수 max, min