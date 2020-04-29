#ifndef HC_Q_H
#define HC_Q_H

typedef struct hc_q {
    void** data;
} hc_q;

hc_q* init_hc_q();

void hc_q_enqueue(hc_q* q, void* data);
void hc_q_dequeue(hc_q* q);
void destroy_hc_q(hc_q** q);

#endif