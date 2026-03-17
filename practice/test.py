import sys

def main():
    # 1行読み込んで、整数にして、2倍して出すだけ
    line = sys.stdin.readline().strip()
    if not line: return
    
    n = int(line)
    print(n * 2)

if __name__ == "__main__":
    main()
