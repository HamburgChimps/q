#include "hc_q.h"

#include <stdio.h>

int main() {
    hc_q* q = hc_q_init(4);
    int val = 2;
    hc_q_enqueue(q, &val);
    printf("%i\n", *(int*)*(q->data));
    return 0;
}
