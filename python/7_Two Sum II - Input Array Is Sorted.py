class Solution(object):
    def twoSum(self, numbers, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """
        i =0
        j = len(numbers)-1

        while i<j:
            if target > numbers[i]+numbers[j]:
                i= i+1
            elif target < numbers[i]+numbers[j]: 
                j = j-1
            else:
                i =i+1
                j = j+1
                break        

        return [i,j]

        
