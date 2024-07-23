#include "list.h"

int main(void) {
    llist_t *list = init();
    int value;
    fprintf(stdout, "Enter integer value or 'q' for quit: ");
    while (scanf("%d", &value) == 1) {
        push(value, list);
        fprintf(stdout, "Enter integer value or 'q' for quit: ");
    }

    show(list);
    // pop(list);
    // show(list);
    insert(list, 77, 3);
    show(list);
    insert(list, 66, 0);
    show(list);

    return 0;
}

