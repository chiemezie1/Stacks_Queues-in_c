// stack.h
#ifndef STACK_H
#define STACK_H

#define LIMIT 100

extern int stack[LIMIT];
extern int top;

void push(int element);
void pop();

#endif // STACK_H
