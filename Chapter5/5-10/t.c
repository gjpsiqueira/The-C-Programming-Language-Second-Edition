nclude <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAXOP 100
#define NUMBER '0'
#define WORD 'A'

void clear_stack(void);
int getop(char[],char*[]);
void push(double);
double pop(void);

/* reverse Polish calculator */
int main(int argc, char *argv[])    /* EX5_10 */
{
    int type;
    double op2;
    char s[MAXOP];

    while ((--argc > 0) && (type = getop(s,++argv)) != EOF) {    /* EX5_10 */

        switch (type) {
        case WORD:
            if (!strcmp(s, "clear")) {
                clear_stack();
            } else {
                op2 = pop();
                if (!strcmp(s, "peek")) {
                    printf("peek\t%.8g\n", op2);
                    push(op2);
                } else if (!strcmp(s, "dup")) {
                    push(op2);
                    push(op2);
                } else if (!strcmp(s, "swap")) {
                    double op3 = pop();
                    push(op2);
                    push(op3);
                } else {
                    printf("error: unknown command %s\n", s);
                }
            }
            break;
        case NUMBER:
            push(atof(s));
            break;
        case '+':
            push(pop() + pop());
            break;
        case '*':
            push(pop() * pop());
            break;
        case '-':
            op2 = pop();
            push(pop() - op2);
            break;
        case '/':
            op2 = pop();
            if (op2 != 0.0)
                push(pop() / op2);
            else
                printf("error: zero divisor\n");
            break;
        case '\n':
            printf("\t%.8g\n", pop());
            break;
        default:
            printf("error: unknown command %s\n", s);
            break;
        }
    }
    return printf("%.8g\n",pop());    /* EX5_10 */
}

#define MAXVAL 100
int sp = 0;
double val[MAXVAL];

/* push: push f onto value stack */
void push(double f)
{
    if (sp < MAXVAL)
        val[sp++] = f;
    else
        printf("error: stack full, cant push %g\n", f);
}

/* pop: pop and return top value from stack */
double pop(void)
{
    if (sp > 0)
        return val[--sp];
    else {
        printf("error: stack empty\n");
        return 0.0;
    }
}

void clear_stack(void)
{
    sp = 0;
}

#include <ctype.h>

int getch(void);
void ungetch(int);

/* getop: get next operator or numeric operand */
int getop(char s[], char* argv[])    /* EX5_10 */
{

    int c;
    strcpy(s,*argv);    /* EX5_10 */
    c =  s[0];          /* EX5_10 */

    if (islower(c))                 /* EX5_10 */
        return WORD;                /* EX5_10 */
    if (!isdigit(c) && c != '.')    /* EX5_10 */
        return c;                   /* EX5_10 */
    if (isdigit(c) || c == '.')     /* EX5_10 */
        return NUMBER;              /* EX5_10 */
}


int getop(char s[])
{
    int i, c;

    while ((s[0] = c = getch()) == ' ' || c == '\t');
    s[1] = '\0';
    if (islower(c)) {
        i = 0;
        while (islower(s[++i] = c = getch()));
        s[i] = '\0';
        if (c != EOF)
            ungetch(c);
        return WORD;
    }
    if (!isdigit(c) && c != '.')
        return c;
    i = 0;
    if (isdigit(c))
        while (isdigit(s[++i] = c = getch()));
    if (c == '.')
        while (isdigit(s[++i] = c = getch()));
    s[i] = '\0';
    if (c != EOF)
        ungetch(c);
    return NUMBER;
}

#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}

