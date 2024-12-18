#include <stdbool.h>
#include <stdio.h>
#include <string.h>
// Created by 95322 on 2024/12/4.

/*121. 买卖股票的最佳时机
给定一个数组 prices ，它的第 i 个元素 prices[i] 表示一支给定股票第 i 天的价格。
你只能选择 某一天 买入这只股票，并选择在 未来的某一个不同的日子 卖出该股票。设计一个算法来计算你所能获取的最大利润。
返回你可以从这笔交易中获取的最大利润。如果你不能获取任何利润，返回 0 。

示例 1：
输入：[7,1,5,3,6,4]
输出：5
解释：在第 2 天（股票价格 = 1）的时候买入，在第 5 天（股票价格 = 6）的时候卖出，最大利润 = 6-1 = 5 。
注意利润不能是 7-1 = 6, 因为卖出价格需要大于买入价格；同时，你不能在买入前卖出股票。

示例 2：
输入：prices = [7,6,4,3,1]
输出：0
解释：在这种情况下, 没有交易完成, 所以最大利润为 0。*/

//int maxProfit(int *prices, int pricesSize) {
//    int min = prices[0];
//    int max = 0;
//    for (int i = 1; i < pricesSize; i++) {
//        if (prices[i] - prices[i-1] < 0) {
//            min = prices[i];
//            continue;
//        } else {// prices[i] - prices[i-1] >= 0
//            max = (max >(prices[i] - prices[i-1])) ? max : (prices[i] - prices[i-1]);
//        }
//    }
//    return max;
//}

//1668. 最大重复子字符串
//给你一个字符串 sequence ，如果字符串 word 连续重复 k 次形成的字符串是 sequence 的一个子字符串，那么单词 word 的 重复值为 k 。
//单词 word 的 最大重复值 是单词 word 在 sequence 中最大的重复值。如果 word 不是 sequence 的子串，那么重复值 k 为 0 。
//给你一个字符串 sequence 和 word ，请你返回 最大重复值 k 。
//
//示例 1：
//输入：sequence = "ababc", word = "ab"
//输出：2
//解释："abab" 是 "ababc" 的子字符串。
//
//示例 2：
//输入：sequence = "ababc", word = "ba"
//输出：1
//解释："ba" 是 "ababc" 的子字符串，但 "baba" 不是 "ababc" 的子字符串。
//
//示例 3：
//输入：sequence = "ababc", word = "ac"
//输出：0
//解释："ac" 不是 "ababc" 的子字符串。

//// 检查给定字符串 `sequence` 从 `pos` 位置开始是否包含子串 `word`
//bool exits_sub_str(char *sequence, char *word, int pos) {
//    char *p = sequence + pos;  // 指针 p 指向 sequence 中从 pos 位置开始的字符
//    char *q = word;            // 指针 q 指向 word 的开头
//
//    // 当 q 指向的字符不是 '\0' 时，继续循环
//    while (*q) {
//        if (*p != *q) {        // 如果 p 和 q 指向的字符不相同，则返回 false
//            return false;
//        }
//        p++, q++;             // 向下移动 p 和 q 的指针，检查下一个字符
//    }
//    return true;             // 如果整个 word 都在 sequence 的 pos 位置匹配，返回 true
//}

//// 计算 `word` 在 `sequence` 中连续重复出现的最大次数
//int maxRepeating(char *sequence, char *word) {
//    int len1 = strlen(sequence);  // 获取 sequence 的长度
//    int len2 = strlen(word);      // 获取 word 的长度
//    int arr[len1];                // 声明一个数组，用于记录每次子串出现的位置
//    int cnt = 0;                  // 记录字串出现的次数
//
//    // 1. 记录 `word` 出现于 `sequence` 中的每个位置到数组 arr 中
//    for (int i = 0; i <= len1 - len2; i++) {
//        if (exits_sub_str(sequence, word, i)) {  // 如果在 i 位置找到子串
//            arr[cnt++] = i;       // 将位置 i 存入 arr，并增加计数
//        }
//    }
//
//    // 如果 `word` 在 `sequence` 中没有出现，则返回 0
//    if (cnt == 0) {
//        return 0;
//    }
//
////    int k = 0;                   // 存储最终返回的最大重复次数
//    int dp[cnt];                 // 动态规划数组，用于记录从每个位置开始的子串重复次数
//dp[0]=1;
////    k = dp[0] = 1;               // 假设第一个出现的 word 至少重复一次
//    for (int i = 1; i < cnt; i++) {  // 按下标循环检查每个匹配
//        dp[i] = 1;               // 初始设置为 1，因为每次出现的都是至少一次
//        for (int j = i - 1; j >= 0; j--) {  // 查找之前的匹配位置
//            // 检查是否是相邻重复
//            if (arr[i] - arr[j] == len2) {  // 如果相差的位置正好是 word 的长度
//                dp[i] = dp[j] + 1;   // 更新 dp[i] 为 dp[j] 加一
//                break;               // 找到匹配后退出内层循环
//            }
//        }
////        k = k < dp[i] ? dp[i] : k;  // 更新 k 为最大
//    }
//    return dp[cnt-1];                    // 返回最大重复次数, 即动态数组最后一个数
//}
//
//int main() {
//    int k = maxRepeating("bababac", "ba");
//    printf("%d", k);
//}
//bool if_exist_sub_str(char *sequence, char *word, int pos) {
//    int *p = sequence + pos; // 子串在seq中的位置
//    int *q = word;
//    while(*q!='\0'){
//       if(*p!=*q){ // 判断每个字符是否相同，如果不同，直接跳出循环
//           return false;
//       }
//        p++;
//        q++;
//    }
//    return true;
//}
//
//int maxRepeating(char *sequence, char *word) {
//    // 1. 计算出给定字符串sequence中，子串可能出现的下标值，存入到一个数组中。
//    unsigned long long int seq_len = strlen(sequence);
//    unsigned long long int word_len = strlen(sequence);
//    int a[seq_len];
//    for (int i = 0; i <= word_len - seq_len; i++) {
//        if (if_exist_sub_str(sequence, word, i)) {
//            a[i] = i;
//        }
//    }
//    // 2. 利用动态规划，计算连续重复次数，在每一个子串出现的下标位置上，都对应一个连续重复的次数K。
//}

//20. 有效的括号
//给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。
//有效字符串需满足：
//左括号必须用相同类型的右括号闭合。
//左括号必须以正确的顺序闭合。
//每个右括号都有一个对应的相同类型的左括号。
//
//示例 1：
//输入：s = "()"
//输出：true
//
//示例 2：
//输入：s = "()[]{}"
//输出：true
//
//示例 3：
//输入：s = "(]"
//输出：false
//
//示例 4：
//输入：s = "([])"
//输出：true

#include <stdbool.h> // 引入布尔型的支持
#include <malloc.h>

// 检查括号字符串是否有效
//bool isValid(char* s) {
//    char stack[10000] = {0};  // 初始化一个栈，大小为10000，用于存储左括号
//    char *sp = stack;         // 指针 sp 指向栈的顶部（初始为栈底）
//
//    // 遍历字符串直到遇到 NULL 终止符
//    for (int i = 0; s[i] != '\0'; i++) {
//        // 如果当前字符是左括号，则入栈
//        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
//            *sp++ = s[i];     // 将左括号放入栈中并移动指针
//        }
//            // 如果栈为空，且当前字符是右括号，返回 false
//        else if (sp == stack) {
//            return false;     // 左括号不匹配，直接返回 false
//        }
//            // 如果当前字符是右括号 ')'，检查栈顶是否有对应的左括号
//        else if (s[i] == ')') {
//            if (*(sp - 1) == '(') {
//                sp--;          // 出栈，指针向下移动
//            } else {
//                return false;  // 当前右括号和栈顶不匹配，返回 false
//            }
//        }
//            // 如果当前字符是右括号 ']'，检查栈顶是否有对应的左括号
//        else if (s[i] == ']') {
//            if (*(sp - 1) == '[') {
//                sp--;          // 出栈，指针向下移动
//            } else {
//                return false;  // 当前右括号和栈顶不匹配，返回 false
//            }
//        }
//            // 如果当前字符是右括号 '}'，检查栈顶是否有对应的左括号
//        else if (s[i] == '}') {
//            if (*(sp - 1) == '{') {
//                sp--;          // 出栈，指针向下移动
//            } else {
//                return false;  // 当前右括号和栈顶不匹配，返回 false
//            }
//        }
//    }
//
//    // 遍历结束后，如果栈中还有元素，说明有未匹配的左括号，返回 false
//    if (sp > stack) {
//        return false; // 栈中仍有未配对的左括号，返回 false
//    }
//
//    return true; // 所有括号有效配对，返回 true
//}

//bool isValid(char *s) {
//    char stack[100000] = {0};
//    char *sp = stack;
//
//    for (int i = 0; s[i] != '\0'; i++) {
//        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
//            *sp++ = s[i];
//        } else if (sp == stack) {
//            return false;
//        } else if (s[i] == ')') {
//            if (*(sp - 1) == '(') {
//                sp--;
//            } else
//                return false;
//        } else if (s[i] == ']') {
//            if (*(sp - 1) == '[') {
//                sp--;
//            } else
//                return false;
//        } else if (s[i] == '}') {
//            if (*(sp - 1) == '{') {
//                sp--;
//            } else
//                return false;
//        }
//    }
//    if (sp > stack) {
//        return false;
//    }
//    return true;
//}

//
//2696. 删除子串后的字符串最小长度
//给你一个仅由 大写 英文字符组成的字符串 s 。
//你可以对此字符串执行一些操作，在每一步操作中，你可以从 s 中删除 任一个 "AB" 或 "CD" 子字符串。
//通过执行操作，删除所有 "AB" 和 "CD" 子串，返回可获得的最终字符串的 最小 可能长度。
//注意，删除子串后，重新连接出的字符串可能会产生新的 "AB" 或 "CD" 子串。
//
//示例 1：
//输入：s = "ABFCACDB"
//输出：2
//解释：你可以执行下述操作：
//- 从 "ABFCACDB" 中删除子串 "AB"，得到 s = "FCACDB" 。
//- 从 "FCACDB" 中删除子串 "CD"，得到 s = "FCAB" 。
//- 从 "FCAB" 中删除子串 "AB"，得到 s = "FC" 。
//最终字符串的长度为 2 。
//可以证明 2 是可获得的最小长度。
//示例 2：
//输入：s = "ACBBD"
//输出：5
//解释：无法执行操作，字符串长度不变。

//int minLength(char *s) {
//
//    char stack[100] = {0};
//    char *sp = stack;
//    int i = 0;
//    while (s[i] != '\0') {
//        if (sp == stack) { // 如果是空栈，直接入栈
//            *sp++ = s[i];
//        } else {
//            if (s[i] == 'B' && *(sp - 1) == 'A') {
//                sp--;
//            } else if (s[i] == 'D' && *(sp - 1) == 'C') {
//                sp--;
//            } else {
//                *sp++ = s[i];
//            }
//        }
//        i++;
//    }
//    return sp - stack;
//}
//746. 使用最小花费爬楼梯
//给你一个整数数组 cost ，其中 cost[i] 是从楼梯第 i 个台阶向上爬需要支付的费用。一旦你支付此费用，即可选择向上爬一个或者两个台阶。
//你可以选择从下标为 0 或下标为 1 的台阶开始爬楼梯。请你计算并返回达到楼梯顶部的最低花费。
//
//示例 1：
//输入：cost = [10,15,20]
//输出：15
//解释：你将从下标为 1 的台阶开始。
//- 支付 15 ，向上爬两个台阶，到达楼梯顶部。
//总花费为 15 。
//示例 2：
//输入：cost = [1,100,1,1,1,100,1,1,100,1]
//输出：6
//解释：你将从下标为 0 的台阶开始。
//- 支付 1 ，向上爬两个台阶，到达下标为 2 的台阶。
//- 支付 1 ，向上爬两个台阶，到达下标为 4 的台阶。
//- 支付 1 ，向上爬两个台阶，到达下标为 6 的台阶。
//- 支付 1 ，向上爬一个台阶，到达下标为 7 的台阶。
//- 支付 1 ，向上爬两个台阶，到达下标为 9 的台阶。
//- 支付 1 ，向上爬一个台阶，到达楼梯顶部。
//总花费为 6 。
//int minCostClimbingStairs(int *cost, int costSize) {
//    int i = 0;
//    int dp[costSize + 1]; // dp[n]代表到第n个阶梯的最小花费,dp[n+1]才是楼顶。因此需要申请costSize+1个空间
//    dp[0] = dp[1] = 0; // 因为可以从0下标或1下标阶梯开始，不需要花费，则置为0
//    for (i = 2; i < costSize + 1; i++) {
//        // 因为一次可以跳一个台阶或两个台阶，因此到达当前台阶的最小花费为MIN(到达前一个台阶的最小花费dp[i-1]+前一个台阶的费用cost[i-1], 到达前两个台阶的最小花费dp[i-2]+前两个台阶的费用cost[i-2]
//        if (dp[i - 1] + cost[i - 1] >= dp[i - 2] + cost[i - 2]) {
//            dp[i] = dp[i - 2] + cost[i - 2];
//        } else {
//            dp[i] = dp[i - 1] + cost[i - 1];
//        }
//    }
//    return dp[costSize]; // 即返回到达楼顶的最小费用。
//}
//
//int main() {
//    int cost[] = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
////    int cost[] = {10, 15, 20};
//    int res = minCostClimbingStairs(cost, 10);
//    printf("%d", res);
//
//}

//#define MIN(a,b)  ((a)>(b)?(b):(a))  // 定义最小值宏，返回 a 和 b 中的较小者。
//
//int minCostClimbingStairs(int* cost, int costSize) {
//    // 如果只有一个台阶，则返回到达该台阶的费用。
//    if (costSize == 1) {
//        return cost[0];
//    }
//
//    int dp[costSize];  // 动态规划数组，用于存储到达每个台阶的最低费用。
//    dp[0] = cost[0];   // 到达第一个台阶的费用就是该台阶的费用。
//    dp[1] = cost[1];   // 到达第二个台阶的费用就是第二个台阶的费用。
//
//    // 从第三个台阶开始计算到达每个台阶的最小费用
//    for (int i = 2; i < costSize; i++) {
//        // 计算到达第 i 个台阶的最低费用
//        // 可以通过前一个台阶 dp[i-1] 或前两个台阶 dp[i-2] 之一到达
//        // 所以当前台阶的费用为到达前面较小费用的台阶再加上当前台阶的费用
//        dp[i] = MIN(dp[i - 1], dp[i - 2]) + cost[i];
//    }
//
//    // 返回到达最后一个台阶或倒数第二个台阶的最低费用
//    return MIN(dp[costSize - 1], dp[costSize - 2]);
//}

//
//LCR 147. 最小栈
//
//请你设计一个 最小栈 。它提供 push ，pop ，top 操作，并能在常数时间内检索到最小元素的栈。
//实现 MinStack 类:
//MinStack() 初始化堆栈对象。
//void push(int val) 将元素val推入堆栈。
//void pop() 删除堆栈顶部的元素。
//int top() 获取堆栈顶部的元素。
//int getMin() 获取堆栈中的最小元素。

//示例 1：
//输入：
//["MinStack","push","push","push","getMin","pop","top","getMin"]
//[[],[-2],[0],[-3],[],[],[],[]]
//输出：
//[null,null,null,null,-3,null,0,-2]
//解释：
//MinStack minStack = new MinStack();
//minStack.push(-2);
//minStack.push(2);
//minStack.push(-3);
//minStack.getMin();   --> 返回 -3.
//minStack.pop();
//minStack.top();      --> 返回 0.
//minStack.getMin();   --> 返回 -2.
//提示：
//
//-231 <= val <= 231 - 1
//pop、top 和 getMin 操作总是在 非空栈 上调用
//push、pop、top 和 getMin 最多被调用 3 * 104 次

//struct data_struct {
//    int value; // 当前值
//    int min_value; // 最小值
//};
//
//typedef struct {
//    struct data_struct stack[30000];
//    struct data_struct *sp;
//} MinStack;
//
//MinStack *minStackCreate() {
//    MinStack *ret = (MinStack *) malloc(sizeof(MinStack));
//    ret->sp = ret->stack;
//}
//
////
//void minStackPush(MinStack *obj, int x) {
//    if (obj->sp == obj->stack) { //空栈时，直接push，不用比较;
//        obj->sp->value = x;
//        obj->sp->min_value = x;
//    } else {// 需要先比较入栈元素与栈顶元素的最小值，取两者较小的作为新入栈元素的最小值。
//        obj->sp->value = x;
//        obj->sp->min_value = x >= (obj->sp - 1)->min_value ? (obj->sp - 1)->min_value : x;
//    }
//    obj->sp++;
//}
//
////
//void minStackPop(MinStack *obj) { // 出栈，栈顶指针减1
//    obj->sp--;
//}
//
////
//int minStackTop(MinStack *obj) { // 返回栈顶元素中的当前值，栈顶指针sp不变
//    return (obj->sp - 1)->value;
//}
////
//int minStackGetMin(MinStack* obj) { // 返回栈顶元素中的最小值，栈顶指针sp不变
//    return (obj->sp -1)->min_value;
//}
////
//void minStackFree(MinStack* obj) {
//    free(obj);
//    obj = NULL;
//}
////
//int main(){
//    MinStack* p = minStackCreate();
//    minStackPush(p,-2);
//    minStackPush(p,0);
//    minStackPush(p,-3);
//    int min = minStackGetMin(p);
//    printf("%d\n",min);//-3
//    minStackPop(p);
//    int value =  minStackTop(p);
//    printf("%d\n",value);//0
//    min = minStackGetMin(p);
//    printf("%d\n",min);//-2
//    minStackFree(p);
//    p = NULL;
//}
//
//int heightChecker(int *heights, int heightsSize) {
//    int expected[heightsSize];
//    for (int i = 0; i < heightsSize; i++) {
//        expected[i] = heights[i];
//    }
//    for (int i = 1; i < heightsSize; i++) {
//        for (int j = 0; j < heightsSize - i; j++) {
//            if (expected[j] >= expected[j + 1]) {
//                int temp = 0;
//                temp = expected[j];
//                expected[j] = expected[j + 1];
//                expected[j + 1] = temp;
//            }
//        }
//    }
//    int cnt = 0;
//    for (int i = 0; i < heightsSize; i++) {
//        if (heights[i] != expected[i]) {
//            cnt++;
//        }
//    }
//    return cnt;
//}
//
//int main() {
////    int heights[] = {1,1,4,2,1,3};
//    int heights[] = {5, 1, 2, 3, 4};
//    int res = heightChecker(heights, 6);
//    printf("%d", res);
//}

//1331. 数组序号转换
//给你一个整数数组 arr ，请你将数组中的每个元素替换为它们排序后的序号。
//序号代表了一个元素有多大。序号编号的规则如下：
//序号从 1 开始编号。
//一个元素越大，那么序号越大。如果两个元素相等，那么它们的序号相同。
//每个数字的序号都应该尽可能地小。
//
//示例 1：
//输入：arr = [40,10,20,30]
//输出：[4,1,2,3]
//解释：40 是最大的元素。 10 是最小的元素。 20 是第二小的数字。 30 是第三小的数字。
//
//示例 2：
//输入：arr = [100,100,100]
//输出：[1,1,1]
//解释：所有元素有相同的序号。
//
//示例 3：
//输入：arr = [37,12,28,9,100,56,80,5,12]
//输出：[5,3,4,2,8,6,7,1,3]
//
//提示：
//0 <= arr.length <= 105
//-109 <= arr[i] <= 109
// 解法1. 用结构体数组冒泡排序，测试用例很大时，超出时间限制。
//typedef struct data_t {
//    int value;
//    int origin_pos;//原始位置
//    int ordered_pos;//排序后的位置。
//} data_t;
//
//void order_struct_arr_by_value(data_t m[], int arrSize) {
//    for (int i = 1; i < arrSize; i++) {
//        for (int j = 0; j < arrSize - i; j++) {
//            if (m[j].value > m[j + 1].value) {
//                data_t t = m[j];
//                m[j] = m[j + 1];
//                m[j + 1] = t;
//            }
//        }
//    }
//}
//
//void order_struct_arr_origin_pos(data_t m[], int arrSize) {
//    for (int i = 1; i < arrSize; i++) {
//        for (int j = 0; j < arrSize - i; j++) {
//            if (m[j].origin_pos > m[j + 1].origin_pos) {
//                data_t t = m[j];
//                m[j] = m[j + 1];
//                m[j + 1] = t;
//            }
//        }
//    }
//}
//
//int *arrayRankTransform(int *arr, int arrSize, int *returnSize) {
//    if (arrSize == 0) {
//        *returnSize = NULL;
//        return NULL;
//    }
//    data_t m[arrSize];
//    for (int i = 0; i < arrSize; i++) {
//        m[i].value = arr[i];
//        m[i].origin_pos = i;
//    }
//    order_struct_arr_by_value(m, arrSize);
//    int k = 1;
//    m[0].ordered_pos = k;
//    for (int i = 1; i < arrSize; i++) {
//        if (m[i].value != m[i - 1].value) {
//            k++;
//        }
//        m[i].ordered_pos = k;
//    }
//    order_struct_arr_origin_pos(m, arrSize);
//    int *ret = (int *) malloc(sizeof(int) * arrSize);
//    for (int i = 0; i < arrSize; i++) {
//        ret[i] = m[i].ordered_pos;
//    }
//    *returnSize = arrSize;
//    return ret;
//}

// 解法2. 加上函数指针，抽象排序规则，简化代码
//typedef struct data_t {
//    int value;
//    int origin_pos;//原始位置
//    int ordered_pos;//排序后的位置。
//} data_t;
//
//void order_struct_arr(data_t m[], int arrSize, int (*cmp)(data_t *a, data_t *b)) {
//    for (int i = 1; i < arrSize; i++) {
//        for (int j = 0; j < arrSize - i; j++) {
//            if (cmp(&m[j], &m[j + 1])) { //将要回调实际参数的函数。
//                data_t t = m[j];
//                m[j] = m[j + 1];
//                m[j + 1] = t;
//            }
//        }
//    }
//}
//int cmp_by_value(data_t *a, data_t *b) {
//    if (a->value > b->value) {
//        return 1;
//    }
//    return 0;
//}
//int cmp_by_origin_order(data_t *a, data_t *b) {
//    if (a->origin_pos > b->origin_pos) {
//        return 1;
//    }
//    return 0;
//}
//int *arrayRankTransform(int *arr, int arrSize, int *returnSize) {
//    if (arrSize == 0) {
//        *returnSize = 0;
//        return NULL;
//    }
//    data_t m[arrSize];
//    for (int i = 0; i < arrSize; i++) {
//        m[i].value = arr[i];
//        m[i].origin_pos = i;
//    }
//    order_struct_arr(m, arrSize, cmp_by_value);
//    int k = 1;
//    m[0].ordered_pos = k;
//    for (int i = 1; i < arrSize; i++) {
//        if (m[i].value != m[i - 1].value) {
//            k++;
//        }
//        m[i].ordered_pos = k;
//    }
//    order_struct_arr(m, arrSize, cmp_by_origin_order);
//    int *ret = (int *) malloc(sizeof(int) * arrSize);
//    for (int i = 0; i < arrSize; i++) {
//        ret[i] = m[i].ordered_pos;
//    }
//    *returnSize = arrSize;
//    return ret;
//}
// 解法3. 改用快速排序
//typedef struct data_t{
//    int value;
//    int origin_pos;//原始位置
//    int ordered_pos;//排序后的位置。
//} data_t;
//
//void order_struct_arr(data_t m[],int arrSize,int (* cmp)(data_t * a,data_t * b)){
//    for(int i = 1;i<arrSize;i++){
//        for(int j = 0;j<arrSize-i;j++){
//            if(cmp(&m[j],&m[j+1])){ //将要回调实际参数的函数。
//                data_t t = m[j];
//                m[j] = m[j+1];
//                m[j+1] = t;
//            }
//        }
//    }
//}
//int cmp_by_value(const void * a,const void * b){
//    if(((data_t *)a)->value > ((data_t *)b)->value){
//        return 1;
//    }
//    return 0;
//}
//int cmp_by_origin_order(const void * a,const void * b){
//    if(((data_t *)a)->origin_pos > ((data_t *)b)->origin_pos){
//        return 1;
//    }
//    return 0;
//}
//int* arrayRankTransform(int* arr, int arrSize, int* returnSize) {
//    if(arrSize == 0){
//        *returnSize = 0;
//        return NULL;
//    }
//    data_t m[arrSize];
//    for(int i = 0;i<arrSize;i++){
//        m[i].value = arr[i];
//        m[i].origin_pos = i;
//    }
//    //order_struct_arr(m,arrSize,cmp_by_value);
//    qsort(m,arrSize,sizeof(data_t),cmp_by_value);
//    int k = 1;
//    m[0].ordered_pos = k;
//    for(int i = 1;i<arrSize;i++){
//        if(m[i].value != m[i-1].value){
//            k++;
//        }
//        m[i].ordered_pos = k;
//    }
//    //order_struct_arr(m,arrSize,cmp_by_origin_order);
//    qsort(m,arrSize,sizeof(data_t),cmp_by_origin_order);
//    int * ret = (int *)malloc(sizeof(int)* arrSize);
//    for(int i = 0;i<arrSize;i++){
//        ret[i] = m[i].ordered_pos;
//    }
//    *returnSize = arrSize;
//    return ret;
//}

//void merge(int *A, int ASize, int m, int *B, int BSize, int n) {
//    int *p = A + m - 1;
//    int *q = B + n - 1;
//    int *k = A + ASize - 1;
//    if (p < A) {
//        p = NULL;
//    }
//    if (q < B) {
//        return;
//    }
//    while (q != NULL) {
//        if (p == NULL) {
//            *k-- = *q--;
//        } else if (*p > *q) {
//            *k-- = *p--;
//        } else { // *q>=*p
//            *k-- = *q--;
//        }
//        if (p < A) {
//            p = NULL;
//        }
//        if (q < B) {
//            q = NULL;
//        }
//    }
//}

//int main() {
//    printf("HelLo World!");
//}


