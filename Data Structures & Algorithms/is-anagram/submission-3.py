class Solution:
    def isAnagram(self, s: str, t: str) -> bool:

        sd = {}
        td = {}

        if len(s) != len(t):
            return False
        
        for sn in s:
            if sd.get(sn) != None:
                sd[sn] = sd[sn] + 1
            else:
                sd[sn] = 1

        for sn in t:
            if td.get(sn) != None:
                td[sn] = td[sn] + 1
            else:
                td[sn] = 1

        return td == sd
