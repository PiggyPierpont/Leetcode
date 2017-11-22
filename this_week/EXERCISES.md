# Merge Sorted Array

> Given two sorted integer arrays A and B, merge B into A as one sorted array.

> Note:
> You may assume that A has enough space (size that is greater or equal to m + n) to hold additional elements from B. The number of elements initialized in A and B are m and n respectively.

C:

```
void merge(int* nums1, int m, int* nums2, int n) {
    
}
```

java:

```
class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        
    }
}
```

# 2Sum
> Given an array of intergers, find two numbers such that they add up to a specific target number. The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2 Please note that your returned answers (both index1 and index2) are not zero-based.

> You may assume that each input would have exactly one solution.

> Input: numbers={2, 7, 11, 15}, target=9
Output: index1=1, index2=2

题目翻译：
这道题目的意思是给定一个数组和一个值，让求出这个数组中两个值的和等于这个给定值的坐标。输出是有要求的，1， 坐标较小的放在前面，较大的放在后面。2， 这俩坐标不能为零。

C:

```
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    
}
```

java:

```
class Solution {
    public int[] twoSum(int[] numbers, int target) {
        
    }
}
```

# 3Sum
> Given an array S of n integers, are there elements a, b, c in S such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.

> Note:
Elements in a triplet (a,b,c) must be in non-descending order. (ie, a ≤ b ≤ c)
The solution set must not contain duplicate triplets.

```
For example, given array S = [-1, 0, 1, 2, -1, -4],

A solution set is:
[
  [-1, 0, 1],
  [-1, -1, 2]
]
```

C:

```
/**
 * Return an array of arrays of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int** threeSum(int* nums, int numsSize, int* returnSize) {
    
}
```

java:

```
class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        
    }
}
```
