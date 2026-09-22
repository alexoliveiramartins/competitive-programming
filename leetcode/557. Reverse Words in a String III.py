class Solution:
    def reverseWords(self, s: str) -> str:
        ans = ''
        arr = s.split(" ")
        for s in arr:
            ans += s[::-1]
            ans += " "
        return ans[:-1]
