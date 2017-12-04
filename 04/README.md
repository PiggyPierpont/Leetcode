# rgest Rectangle in Histogram

> Given n non-negative integers representing the histogram's bar height where the width of each bar is 1, find the area of largest rectangle in the histogram.

> ![histogram](photos/histogram.png)

> Above is a histogram where width of each bar is 1, given height = [2,1,5,6,2,3].

> ![histogram_area](photos/histogram_area.png)

> The largest rectangle is shown in the shaded area, which has area = 10 unit.

> For example,
> Given height = [2,1,5,6,2,3],
> return 10.

C:

```
int largestRectangleArea(int* heights, int heightsSize) {
    
}
```

Java:

```
class Solution {
    public int largestRectangleArea(int[] heights) {
        
    }
}
```

# Maximal Rectangle

> Given a 2D binary matrix filled with 0's and 1's, find the largest rectangle containing all ones and return its area.

这题是一道难度很大的题目，至少我刚开始的时候完全不知道怎么做，也是google了才知道的。

这题要求在一个矩阵里面求出全部包含1的最大矩形面积，譬如这个：

```
    0 0 0 0
    1 1 1 1
    1 1 1 0
    0 1 0 0
```

我们可以知道，最大的矩形面积为6。也就是下图中虚线包围的区域。那么我们如何得到这个区域呢？

```
    0  0  0  0
   |--------|
   |1  1  1 |1
   |1  1  1 |0
   |--------|
    0  1  0  0
```

Java:

```
class Solution {
    public int maximalRectangle(char[][] matrix) {
        
    }
}
```

C:

```
int maximalRectangle(char** matrix, int matrixRowSize, int matrixColSize) {
    
}
```

# Palindrome Number

> Determine whether an integer is a palindrome. Do this without extra space.

题目翻译:
给定一个数字，要求判断这个数字是否为回文数字. 比如121就是回文数字，122就不是回文数字.

C:

```
bool isPalindrome(int x) {
    
}
```

Java:

```
class Solution {
    public boolean isPalindrome(int x) {
        
    }
}
```
