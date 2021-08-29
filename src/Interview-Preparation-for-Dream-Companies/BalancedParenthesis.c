#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Max 100

struct node{
	int top;
	int capacity;
	char *arr;
};

void push(struct node *stack, char data){
	if(stack->top == stack->capacity-1){
		printf("Stack is Full");
		return;
	}
	stack->arr[++stack->top] = data;
}

char pop(struct node *stack){
	if(stack->top == -1){
		printf("Stack is empty");
		return NULL;
	}
	return stack->arr[stack->top--];
}

void checkParethesis(struct node *stack, char str[]){
	int i;
	char data;
	int n = strlen(str);
	for(i=0; i<n; i++){
		if(str[i] == '(' || str[i] == '{' || str[i] == '['){
			push(stack, str[i]);
			continue;
		}
		else if(str[i] == ']' || str[i] == '}' || str[i] == ')'){
			switch(str[i]){
				case ']' :
				          data = pop(stack);
				          if(data == '(' || data == '{'){
				          	printf("NO");
				          	return;
				          }
				case '}' :
				          data = pop(stack);
				          if(data == '[' || str[i] == '('){
				          	printf("NO");
				          	return;
				          }
				case ')' :
				          data = pop(stack);
				          if(data == '{'|| data == '['){
				          	printf("NO");
				          	return;
				          }
			}
		}
	}
	printf("YES");
}
 
void deleteStack(struct node *stack){
	if(stack){
		if(stack->arr){
			free(stack->arr);
		}
		free(stack);
	}
} 

int main(){
	int t;
	struct node * stack;
	stack = (struct node *)malloc(sizeof(struct node));
	stack->top = -1;
	stack->capacity = Max;
	stack->arr = malloc(stack->capacity * sizeof(char));
	printf("Enter Number of test cases \n");
	scanf("%d",&t);
	while(t-- > 0){
		char str[] = {'[','(',')',']','[','{','}',']','\0'};
		checkParethesis(stack , str);
		printf("\n");
	}
	deleteStack(stack);
	return 0;
}