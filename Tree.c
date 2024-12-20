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

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
// 队列节点结构体定义，队列节点中包含二叉树节点
typedef struct QueueNode {
    struct TreeNode *treeNode;
    struct QueueNode *next;
} QueueNode;

typedef struct Queue {
    QueueNode *front;
    QueueNode *rear;
    int queueSize;
} Queue;

// 创建队列函数，初始化一个空队列
Queue *createQueue() {
    Queue *queue = (Queue *) malloc(sizeof(Queue)); // 分配内存
    queue->front = NULL;
    queue->rear = NULL;            // 队列为空，头尾指针都指向NULL
    queue->queueSize=0;
    return queue;                                 // 返回队列指针
}

// 入队操作，将一个二叉树节点加入队列
void enqueue(Queue *queue, struct TreeNode *node) {
    // 创建一个新的队列节点
    QueueNode *newQueueNode = (QueueNode *) malloc(sizeof(QueueNode));
    newQueueNode->treeNode = node; // 将二叉树节点指针存入队列节点
    newQueueNode->next = NULL; // 新节点指向NULL

    // 如果队列为空，将新节点设为队列的头和尾
    if (queue->rear == NULL) {
        queue->front = newQueueNode;
        queue->rear = newQueueNode;
        queue->queueSize++;
    } else {
        // 否则，将新节点加入队列的尾部
        queue->rear->next = newQueueNode;
        queue->rear = newQueueNode;
        queue->queueSize++;
    }
}

// 出队操作，从队列中取出一个二叉树节点
struct TreeNode *dequeue(Queue *queue) {
    // 如果队列为空，返回NULL
    if (queue->front == NULL) {
        return NULL;
    }
    // 保存队列的头节点
    QueueNode *temp = queue->front;
    struct TreeNode *node = temp->treeNode; // 获取队列头部的二叉树节点
    // 更新队列头指针，指向下一个节点
    queue->front = queue->front->next;
    queue->queueSize--;
    // 如果队列为空，尾指针也应设置为NULL
    if (queue->front == NULL) {
        queue->rear = NULL;
    }
    // 释放原队列头节点的内存
    free(temp);
    return node; // 返回出队的二叉树节点
}

// 判断队列是否为空
int isQueueEmpty(Queue *queue) {
    return queue->front == NULL; // 如果队列头指针为空，表示队列为空
}
int **levelOrder(struct TreeNode *root, int *returnSize, int **returnColumnSizes) {
    int **arrRes = (int **) malloc(sizeof(int *) * 2001);
    *returnColumnSizes = malloc(sizeof(returnSize) * 2001);
    *returnSize = 0;
    if (root == NULL) {
        return NULL;
    }
    Queue *queue = createQueue();
    enqueue(queue, root);
    while (!isQueueEmpty(queue)) {
        int *levelArr = malloc(sizeof(int) * 2000);//定义一个数组，用于存储一层的元素
        int len = queue->queueSize;
        (*returnColumnSizes)[*returnSize] = len;//记录每层长度
        for (int i = 0; i < len; i++) {
            struct TreeNode *currentNode = dequeue(queue);
            levelArr[i] = currentNode->val;
            if (currentNode->left != NULL) {
                enqueue(queue, currentNode->left);
            }
            if (currentNode->right != NULL) {
                enqueue(queue, currentNode->right);
            }
        }
        for (int i = 0; i < len; i++) {
            arrRes[*returnSize][i]=levelArr[i];
        }
//        arrRes[*returnSize] = levelArr;//将这层元素的值直接赋值给结果数组
        (*returnSize)++;
    }
    return arrRes;
}
//void levelOrder1(struct TreeNode *root) {
//
//    if (root == NULL) {
//        return;
//    }
//    Queue *queue = createQueue();
//    enqueue(queue, root);
//    while (!isQueueEmpty(queue)) {
//        int len = queue->queueSize;
//        for (int i = 0; i < len; i++) {
//            struct TreeNode *currentNode = dequeue(queue);
//            printf("%d ",currentNode->val);
//            if (currentNode->left != NULL) {
//                enqueue(queue, currentNode->left);
//            }
//            if (currentNode->right != NULL) {
//                enqueue(queue, currentNode->right);
//            }
//        }
//    }
//}

//int **levelOrder(struct TreeNode *root, int *returnSize, int **returnColumnSizes) {
//    int **arr = (int **) malloc(sizeof(int *) * 2001);//存储结果
//    *returnColumnSizes = malloc(sizeof(int) * 2001); //存储二维数组每行多少元素
//
//    *returnSize = 0; //初始化行数
//    if (root == NULL)
//        return NULL;
//
//    struct TreeNode *queue[2001];// 模拟队列
//    //初始化队列参数
//    struct TreeNode *node;
//    int front, rear;
//    front = 0;
//    rear = 0;
//
//    queue[rear++] = root;// 根节点入队
//    while (front < rear) { //队列不为空
//        int len = rear - front;//每层长度
//        int *level = malloc(sizeof(int) * len);//定义一个数组，用于存储一层的元素
//        (*returnColumnSizes)[(*returnSize)] = len;//记录每层长度
//        for (int i = 0; i < len; i++) { //将这层的所有元素出队，并将这层元素的左右节点依次入队
//            node = queue[front++];
//            level[i] = node->val;
//            if (node->left != NULL)
//                queue[rear++] = node->left;
//            if (node->right != NULL)
//                queue[rear++] = node->right;
//        }
//        arr[(*returnSize)++] = level;//将这层元素的值直接赋值给结果数组
//    }
//    return arr;
//}


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
    printf("Level Order Traversal: ");
    levelOrder1(root);
//    int **arr = levelOrder(root, &returnSize, returnColumnSizes);
//    for (int i = 0; i < returnSize; i++) {
//        for (int j = 0; j < sizeof(*returnColumnSizes); j++){
//            printf("%d",arr[i][j]);
//        }
//        returnColumnSizes++;
//    }
    printf("\n");

}
//// 层序遍历二叉树
//void levelOrderTraversal(TreeNode *root) {
//    // 如果根节点为空，直接返回
//    if (root == NULL) return;
//
//    // 创建一个队列
//    Queue *queue = createQueue();
//
//    // 将根节点入队
//    enqueue(queue, root);
//
//    // 当队列不为空时，继续遍历
//    while (!isQueueEmpty(queue)) {
//        // 从队列中取出一个节点
//        TreeNode *current = dequeue(queue);
//
//        // 访问当前节点，打印其值
//        printf("%d ", current->val);
//
//        // 如果当前节点有左子节点，将左子节点入队
//        if (current->left != NULL) {
//            enqueue(queue, current->left);
//        }
//
//        // 如果当前节点有右子节点，将右子节点入队
//        if (current->right != NULL) {
//            enqueue(queue, current->right);
//        }
//    }
//}

