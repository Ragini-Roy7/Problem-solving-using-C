#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct Students
    {
        int roll;
        char name[100];
        float cgpa;
    };

    // str declaration

    // accessing value through pointers
    struct Students s1 = {
        10,
        "Ragini",
        98.45};
    struct Students *ptr = &s1; // storing address of s1
    printf("Roll: %d\n Name: %s\n Cgpa: %f\n", ptr->roll, ptr->name, ptr->cgpa);

    struct Employees
    {
        int empId;
        char empName[100];
        float salary;
    };
    struct Employees emp1;
    struct Employees *emp_ptr;
    emp_ptr = &emp1; // emp_ptr should point towards emp1 so used address of operator

    //why to use & op even though emp_ptr is ptr itself storing address of emp_id because emp_ptr will point towards entire str we need address field of data
    //Agar emp_ptr ghar ka address hai,
// toh emp_ptr->empId us ghar ke andar room ka number hai,
// aur &emp_ptr->empId us room ka exact location
    printf("Enter your empId:\n");
    scanf("%d", &emp_ptr->empId);
    // scanf("%d", emp_ptr->empId);
    printf("Enter your name:\n");
    scanf("%s", emp_ptr->empName);
    printf("Enter your salary:\n");
    scanf("%f", &emp_ptr->salary);
}
