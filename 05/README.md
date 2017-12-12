# Search a 2D Matrix

> Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

> Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.
For example,

> Consider the following matrix:

```
[
  [1,   3,  5,  7],
  [10, 11, 16, 20],
  [23, 30, 34, 50]
]
```

Given target = 3, return true.

题目翻译:
给定一个矩阵和一个特定值，要求写出一个高效的算法在这个矩阵中快速的找出是否这个给定的值存在.
但是这个矩阵有以下特征.

1. 对于每一行，数值是从左到右从小到大排列的.
2. 对于每一列，数值是从上到下从小到大排列的.

Java:

```
class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        
    }
}
```

C:

```
bool searchMatrix(int** matrix, int matrixRowSize, int matrixColSize, int target) {
    
}
```

# Search for a Range

> Given a sorted array of integers, find the starting and ending position of a given target value.

> Your algorithm's runtime complexity must be in the order of O(log n).

> If the target is not found in the array, return [-1, -1].

> For example,

> Given [5, 7, 7, 8, 8, 10] and target value 8,

> return [3, 4].

这题要求在一个排好序可能有重复元素的数组里面找到包含某个值的区间范围。要求使用O(log n)的时间，所以我们采用两次二分查找。首先二分找到第一个该值出现的位置，譬如m，然后在[m, n)区间内第二次二分找到最后一个该值出现的位置

C:

```
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    
}
```

Java:

```
class Solution {
    public int[] searchRange(int[] nums, int target) {
        
    }
}
```

# Search Insert Position

> Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

> You may assume no duplicates in the array.

> Here are few examples.

> [1,3,5,6], 5 → 2

> [1,3,5,6], 2 → 1

> [1,3,5,6], 7 → 4

> [1,3,5,6], 0 → 0

这题要求在一个排好序的数组查找某值value，如果存在则返回对应index，不存在则返回能插入到数组中的index（保证数组有序）

Java:

```
class Solution {
    public int searchInsert(int[] nums, int target) {
        
    }
}
```

C:

```
int searchInsert(int* nums, int numsSize, int target) {
    
}
```
