class Solution(object):
    def wordPattern(self, pattern, s):
        """
        :type pattern: str
        :type s: str
        :rtype: bool
        """
        res = []
        temp = ""
        for i in s:
            if( i == " " ):
                res.append(temp)
                temp = ""
                continue
            temp += i
        res.append(temp)

        if( len(pattern) != len(res) ): return False
        m ,n = {}, {}
        for i,j in zip(pattern, res):
            m[i] = j
            n[j] = i
        
        for i,j in zip(pattern, res):
            if m[i] != j or n[j] != i:
                return False
        return True
