//
// Created by Administrator on 2024/12/18.
//
/**
 *    数组
 *
 */


#include <malloc.h>

/**
 *
 *   Leetcode 面试题 16.11. 跳水板
 *      你正在使用一堆木板建造跳水板。有两种类型的木板，其中长度较短的木板长度为shorter，长度较长的木板长度为longer。你必须正好使用k块木板。编写一个方法，生成跳水板所有可能的长度。
 *      返回的长度需要从小到大排列。*
 *
 *    示例 1
 *      输入：
 *       shorter = 1
 *       longer = 2
 *       k = 3
 *    输出： [3,4,5,6]
 *    解释：可以使用 3 次 shorter，得到结果 3；使用 2 次 shorter 和 1 次 longer，得到结果 4 。以此类推，得到最终结果。
 *
 *    提示：*
 *           0 < shorter <= longer
 *           0 <= k <= 100000
 */
int *divingBoard(int shorter, int longer, int k, int *returnSize) {
    // 没有木板
    if (k == 0) {
        *returnSize = 0;
        return NULL;
    }// 短木板和长木板长度一样
    else if (shorter == longer) {
        int *res = (int *) malloc(sizeof(int));
        *res = shorter * k;
        *returnSize = 1;
        return res;
    } else {// shorter < longer
        int *res = (int *) malloc(sizeof(int) * (k + 1));
        for (int i = 0; i <= k; i++) {
            *(res + i) = longer * i + shorter * (k - i);
        }
        *returnSize = k + 1;
        return res;
    }
}

