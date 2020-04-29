#ifndef HC_QUEUE_H
#define HC_QUEUE

typedef struct hc_queue {
    void** data;
} hc_queue;

hc_queue* init_hc_queue()
void hc_queue_enqueue(hc_queue* q, void* data);
void hc_queue_dequeue(hc_queue* t);

#endif