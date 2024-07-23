#ifndef __LIST_H
#define __LIST_H

#include <stdlib.h>
#include <stdio.h>

typedef struct node {
    int value;
    struct node *prev;
    struct node *next;
} node_t;

typedef struct {
    node_t *nodes;
    node_t *tail;
    int items;
} llist_t;

llist_t *init(void); 
node_t *create_node(int value);
void push(int value, llist_t *list);
void insert(llist_t *list, int value, int index);
void remove_item(llist_t *list, int index);
void show(llist_t *list); 
void pop(llist_t *list); 

#endif // __LIST_H

