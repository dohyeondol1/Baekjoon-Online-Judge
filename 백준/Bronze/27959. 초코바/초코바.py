import sys
input = sys.stdin.readline

N, M = map(int, input().split())
# split은 문자열을 나누는 함수, 입력을 공백으로 구분하기위해 사용함
# map은 여러개의 입력에 대해 특정한 함수를 적용하는 함수, N, M을 정수형으로 바꾸기 위해 사용함
if (N*100) >= M:
    print("Yes")
else:
    print("No")
    