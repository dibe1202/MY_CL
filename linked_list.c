//
// Created by 95322 on 2024/12/17.
//

/**
*     链表(linked list)是一种线性的数据结构，其中的每一个元素都是一个节点对象，各个节点通过“指针”相连接。
 * 指针记录了下一个节点的内存地址，通过它可以从当前节点访问到下一个节点。
 *    1. 链表的设计使得各个节点可以分散存储在内存各处，它们的内存地址无须连续。
 *    2. 链表的首个节点被称为"头节点”, 最后一个节点称为"尾节点"。
 *    3. 尾节点的指针指向NULL。
 *    4. 每个链表节点包括数据域和指针域两部分，因此在存储相同数据量情况下，链表需要的内存空间更大。
*/

#include <malloc.h>

/**
 * TODO 1.链表常用操作
 */

typedef struct listNode {
    int value;
    struct listNode *next;
} listNode;

/**
 * @func 1. 创建一个链表节点
 * @param value 链表节点数据
 * @return 链表节点指针
 */
listNode *newListNode(int value) {
    listNode *newNode;
    newNode = (listNode *) malloc(sizeof(listNode));
    newNode->value = value;
    newNode->next = NULL; // 尾结点指针为NULL;
    return newNode;
}









