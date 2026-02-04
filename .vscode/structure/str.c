#include <stdio.h>
struct Employee
{
    int empID;
    char empName[50];
    float salary;
};

int main()
{
    struct Employee emp[50];
    for (int i = 0; i < 50; i++)
    {
        printf("\nEnter details of employee %d\n", i + 1);
        // it will keep on increasing one by one
        printf("Enter empId: ");
        scanf("%d", &emp[i].empID);

        printf("Enter empName: ");
        scanf("%s", emp[i].empName);

        printf("Enter empSalary: ");
        scanf("%f",&emp[i].salary);
        
    }
    //printing all the employee salary
    for(int i=0;i<50;i++) {
        printf("Employee id %d having name %s has salary =%.2f\n",i+1, emp[i].salary);
    }
}