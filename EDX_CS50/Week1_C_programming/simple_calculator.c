#include <stdio.h>
#include <cs50.h>

int scan_first_number(void);
char scan_symbol(void);
int scan_second_number(void);
void print_user_input(int firstNum, char symbol, int secondNum);
int perform_calculation(int firstNum, char symbol, int secondNum);

int main(void)
{
    /* scan first number */
    int firstNum = scan_first_number();

    /* scan symbol */
    char symbol = scan_symbol();

    /* scan second number */
    int secondNum = scan_second_number();

    /* perform calculation and print result */
    int result = perform_calculation(firstNum, symbol, secondNum);
    printf("Result: %d\n", result);

    return 0;
}

/* gets first number from the user */
int scan_first_number(void)
{
    int firstNum = get_int("Type in the first number: ");
    return firstNum;
}

/* gets the symbol from the user */
char scan_symbol(void)
{
    char symbol = get_char("Type in an arithmetic symbol (+, -, *, /): ");
    return symbol;
}

/* gets second number from user */
int scan_second_number(void)
{
    int secondNum = get_int("Type second number: ");
    return secondNum;
}

/* performs the appropriate calculation based on the symbol */
int perform_calculation(int firstNum, char symbol, int secondNum)
{
    int result;

    switch (symbol)
    {
        case '+':
            result = firstNum + secondNum;
            break;
        case '-':
            result = firstNum - secondNum;
            break;
        case '*':
            result = firstNum * secondNum;
            break;
        case '/':
            result = firstNum / secondNum;
            break;
        default:
            printf("Invalid symbol.\n");
            result = 0;
    }

    return result;
}
