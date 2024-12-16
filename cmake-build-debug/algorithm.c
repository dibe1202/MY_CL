#include <stdbool.h>
#include <stdio.h>
#include <string.h>
// Created by 95322 on 2024/12/4.

/*121. ������Ʊ�����ʱ��
����һ������ prices �����ĵ� i ��Ԫ�� prices[i] ��ʾһ֧������Ʊ�� i ��ļ۸�
��ֻ��ѡ�� ĳһ�� ������ֻ��Ʊ����ѡ���� δ����ĳһ����ͬ������ �����ù�Ʊ�����һ���㷨�����������ܻ�ȡ���������
��������Դ���ʽ����л�ȡ�������������㲻�ܻ�ȡ�κ����󣬷��� 0 ��

ʾ�� 1��
���룺[7,1,5,3,6,4]
�����5
���ͣ��ڵ� 2 �죨��Ʊ�۸� = 1����ʱ�����룬�ڵ� 5 �죨��Ʊ�۸� = 6����ʱ��������������� = 6-1 = 5 ��
ע���������� 7-1 = 6, ��Ϊ�����۸���Ҫ��������۸�ͬʱ���㲻��������ǰ������Ʊ��

ʾ�� 2��
���룺prices = [7,6,4,3,1]
�����0
���ͣ������������, û�н������, �����������Ϊ 0��*/

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

//1668. ����ظ����ַ���
//����һ���ַ��� sequence ������ַ��� word �����ظ� k ���γɵ��ַ����� sequence ��һ�����ַ�������ô���� word �� �ظ�ֵΪ k ��
//���� word �� ����ظ�ֵ �ǵ��� word �� sequence �������ظ�ֵ����� word ���� sequence ���Ӵ�����ô�ظ�ֵ k Ϊ 0 ��
//����һ���ַ��� sequence �� word �����㷵�� ����ظ�ֵ k ��
//
//ʾ�� 1��
//���룺sequence = "ababc", word = "ab"
//�����2
//���ͣ�"abab" �� "ababc" �����ַ�����
//
//ʾ�� 2��
//���룺sequence = "ababc", word = "ba"
//�����1
//���ͣ�"ba" �� "ababc" �����ַ������� "baba" ���� "ababc" �����ַ�����
//
//ʾ�� 3��
//���룺sequence = "ababc", word = "ac"
//�����0
//���ͣ�"ac" ���� "ababc" �����ַ�����

//// �������ַ��� `sequence` �� `pos` λ�ÿ�ʼ�Ƿ�����Ӵ� `word`
//bool exits_sub_str(char *sequence, char *word, int pos) {
//    char *p = sequence + pos;  // ָ�� p ָ�� sequence �д� pos λ�ÿ�ʼ���ַ�
//    char *q = word;            // ָ�� q ָ�� word �Ŀ�ͷ
//
//    // �� q ָ����ַ����� '\0' ʱ������ѭ��
//    while (*q) {
//        if (*p != *q) {        // ��� p �� q ָ����ַ�����ͬ���򷵻� false
//            return false;
//        }
//        p++, q++;             // �����ƶ� p �� q ��ָ�룬�����һ���ַ�
//    }
//    return true;             // ������� word ���� sequence �� pos λ��ƥ�䣬���� true
//}

//// ���� `word` �� `sequence` �������ظ����ֵ�������
//int maxRepeating(char *sequence, char *word) {
//    int len1 = strlen(sequence);  // ��ȡ sequence �ĳ���
//    int len2 = strlen(word);      // ��ȡ word �ĳ���
//    int arr[len1];                // ����һ�����飬���ڼ�¼ÿ���Ӵ����ֵ�λ��
//    int cnt = 0;                  // ��¼�ִ����ֵĴ���
//
//    // 1. ��¼ `word` ������ `sequence` �е�ÿ��λ�õ����� arr ��
//    for (int i = 0; i <= len1 - len2; i++) {
//        if (exits_sub_str(sequence, word, i)) {  // ����� i λ���ҵ��Ӵ�
//            arr[cnt++] = i;       // ��λ�� i ���� arr�������Ӽ���
//        }
//    }
//
//    // ��� `word` �� `sequence` ��û�г��֣��򷵻� 0
//    if (cnt == 0) {
//        return 0;
//    }
//
////    int k = 0;                   // �洢���շ��ص�����ظ�����
//    int dp[cnt];                 // ��̬�滮���飬���ڼ�¼��ÿ��λ�ÿ�ʼ���Ӵ��ظ�����
//dp[0]=1;
////    k = dp[0] = 1;               // �����һ�����ֵ� word �����ظ�һ��
//    for (int i = 1; i < cnt; i++) {  // ���±�ѭ�����ÿ��ƥ��
//        dp[i] = 1;               // ��ʼ����Ϊ 1����Ϊÿ�γ��ֵĶ�������һ��
//        for (int j = i - 1; j >= 0; j--) {  // ����֮ǰ��ƥ��λ��
//            // ����Ƿ��������ظ�
//            if (arr[i] - arr[j] == len2) {  // �������λ�������� word �ĳ���
//                dp[i] = dp[j] + 1;   // ���� dp[i] Ϊ dp[j] ��һ
//                break;               // �ҵ�ƥ����˳��ڲ�ѭ��
//            }
//        }
////        k = k < dp[i] ? dp[i] : k;  // ���� k Ϊ���
//    }
//    return dp[cnt-1];                    // ��������ظ�����, ����̬�������һ����
//}
//
//int main() {
//    int k = maxRepeating("bababac", "ba");
//    printf("%d", k);
//}
//bool if_exist_sub_str(char *sequence, char *word, int pos) {
//    int *p = sequence + pos; // �Ӵ���seq�е�λ��
//    int *q = word;
//    while(*q!='\0'){
//       if(*p!=*q){ // �ж�ÿ���ַ��Ƿ���ͬ�������ͬ��ֱ������ѭ��
//           return false;
//       }
//        p++;
//        q++;
//    }
//    return true;
//}
//
//int maxRepeating(char *sequence, char *word) {
//    // 1. ����������ַ���sequence�У��Ӵ����ܳ��ֵ��±�ֵ�����뵽һ�������С�
//    unsigned long long int seq_len = strlen(sequence);
//    unsigned long long int word_len = strlen(sequence);
//    int a[seq_len];
//    for (int i = 0; i <= word_len - seq_len; i++) {
//        if (if_exist_sub_str(sequence, word, i)) {
//            a[i] = i;
//        }
//    }
//    // 2. ���ö�̬�滮�����������ظ���������ÿһ���Ӵ����ֵ��±�λ���ϣ�����Ӧһ�������ظ��Ĵ���K��
//}

//20. ��Ч������
//����һ��ֻ���� '('��')'��'{'��'}'��'['��']' ���ַ��� s ���ж��ַ����Ƿ���Ч��
//��Ч�ַ��������㣺
//�����ű�������ͬ���͵������űպϡ�
//�����ű�������ȷ��˳��պϡ�
//ÿ�������Ŷ���һ����Ӧ����ͬ���͵������š�
//
//ʾ�� 1��
//���룺s = "()"
//�����true
//
//ʾ�� 2��
//���룺s = "()[]{}"
//�����true
//
//ʾ�� 3��
//���룺s = "(]"
//�����false
//
//ʾ�� 4��
//���룺s = "([])"
//�����true

#include <stdbool.h> // ���벼���͵�֧��
#include <malloc.h>

// ��������ַ����Ƿ���Ч
//bool isValid(char* s) {
//    char stack[10000] = {0};  // ��ʼ��һ��ջ����СΪ10000�����ڴ洢������
//    char *sp = stack;         // ָ�� sp ָ��ջ�Ķ�������ʼΪջ�ף�
//
//    // �����ַ���ֱ������ NULL ��ֹ��
//    for (int i = 0; s[i] != '\0'; i++) {
//        // �����ǰ�ַ��������ţ�����ջ
//        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
//            *sp++ = s[i];     // �������ŷ���ջ�в��ƶ�ָ��
//        }
//            // ���ջΪ�գ��ҵ�ǰ�ַ��������ţ����� false
//        else if (sp == stack) {
//            return false;     // �����Ų�ƥ�䣬ֱ�ӷ��� false
//        }
//            // �����ǰ�ַ��������� ')'�����ջ���Ƿ��ж�Ӧ��������
//        else if (s[i] == ')') {
//            if (*(sp - 1) == '(') {
//                sp--;          // ��ջ��ָ�������ƶ�
//            } else {
//                return false;  // ��ǰ�����ź�ջ����ƥ�䣬���� false
//            }
//        }
//            // �����ǰ�ַ��������� ']'�����ջ���Ƿ��ж�Ӧ��������
//        else if (s[i] == ']') {
//            if (*(sp - 1) == '[') {
//                sp--;          // ��ջ��ָ�������ƶ�
//            } else {
//                return false;  // ��ǰ�����ź�ջ����ƥ�䣬���� false
//            }
//        }
//            // �����ǰ�ַ��������� '}'�����ջ���Ƿ��ж�Ӧ��������
//        else if (s[i] == '}') {
//            if (*(sp - 1) == '{') {
//                sp--;          // ��ջ��ָ�������ƶ�
//            } else {
//                return false;  // ��ǰ�����ź�ջ����ƥ�䣬���� false
//            }
//        }
//    }
//
//    // �������������ջ�л���Ԫ�أ�˵����δƥ��������ţ����� false
//    if (sp > stack) {
//        return false; // ջ������δ��Ե������ţ����� false
//    }
//
//    return true; // ����������Ч��ԣ����� true
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
//2696. ɾ���Ӵ�����ַ�����С����
//����һ������ ��д Ӣ���ַ���ɵ��ַ��� s ��
//����ԶԴ��ַ���ִ��һЩ��������ÿһ�������У�����Դ� s ��ɾ�� ��һ�� "AB" �� "CD" ���ַ�����
//ͨ��ִ�в�����ɾ������ "AB" �� "CD" �Ӵ������ؿɻ�õ������ַ����� ��С ���ܳ��ȡ�
//ע�⣬ɾ���Ӵ����������ӳ����ַ������ܻ�����µ� "AB" �� "CD" �Ӵ���
//
//ʾ�� 1��
//���룺s = "ABFCACDB"
//�����2
//���ͣ������ִ������������
//- �� "ABFCACDB" ��ɾ���Ӵ� "AB"���õ� s = "FCACDB" ��
//- �� "FCACDB" ��ɾ���Ӵ� "CD"���õ� s = "FCAB" ��
//- �� "FCAB" ��ɾ���Ӵ� "AB"���õ� s = "FC" ��
//�����ַ����ĳ���Ϊ 2 ��
//����֤�� 2 �ǿɻ�õ���С���ȡ�
//ʾ�� 2��
//���룺s = "ACBBD"
//�����5
//���ͣ��޷�ִ�в������ַ������Ȳ��䡣

//int minLength(char *s) {
//
//    char stack[100] = {0};
//    char *sp = stack;
//    int i = 0;
//    while (s[i] != '\0') {
//        if (sp == stack) { // ����ǿ�ջ��ֱ����ջ
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
//746. ʹ����С������¥��
//����һ���������� cost ������ cost[i] �Ǵ�¥�ݵ� i ��̨����������Ҫ֧���ķ��á�һ����֧���˷��ã�����ѡ��������һ����������̨�ס�
//�����ѡ����±�Ϊ 0 ���±�Ϊ 1 ��̨�׿�ʼ��¥�ݡ�������㲢���شﵽ¥�ݶ�������ͻ��ѡ�
//
//ʾ�� 1��
//���룺cost = [10,15,20]
//�����15
//���ͣ��㽫���±�Ϊ 1 ��̨�׿�ʼ��
//- ֧�� 15 ������������̨�ף�����¥�ݶ�����
//�ܻ���Ϊ 15 ��
//ʾ�� 2��
//���룺cost = [1,100,1,1,1,100,1,1,100,1]
//�����6
//���ͣ��㽫���±�Ϊ 0 ��̨�׿�ʼ��
//- ֧�� 1 ������������̨�ף������±�Ϊ 2 ��̨�ס�
//- ֧�� 1 ������������̨�ף������±�Ϊ 4 ��̨�ס�
//- ֧�� 1 ������������̨�ף������±�Ϊ 6 ��̨�ס�
//- ֧�� 1 ��������һ��̨�ף������±�Ϊ 7 ��̨�ס�
//- ֧�� 1 ������������̨�ף������±�Ϊ 9 ��̨�ס�
//- ֧�� 1 ��������һ��̨�ף�����¥�ݶ�����
//�ܻ���Ϊ 6 ��
//int minCostClimbingStairs(int *cost, int costSize) {
//    int i = 0;
//    int dp[costSize + 1]; // dp[n]������n�����ݵ���С����,dp[n+1]����¥���������Ҫ����costSize+1���ռ�
//    dp[0] = dp[1] = 0; // ��Ϊ���Դ�0�±��1�±���ݿ�ʼ������Ҫ���ѣ�����Ϊ0
//    for (i = 2; i < costSize + 1; i++) {
//        // ��Ϊһ�ο�����һ��̨�׻�����̨�ף���˵��ﵱǰ̨�׵���С����ΪMIN(����ǰһ��̨�׵���С����dp[i-1]+ǰһ��̨�׵ķ���cost[i-1], ����ǰ����̨�׵���С����dp[i-2]+ǰ����̨�׵ķ���cost[i-2]
//        if (dp[i - 1] + cost[i - 1] >= dp[i - 2] + cost[i - 2]) {
//            dp[i] = dp[i - 2] + cost[i - 2];
//        } else {
//            dp[i] = dp[i - 1] + cost[i - 1];
//        }
//    }
//    return dp[costSize]; // �����ص���¥������С���á�
//}
//
//int main() {
//    int cost[] = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
////    int cost[] = {10, 15, 20};
//    int res = minCostClimbingStairs(cost, 10);
//    printf("%d", res);
//
//}

//#define MIN(a,b)  ((a)>(b)?(b):(a))  // ������Сֵ�꣬���� a �� b �еĽ�С�ߡ�
//
//int minCostClimbingStairs(int* cost, int costSize) {
//    // ���ֻ��һ��̨�ף��򷵻ص����̨�׵ķ��á�
//    if (costSize == 1) {
//        return cost[0];
//    }
//
//    int dp[costSize];  // ��̬�滮���飬���ڴ洢����ÿ��̨�׵���ͷ��á�
//    dp[0] = cost[0];   // �����һ��̨�׵ķ��þ��Ǹ�̨�׵ķ��á�
//    dp[1] = cost[1];   // ����ڶ���̨�׵ķ��þ��ǵڶ���̨�׵ķ��á�
//
//    // �ӵ�����̨�׿�ʼ���㵽��ÿ��̨�׵���С����
//    for (int i = 2; i < costSize; i++) {
//        // ���㵽��� i ��̨�׵���ͷ���
//        // ����ͨ��ǰһ��̨�� dp[i-1] ��ǰ����̨�� dp[i-2] ֮һ����
//        // ���Ե�ǰ̨�׵ķ���Ϊ����ǰ���С���õ�̨���ټ��ϵ�ǰ̨�׵ķ���
//        dp[i] = MIN(dp[i - 1], dp[i - 2]) + cost[i];
//    }
//
//    // ���ص������һ��̨�׻����ڶ���̨�׵���ͷ���
//    return MIN(dp[costSize - 1], dp[costSize - 2]);
//}

//
//LCR 147. ��Сջ
//
//�������һ�� ��Сջ �����ṩ push ��pop ��top �����������ڳ���ʱ���ڼ�������СԪ�ص�ջ��
//ʵ�� MinStack ��:
//MinStack() ��ʼ����ջ����
//void push(int val) ��Ԫ��val�����ջ��
//void pop() ɾ����ջ������Ԫ�ء�
//int top() ��ȡ��ջ������Ԫ�ء�
//int getMin() ��ȡ��ջ�е���СԪ�ء�

//ʾ�� 1��
//���룺
//["MinStack","push","push","push","getMin","pop","top","getMin"]
//[[],[-2],[0],[-3],[],[],[],[]]
//�����
//[null,null,null,null,-3,null,0,-2]
//���ͣ�
//MinStack minStack = new MinStack();
//minStack.push(-2);
//minStack.push(2);
//minStack.push(-3);
//minStack.getMin();   --> ���� -3.
//minStack.pop();
//minStack.top();      --> ���� 0.
//minStack.getMin();   --> ���� -2.
//��ʾ��
//
//-231 <= val <= 231 - 1
//pop��top �� getMin ���������� �ǿ�ջ �ϵ���
//push��pop��top �� getMin ��౻���� 3 * 104 ��

//struct data_struct {
//    int value; // ��ǰֵ
//    int min_value; // ��Сֵ
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
//    if (obj->sp == obj->stack) { //��ջʱ��ֱ��push�����ñȽ�;
//        obj->sp->value = x;
//        obj->sp->min_value = x;
//    } else {// ��Ҫ�ȱȽ���ջԪ����ջ��Ԫ�ص���Сֵ��ȡ���߽�С����Ϊ����ջԪ�ص���Сֵ��
//        obj->sp->value = x;
//        obj->sp->min_value = x >= (obj->sp - 1)->min_value ? (obj->sp - 1)->min_value : x;
//    }
//    obj->sp++;
//}
//
////
//void minStackPop(MinStack *obj) { // ��ջ��ջ��ָ���1
//    obj->sp--;
//}
//
////
//int minStackTop(MinStack *obj) { // ����ջ��Ԫ���еĵ�ǰֵ��ջ��ָ��sp����
//    return (obj->sp - 1)->value;
//}
////
//int minStackGetMin(MinStack* obj) { // ����ջ��Ԫ���е���Сֵ��ջ��ָ��sp����
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

//1331. �������ת��
//����һ���������� arr �����㽫�����е�ÿ��Ԫ���滻Ϊ������������š�
//��Ŵ�����һ��Ԫ���ж����ű�ŵĹ������£�
//��Ŵ� 1 ��ʼ��š�
//һ��Ԫ��Խ����ô���Խ���������Ԫ����ȣ���ô���ǵ������ͬ��
//ÿ�����ֵ���Ŷ�Ӧ�þ����ܵ�С��
//
//ʾ�� 1��
//���룺arr = [40,10,20,30]
//�����[4,1,2,3]
//���ͣ�40 ������Ԫ�ء� 10 ����С��Ԫ�ء� 20 �ǵڶ�С�����֡� 30 �ǵ���С�����֡�
//
//ʾ�� 2��
//���룺arr = [100,100,100]
//�����[1,1,1]
//���ͣ�����Ԫ������ͬ����š�
//
//ʾ�� 3��
//���룺arr = [37,12,28,9,100,56,80,5,12]
//�����[5,3,4,2,8,6,7,1,3]
//
//��ʾ��
//0 <= arr.length <= 105
//-109 <= arr[i] <= 109
// �ⷨ1. �ýṹ������ð�����򣬲��������ܴ�ʱ������ʱ�����ơ�
//typedef struct data_t {
//    int value;
//    int origin_pos;//ԭʼλ��
//    int ordered_pos;//������λ�á�
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

// �ⷨ2. ���Ϻ���ָ�룬����������򣬼򻯴���
//typedef struct data_t {
//    int value;
//    int origin_pos;//ԭʼλ��
//    int ordered_pos;//������λ�á�
//} data_t;
//
//void order_struct_arr(data_t m[], int arrSize, int (*cmp)(data_t *a, data_t *b)) {
//    for (int i = 1; i < arrSize; i++) {
//        for (int j = 0; j < arrSize - i; j++) {
//            if (cmp(&m[j], &m[j + 1])) { //��Ҫ�ص�ʵ�ʲ����ĺ�����
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
// �ⷨ3. ���ÿ�������
//typedef struct data_t{
//    int value;
//    int origin_pos;//ԭʼλ��
//    int ordered_pos;//������λ�á�
//} data_t;
//
//void order_struct_arr(data_t m[],int arrSize,int (* cmp)(data_t * a,data_t * b)){
//    for(int i = 1;i<arrSize;i++){
//        for(int j = 0;j<arrSize-i;j++){
//            if(cmp(&m[j],&m[j+1])){ //��Ҫ�ص�ʵ�ʲ����ĺ�����
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


