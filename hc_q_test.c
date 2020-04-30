#include "hc_q.h"

#include <assert.h>
#include <stdio.h>

#define TEST_VALS_SIZE 10

int main() {
    int vals[TEST_VALS_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    hc_q* q = hc_q_init(4);

    for (int i = 0; i < TEST_VALS_SIZE; ++i) hc_q_enqueue(q, &vals[i]);
    for (int i = 0; i < TEST_VALS_SIZE; ++i)
        printf("%i\n", *(int*)hc_q_dequeue(q));

    for (int j = 0; j < 100000; ++j) {
        for (int i = 0; i < TEST_VALS_SIZE; ++i) {
            hc_q_enqueue(q, &vals[i]);
            printf("%i\n", *(int*)hc_q_dequeue(q));
        }
    }

    assert(hc_q_dequeue(q) == NULL);

    hc_q_destroy(&q);

    assert(q == NULL);
    return 0;
}
