class Solution(object):
    def containsNearbyDuplicate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: bool
        """
        n = len(nums) 
        d= {}
        for i,n in enumerate(nums):
            if n in d and abs(i-d[n])<=k:
                return True
            else:
                d[n]=i    

        return False             
        
