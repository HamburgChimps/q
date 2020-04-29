#include "hc_q.h"

hc_q* hc_q_init(size_t init_size) {
    hc_q* q = malloc(sizeof(hc_q));

    q->data = malloc(sizeof(void*) * init_size);
    q->size = 0;
    q->potential_size = init_size;

    return q;
}

void hc_q_enqueue(hc_q* q, void* data) {
    *(q->data + q->size) = data;
    ++q->size;
}
