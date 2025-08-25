class Solution:
    def minimumSteps(self, s: str) -> int:
        n = len(s)
        steps = count = 0
        for i in range(n - 1, -1, -1):
            if s[i] == '1':
                count += 1
                steps += n - i - count
        return steps
