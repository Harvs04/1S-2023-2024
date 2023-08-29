#include<stdio.h>

int main() {

    int ans; 
    do {
        printf("[1] Print 1\n[2] Print 2\n[3] Exit\nChoice: ");
        scanf("%d", &ans);

        if (ans == 1) printf("1\n");
        else if (ans == 2) printf("2\n");
        else if (ans == 3) printf("Bye!\n");
        else if (ans < 1 || ans > 3) printf("Try Again!\n");
        
    } while (ans != 3);

    return 0;
}