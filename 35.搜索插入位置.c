/*
 * @lc app=leetcode.cn id=35 lang=c
 *
 * [35] 搜索插入位置
 */

// @lc code=start


int searchInsert(int* nums, int numsSize, int target)
{
    int currentPosition = 1;
    if (numsSize == 1) { // 如果数组只有一个元素
        if (target > nums[0]) {
            return 1;
        } else {
            return 0;
        }
    } else { // 如果有多个数组
        for (int i = 1; i < numsSize; i++) {
            if (target <= nums[0]) { // 先跟第一个元素比较
                return 0;
            }
            if (nums[i - 1] <= target && target <= nums[i]) { // 如果找到元素位置，则退出返回，否则继续往后找
                break;
            } else {
                currentPosition++;
            }
        }
    }
    return currentPosition;
}
// @lc code=end

