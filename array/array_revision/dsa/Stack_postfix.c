// #include <stdio.h>
// #include <ctype.h>

// int stack[100];
// int top = -1;

// // push function
// void push(int value)
// {
//     if(top==99){
//         printf("Stack Overflow\n");
//         return;
//     }
//     stack[++top] = value;
//     printf("%d added to top of the stack\n");
// }

// // pop function
// int pop(){
//     if(top==-1){
//         printf("Stack Underflow\n");
//         return 0;
//     }
//    return stack[top--];
// }

// int main()
// {
//     char exp[100];
//     int a, b;
//     // asking from user to enter expression for evaluation
//     // in postfix manner
//     printf("enter postfix expression:\n");
//     scanf("%s", exp);

//     for (int i = 0; exp[i] != '\0'; i++)
//     {
//         if (isdigit(exp[i]))
//         {
//             push(exp[i] - '0');
//         }
//         else
//         {
//             a = pop();
//             b = pop();

//             switch (exp[i])
//             {
//             case '+':
//                 push(b + a);
//                 break;

//             case '-':
//                 push(b - a);
//                 break;

//             case '*':
//                 push(b * a);
//                 break;

//             case '/':
//                 if (a == 0)
//                 {
//                     printf("Error: Division by zero\n");
//                     return 1;
//                 }
//                 push(b / a);
//                 break;

//             case'%':
//             push(b%a);
//             break;
//             }
//         }
//     }

//     int res = pop();

//     printf("res = %d", res);

//     return 0;
// }

#include <stdio.h>
#include <ctype.h>

int stack[100];
int top = -1;

// 23*54*+9-
void push(int value)
{
    if (top == 99) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = value;
}


int pop()
{
    if (top == -1) {
        printf("Stack Underflow\n");
        return 0;
    }
    return stack[top--];
}

int main()
{
    char exp[100];
    int a, b;

    printf("Enter postfix expression: ");
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
                    if (a == 0) {
                        printf("Error: Division by zeros\n");
                        return 1;
                    }
                    push(b / a);
                    break;

                case '%':
                    push(b % a);
                    break;
            }
        }
    }

    int res = pop();
    printf("Result = %d\n", res);

    return 0;
}