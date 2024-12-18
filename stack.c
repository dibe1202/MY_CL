//
// Created by 95322 on 2024/12/18.
//
/**
 *
 *  栈（stack）是一种遵循先入后出逻辑的线性数据结构。
 *
 *
 *
 */


//TODO 1.基于链表实现栈

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

/* 构造链表节点类型*/
typedef struct ListNode {
    int value;
    struct ListNode *next;
} ListNode;

/* 构造基于链表实现的栈*/
typedef struct LinkedListStack {
    ListNode *top;
    int stackSize;
} LinkedListStack;

/* 构造函数，构建一个头节点指向栈顶节点，通常我们就用栈顶节点代指整个栈*/
LinkedListStack *newLinkedListStack() {
    LinkedListStack *s = malloc(sizeof(LinkedListStack));
    s->top = NULL;
    s->stackSize = 0;
    return s;
}

/* 析构函数，删除每个节点，释放栈空间*/
void delLinkedListStack(LinkedListStack *s) {
    while (s->top) {
        ListNode *temp = s->top;
        s->top = s->top->next;
        free(temp);
    }
    // 此时s->top == NULL; 只剩头结点
    free(s);
}

/* 获取栈的长度*/
int getSize(LinkedListStack *s) {
    return s->stackSize;
}
/* 判断栈是否为空*/
bool isEmpty(LinkedListStack *s) {
    return s->stackSize == 0;
}

/* 入栈操作*/
void push(LinkedListStack *s, int num) {
    ListNode *newNode = malloc(sizeof(ListNode));
    newNode->next = s->top;
    newNode->value = num;
    s->top = newNode;
    s->stackSize++;
}

/* 访问栈顶元素*/
int peek(LinkedListStack *s) {
    if (s->stackSize == 0) {
        printf("空栈\n");
        return INT_MAX;
    }
    return s->top->value;
}

/* 出栈操作*/
int pop(LinkedListStack *s) {
    int value = peek(s);
    ListNode *temp = s->top;
    s->top = s->top->next;
    free(temp);
    s->stackSize--;
    return value;
}
//int main() {
//    int arr[] = {2, 3, 4, 5, 6};
//    int arrLen = sizeof(arr) / sizeof(arr[0]);
//    LinkedListStack *s = newLinkedListStack();
//    for (int i = 0; i < arrLen; i++) {
//        push(s, arr[i]);
//    }
//    while (s->top) {
//        printf("%d", s->top->value);
//        s->top = s->top->next;
//    }
//}

// TODO 2. 基于数组实现栈

#define MAX_SIZE 1000
/* 基于数组实现的栈 */
typedef struct ArrayStack {
    int *data;
    int size;
} ArrayStack;

/* 构造函数 */
ArrayStack *newArrayStack() {
    ArrayStack *stack = malloc(sizeof(ArrayStack)); // 构造一个头节点
    stack->data = (int *) malloc(sizeof(int) * MAX_SIZE); // 申请一片连续空间作为数组。
    stack->size = 0;
    return stack;
};

/* 析构函数 */
void delArrayStack(ArrayStack *stack) {
    free(stack->data);
    free(stack);
}

/* 获取栈的长度 */
int getStackSize(ArrayStack *stack) {
    return stack->size;
}

/* 判断栈是否为空 */
bool stackIsEmpty(ArrayStack *stack) {
    return stack->size == 0;
}

/* 入栈 */
void stackPush(ArrayStack *stack, int num) {
    if (stack->size == MAX_SIZE) {
        printf("栈已满\n");
        return;
    }
    stack->data[stack->size] = num;
    stack->size++;
}

/* 访问栈顶元素 */
int arrayStackPeek(ArrayStack *stack) {
    if (stack->size == 0) {
        printf("栈空");
        return INT_MAX;
    }
    return stack->data[stack->size - 1];
}

/* 出栈 */

int arrayStackPop(ArrayStack *stack) {
    int value = arrayStackPeek(stack);
    stack->size--;
    return value;
}
