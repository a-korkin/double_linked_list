#include "list.h"
#include <stdio.h>

int main(void) {
    llist_t *list = init();
    int value;
    fprintf(stdout, "Enter integer value or 'q' for quit: ");
    while (scanf("%d", &value) == 1) {
        push(value, list);
        fprintf(stdout, "Enter integer value or 'q' for quit: ");
    }
    show(list);

    pop(list);
    printf("after pop:\n");
    show(list);

    insert(list, 77, 3);
    printf("after insert:\n");
    show(list);

    remove_item(list, 3);
    printf("after remove:\n");
    show(list);

    return 0;
}

