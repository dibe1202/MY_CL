#include <stdio.h>
#include <stdlib.h>

//
// Created by 95322 on 2024/12/20.
//
/**
 *  树
 *
 */

/*二叉树的层序遍历*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

/*1. 定义数据结构*/
// (1) 定义二叉树节点
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
// (2) 队列节点定义
typedef struct QueueNode {
    struct TreeNode *treeNode; // 二叉树节点指针
    struct QueueNode *next; // 下一个队列节点指针（先进 next => 后进）
} QueueNode;

// (3) 队列结构的定义，也是队列的辅助节点
typedef struct Queue {
    QueueNode *front; // 队首指针
    QueueNode *rear; // 队尾指针
    int queueSize;
} Queue;

// 2. 实现队列操作

// (1) 队列构造函数，初始化一个空队列
Queue *createQueue() {
    Queue *queue = (Queue *) malloc(sizeof(Queue)); // 分配辅助节点内存
    queue->front = NULL;  // 队列为空，头指针指向NULL
    queue->rear = NULL;   // 尾指针也指向NULL
    queue->queueSize = 0; // 队列长度初始化为0
    return queue;         // 返回队列指针
}

// (2) 入队，将一个二叉树节点加入队列
void enqueue(Queue *queue, struct TreeNode *node) {
    QueueNode *newQueueNode = (QueueNode *) malloc(sizeof(QueueNode));     // 创建一个新入队节点并分配空间
    // 初始化队列节点
    newQueueNode->treeNode = node; // 将新入队节点的二叉树指针指向传入的二叉树节点
    newQueueNode->next = NULL; // 新入队节点即是尾结点， 尾结点的next一定为NULL

    // 如果队列为空，将新节点设为队列的头和尾
    if (queue->rear == NULL) { // 此时queue->front也为NULL
        queue->front = newQueueNode;
        queue->rear = newQueueNode;
        queue->queueSize++; // 队列长度+1
    } else {
        // 如果队列不为空，将新节点加入队列的尾部
        queue->rear->next = newQueueNode; // 原来尾结点next为NULL，将next指向新入队节点
        queue->rear = newQueueNode; // 将队列尾指针指向新入队节点，此时新入队节点变成尾结点
        queue->queueSize++; // 队列长度+1
    }
}

// (3) 出队，从队列中取出一个二叉树节点，并返回该节点
struct TreeNode *dequeue(Queue *queue) {
    // 如果队列为空，返回NULL
    if (queue->front == NULL) { // 此时queue->rear也为NULL
        return NULL;
    }
    QueueNode *temp = queue->front; // 创建临时指针指向头节点，用于后面释放该节点空间
    struct TreeNode *node = temp->treeNode; // 获取头结点的二叉树节点
    queue->front = queue->front->next; // 更新队列头指针，指向下一个节点
    queue->queueSize--; // 队列长度-1

    // 当只剩一个尾节点时(尾节点的next始终为NULL)，此时再进行出列操作，queue->front = queue->front->next，则queue->front 为NULL。
    // 因为在队列加入头节点时，front和rear都指向头节点，因此当queue->front再次为NULL时，代表队列出队了所有元素，此时应将queue->rear也置为NULL。
    // 即如果队列为空，头尾指针都置为NULL
    if (queue->front == NULL) {
        queue->rear = NULL;
    }
    free(temp); // 释放原队列头节点的内存

    return node; // 返回出队的二叉树节点
}

// (4) 判断队列是否为空
int isQueueEmpty(Queue *queue) {
    return queue->front == NULL; // 如果队列头指针为空，表示队列为空
}

// 3. 层序遍历
// leetcode中，对于返回值是二维数组，一般需要返回二维数组的行和列的数量，每一行列的数量不一定相同。
// 这里returnSize为行的个数（即为该题二叉树的层数），*returnColumnSizes（一维数组）存储着每一行有多少个元素，即多少列(即为该题二叉树每层有多少个元素)。
int **levelOrder(struct TreeNode *root, int *returnSize, int **returnColumnSizes) {
    int **arrRes = (int **) malloc(
            sizeof(int *) * 2001); // 创建一个二维数组堆空间，根据提示最多2000个二叉树节点，极端情况每层返回一个元素，最多2000层, 即返回的二维数组中，每行只有一列
    *returnColumnSizes = malloc(
            sizeof(returnSize) * 2001); // 创建一个一维数组堆空间，根据提示最多2000个二叉树节点，极端情况下每层返回一个元素，最多2000层, 即返回的一维数组中，有2000个1
    *returnSize = 0; // 行数（对应二叉树的第i层）
    if (root == NULL) {
        return NULL;
    }
    Queue *queue = createQueue(); // 构造一个队列并初始化
    enqueue(queue, root); // 将root节点入队,队列长度此时为1
    while (!isQueueEmpty(queue)) { // while循环每一层结束判断一次
        int queueLen = queue->queueSize; // 队列长度，即为二叉树每一层的元素个数
        int *levelArr = malloc(sizeof(int) * queueLen);// 创建一个数组，用于存储每一层的元素，大小为每一层的元素所占空间
        (*returnColumnSizes)[*returnSize] = queueLen; // 记录每层长度，存入到数组中，*returnSize此时代表第几层

        // for循环遍历每一层元素，每次遍历结束:
        //  1. 会将该层所有节点出队，出队时，将值存入数组，队列长度-1。
        //  2. 如果该层节点有子节点，会全部入队，入队时，队列长度+1。
        //  3. 此时队列长度即为下一层元素个数。
        for (int i = 0; i < queueLen; i++) {
            struct TreeNode *currentNode = dequeue(queue); // 出队并返回二叉树节点
            levelArr[i] = currentNode->val; // 值存入每一层的数组中
            if (currentNode->left != NULL) { // 有左孩子则入队
                enqueue(queue, currentNode->left);
            }
            if (currentNode->right != NULL) { // 有右孩子则入队
                enqueue(queue, currentNode->right);
            }
        }
        arrRes[*returnSize] = levelArr; //将该层一维数组指针，赋值给二维数组行指针。例：arrRes[0]即为第一层元素数组首地址。
        (*returnSize)++; // 层数+1
    }
    return arrRes;
}

struct TreeNode *newTreeNode(int val) {
    struct TreeNode *node;
    node = (struct TreeNode *) malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}

int main() {
    // 创建一个示例二叉树
    struct TreeNode *root = newTreeNode(3); // 创建根节点，值为1
    root->left = newTreeNode(9);     // 根的左子节点值为2
    root->right = newTreeNode(20);    // 根的右子节点值为3
    root->right->left = newTreeNode(15); // 右子节点的左子节点值为6
    root->right->right = newTreeNode(7); // 右子节点的右子节点值为7
//     层序遍历
    printf("层序遍历结果：");
    int returnSize = 0;
    int *returnColumnSizes;
    int **arr = levelOrder(root, &returnSize, &returnColumnSizes);
    for (int i = 0; i < returnSize; i++) {
        printf("level%d: ",i+1);
        for (int j = 0; j < returnColumnSizes[i]; j++) {
            printf("%d ", arr[i][j]);
        }
        puts("\n");
    }
}


