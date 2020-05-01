# The HamburgChimps Queue

A basic queue implementation in c.

## API

### `hc_q_init(size_t init_capacity) -> hc_q*`

Initializes a queue with initial capcity of `init_capacity` and returns a pointer to said queue;

### `hc_q_enqueue(hc_q* q, void* data) -> void`

Enqueues `data` in `q`.

### `hc_q_dequeue(hc_q* q) -> void*`

Dequeues an element from `q` and returns said element.

### `hc_q_destroy(hc_q** q) -> void`

Frees the memory allocated by `hc_q`.
