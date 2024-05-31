#include <stdio.h>
#include <stdlib.h>

void countpizzas(int Budget)
{
    int nonvegpizza = 0, vegpizza = 0, choice, cost;
    int initial_budget = Budget;
    while (Budget != 0)
    {

        {
            printf("Enter 5 for veg or 10 for non veg\n");
            printf("Enter your choice :");
            scanf("%d", &cost);
            if (cost == 5)
            {
                vegpizza++;
                Budget = Budget - 5;
            }
            if (cost == 10)
            {
                nonvegpizza++;
                Budget = Budget - 10;
            }
            printf("The budget left is :%d\n", Budget);
        }
    }
    printf("Summary\n");
    printf("Pizza Party Budget:%d\nNonveg Pizza:%d\nVeg pizza:%d\n", initial_budget, nonvegpizza, vegpizza);
}
int main()
{
    int Budget;
    while (1)
    {
        printf("Enter the budget :");
        scanf("%d", &Budget);
        if (Budget % 5 == 0)
        {
            countpizzas(Budget);
            exit(0);
        }
    }
}