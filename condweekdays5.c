//Haftanın günlerini isim bazında yazdrma: switch case kullanarak: case or kullanarak

//bu kod hata mesajı alır: duplicate case value

#include <stdio.h>

int main() {

    int day;

    //Kullanıcıdan gün numarasını al
    printf("Enter day number (1-7): ");
    scanf("%d", &day);



    switch (day) {
        case (1 || 2 || 3 || 4 || 5 ):
            printf("Weekday\n");
            break;
        case (6 || 7):
            printf("Weekend\n");
            break;
        default:
            printf("Invalid day number. Please enter day number between 1-7.\n");
    }







    return 0;
}