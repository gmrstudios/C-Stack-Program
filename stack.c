#include "stack.h"

#include <stdio.h>
#include <stdlib.h>

int NoOfNodes = 0;

/* INITIALIZE STACK */
data_stack_t *init_stack(){

data_stack_t *stack = malloc(sizeof(data_stack_t));

stack -> size = 0;
stack -> HEAD = NULL;

return stack;
}

/* INSERT AN ELEMENT IN THE STACK */
void push(data_stack_t* stack, void* data) {

	// Declaring node
	node_t *temp = malloc(sizeof(node_t));

	temp -> data = data;

	//If head is NULL or first node
	if(!stack -> HEAD)
	{
		stack -> HEAD = temp;
		stack -> size = 1;
		temp -> next = NULL;
		return;
	}

	temp -> next = stack -> HEAD;
  stack -> HEAD = temp;
	stack -> size++;

	return;
	}

	/* REMOVE AN ELELEMENT FROM THE STACK */
	void *pop(data_stack_t* stack) {

		if(!stack -> HEAD)
		{
			return 0;
		}

		void *data = stack -> HEAD -> data;

		node_t *temp = stack -> HEAD;

		stack -> HEAD = temp -> next;
		free(temp);

		stack -> size--;
		return data;
	}

	/* LOOK AT THE STACK IE. PRINT*/
	void *peek(data_stack_t* stack) {

		if(!stack -> HEAD)
		{
			return 0;
		}

		return stack -> HEAD -> data;

	}

void printStack(data_stack_t* stack){

	if(stack -> size == 0)
	{
		printf("The stack is empty");
	}

	node_t *cursor = stack -> HEAD;

	for(int i = 0; i < stack -> size; i++){


	printf(" %d", *(int *)cursor -> data);

	cursor = cursor -> next;

		}

  printf("\n");

	return;
}
