class Solution:
    def mySqrt(self, x: int) -> int:
        lo = 0
        hi = x
        ans = lo
        while lo <= hi:
            mid = (lo + hi) // 2
            if mid*mid <= x:
                ans = mid
                lo = mid + 1
            else:
                hi = mid - 1
        return ans
