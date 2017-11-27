# 3Sum Closest

> Given an array S of n integers, find three integers in S such that the sum is closest to a given number, target. Return the sum of the three integers. You man assume that each input would have exactly one solution.

```
 For example, given array S = {-1 2 1 -4}, and target = 1.

 The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
```

题目翻译：

给定一个整形数组S和一个具体的值，要求找出在这数组中三个元素的和和这个给定的值最小。input只有一个有效答案。

java:

```
class Solution {
    public int threeSumClosest(int[] nums, int target) {
        
    }
}
```

C:

```
int threeSumClosest(int* nums, int numsSize, int target) {
    
}
```

# 4Sum

> Given an array S of n integers, are there elements a, b, c and d in S such that a+b+c+d = target? Find all unique quadruplets in the array which gives the sume of target.

> Note:
1. Elements in quadruplets (a, b, c, d) must be in non-descending order. (ie, a<=b<=c<=d)
2. The solution must not contain duplicates quadruplets.

```
For example, given array S = [1, 0, -1, 0, -2, 2], and target = 0.

A solution set is:
[
  [-1,  0, 0, 1],
  [-2, -1, 1, 2],
  [-2,  0, 0, 2]
]

```

题目翻译：

给定一个整型数字数组num和一个目标值target，求出数组中所有的组合满足条件： num[a]+num[b]+num[c]+num[d] = target.

并且要满足的条件是：
1. num[a] <= num[b] <= num[c] <= num[d]
2. 答案中的组合没有重复的.

题目分析：

这道题和3Sum几乎同出一辙，只不过是要求四个数字的和，在时间复杂度上要比3Sum高一个数量级。对于两点要求的处理：
1. 首先要对整个数组进行排序，这样得到的答案自然是排序好的.
2. 对于重复答案的处理和3Sum是一摸一样的。

C:

```
/**
 * Return an array of arrays of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int** fourSum(int* nums, int numsSize, int target, int* returnSize) {
    
}
```

java:

```
class Solution {
    public List<List<Integer>> fourSum(int[] nums, int target) {
        
    }
}
```

# Find Minimum in Rotated Sorted Array

> Suppose a sorted array is rotated at some pivot unknown to you beforehand.

> (i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).

> Find the minimum element.

> You may assume no duplicate exists in the array.

java:

```
class Solution {
    public int findMin(int[] nums) {
        
    }
}
```

C:

```
int findMin(int* nums, int numsSize) {
    
}
```
