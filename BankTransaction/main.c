#include <stdio.h>
#include <stdlib.h>
int pin=0,Accbal=0;
int getpin();
void getBal(int pin2);
void CashDep();
void CashWit();
int getpin()
{
    int temppin;
    if(pin==0){
        printf("Create new pin:\n");
        scanf("%d",&pin);
        printf("Pin Created.\n");
        temppin=pin;
        return temppin;
    }
    printf("Enter your pin:\n");
    scanf("%d",&temppin);
    return temppin;
};
void getBal(int pin2)
{
    int choice;
    if(pin2==pin){
        printf("Current Balance:%d\n",Accbal);
        if(Accbal==0)
        {
            printf("Deposit money?\n1. Yes\n2. No\n");
            scanf("%d",&choice);
            if(choice==1)
                CashDep();
        }
        else
        {
            printf("Withdraw money?\n1. Yes\n2. No\n");
            scanf("%d",&choice);
            if(choice==1)
                CashWit();
        }
    }
    else
        printf("Invalid Pin.\n");
};
CashDep(){
    if(pin==getpin()){
        printf("Enter amount:\n");
        int dep;
        scanf("%d",&dep);
        if (dep > 0) {
            Accbal += dep;
            printf("Current bal: %d\n", Accbal);
        } else {
            printf("Invalid amount.\n");
        }
    }
    else
        printf("Invalid pin.");
};
CashWit(){
    if(pin==getpin()){
        printf("Enter amount:\n");
        int with;
        scanf("%d",&with);
        if (with > 0 && with <= Accbal) {
            Accbal -= with;
            printf("Current bal: %d\n", Accbal);
        } else {
            printf("Invalid amount or insufficient balance.\n");
        }
    }
    else
        printf("Invalid pin.");
};
int main()
{
    printf("Choose:\n");
    int choice;
    do
    {
        printf("Choose:\n");
        printf("1. Check Balance\n2. Cash Withdraw\n3. Cash Deposit\n4. Exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                getBal(getpin());
                break;
            case 2:
                CashWit();
                break;
            case 3:
                CashDep();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }while(choice!=4);
    return 0;
}
