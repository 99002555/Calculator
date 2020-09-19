#include <operation.h>

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int calculator_operation = 0;

/* Operands on which calculation is performed */
int calculator_operand1 = 0;
int calculator_operand2 = 0;

/* Valid operations */
enum operations{ ADD=1, SUBTRACT, MULTIPLY, DIVIDE ,HCF ,LCM ,LEFTSHIFT ,RIGHTSHIFT ,SQUARES ,CUBES , POWER, MAX ,FACTORIAL ,PRIME ,AVERAGE ,SWAP , EXIT };

/* Display the menu of operations supported */
void calculator_menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);


/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Squares\n6. Cubes\n7. Power\n8. Max\n9. Factorial\n10. Prime\n11. Average\n12. Swap\n13. Exit");
    printf("\n\tEnter your choice\n");
   
     __fpurge(stdin);
    scanf("%d", &calculator_operation);

    if(EXIT == calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(calculator_operation))
    {
        printf("\n\tEnter your Numbers with space between them\n");
        __fpurge(stdin);
        scanf("%d %d", &calculator_operand1, &calculator_operand2);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        __fpurge(stdin);
        getchar();
        return;
        
    }
    switch(calculator_operation)
    {
        case ADD:
            printf("\n\t%d + %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            add(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case SUBTRACT:
            printf("\n\t%d - %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            subtract(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case MULTIPLY:
            printf("\n\t%d * %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            multiply(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case DIVIDE:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            divide(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
            
        case LCM:
            printf("\n\tLCM of %d and %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            lcm(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
            
         case HCF:
            printf("\n\tHCF of %d and %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            hcf(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
            
         case LEFTSHIFT:
            printf("\n\tleft shift %d by %d is %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            leftshift(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
            
         case RIGHTSHIFT:
            printf("\n\tright shift %d by %d is %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            rightshift(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
            
        case SQUARES:
            printf("\n\tsquare of %d = %d\nEnter to continue", 
            calculator_operand1, 
            squares(calculator_operand1));
                   
            __fpurge(stdin);
            getchar();
            break;
         case CUBES:
             printf("\n\t cube of %d = %d\nEnter to continue", 
            calculator_operand1, 
            cubes(calculator_operand1));
                   
            __fpurge(stdin);
            getchar();
            break;
          case POWER:
               printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1,
            calculator_operand2,        
            power(calculator_operand1,calculator_operand2));
                   
            __fpurge(stdin);
            getchar();
            break;
          case MAX:
                printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1,
            calculator_operand2,           
            max(calculator_operand1,calculator_operand2));
                   
            __fpurge(stdin);
            getchar();
            break;
          case FACTORIAL:
                  printf("\n\t%d = %d\nEnter to continue", 
            calculator_operand1, 
            factorial(calculator_operand1));
                   
            __fpurge(stdin);
            getchar();
            break;  
          case PRIME:
               printf("\n\t%d = %d\nEnter to continue", 
           calculator_operand1, 
            prime(calculator_operand1));
                   
            __fpurge(stdin);
            getchar();
            break;
          case AVERAGE:
                printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1,
            calculator_operand2,
            average(calculator_operand1,calculator_operand2));
                   
            __fpurge(stdin);
            getchar();
            break;
         case SWAP:
                  printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1,
            calculator_operand2,
            swap(calculator_operand1,calculator_operand2));
                   
            __fpurge(stdin);
            getchar();
            break;
                   
                   
            
        case 17:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((ADD <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}
