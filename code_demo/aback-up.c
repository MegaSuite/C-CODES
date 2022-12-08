#include<stdio.h>
#include<stdlib.h>
#define MaxSize 199
 
struct SNode {
	int Data[MaxSize];
	int Top;
};
typedef struct SNode* Stack;
 
Stack CreateStack() {
	Stack p;
	p = (Stack)malloc(sizeof(struct SNode));
	p->Top = -1;
	return p;
}
 
void Push(Stack S, int x) {
	if (S->Top == MaxSize) {
		printf("Stack Full\n");
	}
	else {
		S->Data[++S->Top] = x;
	}
}
 
int Pop(Stack S) {
	if (S->Top == -1) {
		printf("Stack is Empty!\n");
	}
	else {
		int t;
		t = S->Data[S->Top];
		S->Top--;
		return t;
	}
}
 
int main() {
	Stack S;
	S = CreateStack();
	char ch;
	ch = getchar();
	int a, b, an, t;
 
	while (ch != EOF) {
		if (ch >= '0' && ch <= '9') {
			Push(S, ch - '0');
			ch = getchar();
			while (ch >= '0' && ch <= '9') {
				t = Pop(S);
				Push(S, t * 10 + ch - '0');
				ch = getchar();
			}
		}
		else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
			a = Pop(S);
			b = Pop(S);
			switch (ch) {
			case '+':an = b + a; break;
			case '-':an = b - a; break;
			case '*':an = b * a; break;
			case '/':an = b / a; break;
			}
			Push(S, an);
		}
		else if (ch == '\n') {
			break;
		}
		ch = getchar();
	}
	printf("%d", Pop(S));
} 