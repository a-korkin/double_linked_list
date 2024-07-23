#include "list.h"

llist_t *init(void) {
    llist_t *list = (llist_t *) malloc(sizeof(llist_t));
    if (!list) {
        fprintf(stderr, "ERROR allocating memory for list\n");
        exit(1);
    }
    list->nodes = NULL;
    list->items = 0;
    return list;
}

void push(int value, llist_t *list) {
    node_t *node = (node_t *) malloc(sizeof(node_t));
    if (!node) {
        fprintf(stderr, "ERROR allocating memory for node\n");
        exit(1);
    }
    node->value = value;
    node->prev = list->tail;
    node->next = NULL;
    if (!list->nodes) {
        list->nodes = node;
    }
    if (list->tail) {
        list->tail->next = node;
    } 
    list->tail = node;
    list->items++;
}

void show(llist_t *list) {
    fprintf(stdout, "items: %d\n", list->items);
    node_t *node = list->nodes;
    int i;
    for (i = 0; i < list->items; i++) {
        fprintf(stdout, "%2d: value = %d\n", i + 1, node->value);
        node = node->next;
    }
}

void pop(llist_t *list) {
    node_t *tail = list->tail;
    if (tail) {
        fprintf(stdout, "popped: %d\n", tail->value);
        tail->prev->next = NULL;
        free(tail);
        list->items--;
    }
}

