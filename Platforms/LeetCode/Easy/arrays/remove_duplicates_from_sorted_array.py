# Time Complexity: O(n)
# Space Complexity: O(1)

from typing import List

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        # Base case: list is null or empty
        if nums is None or len(nums) == 0:
            return 0

        # Step 1: Initialize repeating number index
        current_index = 0

        for i in range(1, len(nums)):

            # Step 2: If there's a gap > 1, replace it with the nums[current_index] element 
            if nums[i] != nums[current_index]:
                current_index += 1
                nums[current_index] = nums[i]

        return current_index + 1

# if __name__ == "__main__":
#     p = Solution()
#     length = p.removeDuplicates([0, 0, 1, 1, 1, 2, 3, 4, 5])
      