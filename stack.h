#ifndef __STACK_H__
#define __STACK_H__

typedef struct _node_t {
	void *data;
	struct _node_t *next;
} node_t;

typedef struct _data_stack_t {
    node_t *HEAD;
    int size;
} data_stack_t;

void *pop(data_stack_t*);
void *peek(data_stack_t*);
void push(data_stack_t*, void*);
data_stack_t *init_stack();
void printStack(data_stack_t*);

#endif
