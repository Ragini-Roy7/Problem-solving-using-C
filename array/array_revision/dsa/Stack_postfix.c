#include <stdio.h>
#include <ctype.h>

int stack[100];
int top = -1;

// push function
void push(int value)
{
    stack[++top] = value;
    printf("%d added to top of the stack\n");
    
}

// pop function
int pop()
{
    return stack[top--];
}

int main()
{
    char exp[100];
    int a, b;
  //asking from user to enter expression for evaluation 
  //in postfix manner
    printf("enter postfix expression:\n");
    scanf("%s", exp);

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (isdigit(exp[i]))
        {
            push(exp[i] - '0');
        }
        else
        {
            a = pop();
            b = pop();

            switch (exp[i])
            {
            case '+':
                push(b + a);
                break;

            case '-':
                push(b - a);
                break;

            case '*':
                push(b * a);
                break;

            case '/':
                push(b / a);
                break;

            case '%':
                push(b % a);
                break;
            }
        }
    }

    int res = pop();

    printf("res: %d\n", res);

    return 0;
}