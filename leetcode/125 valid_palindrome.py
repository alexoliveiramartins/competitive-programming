class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = "".join(char.lower() for char in s if char.isalnum())
        tam = len(s)
        h = tam // 2
        
        if(tam % 2 == 1):
            return s[:int(h)] == s[int(h)+1:][::-1]
        else:
            return s[:int(h)] == s[int(h):][::-1]
