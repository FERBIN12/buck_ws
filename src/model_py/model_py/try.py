from itertools import product,accumulate

def generate_parentheses(n):
    is_valid = lambda s: sum(1 if char == '(' else -1 for char in s) == 0 and all(count >= 0 for count in accumulate((1 if char == '(' else -1 for char in s)))

    return [''.join(p) for p in product('()', repeat=2 * n) if is_valid(p)]

# Example usage:
n = int(input())
combinations = generate_parentheses(n)
print(combinations)
