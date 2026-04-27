// algoritmo de zeller
#include <stdio.h>

int isValid(int d, int m, int y){
    int isBissexto = 0;

    if(y % 4 == 0 && (y % 100 != 0 || y / 400 == 0)){
        isBissexto = 1;
    }

    if(isBissexto == 1 && m == 2 && d > 29){
        printf("Invalid date!\n");
        return 1;
    } else if(isBissexto == 0 && m == 2 && d > 28){
        printf("Invalid date!\n");
        return 1;
    } else if((m == 4 || m == 6 || m == 9 || m == 11) && d > 30){
        printf("Invalid date!\n");
        return 1;
    } else {
        return 0;
    }
}

int main(void){
    int day, month, year;

    printf("Enter the day, month and year respectively: ");
    scanf("%d %d %d", &day, &month, &year);

    if(day < 1 || month < 1 || year < 1){
        printf("Day, month or year cant be above 1\n");
        return 1;
    }

    if(month > 12){
        printf("Invalid Date! (1 -> 12)\n");
        return 1;
    }

    int isvalid = isValid(day, month, year);

    if(month == 1 || month == 2){
        month += 12;
        year -= 1;
    }

    // 1 = 31, 2 = 28/29, 3 = 31, 4 = 30, 5 = 31, 6 = 30, 7 e 8 = 31, 9 = 30, 10 = 31, 11 = 30, 12 = 31

    int q = day;
    int K = year % 100;
    int J = year / 100;
    int h;

    if(isvalid == 0){
        // h = (q + floor(13*(m + 1) / 5) + K + floor(K/4) + floor(J + 4) - 2 * J) mod 7
        h = (q + (13 * (month + 1) / 5) + K + (K / 4) + (J / 4) - 2 * J) % 7;
    }

    if(h < 0) h += 7;
    

    // melhorado (switch case)
    switch(h){
        case 0:
            printf("Sábado\n");
            break;
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda\n");
            break;
        case 3:
            printf("Terça\n");
            break;
        case 4:
            printf("Quarta\n");
            break;
        case 5:
            printf("Quinta\n");
            break;
        case 6:
            printf("Sexta\n");
            break;
        default:
            printf("Erro desconhecido\n");
            return 1;
    }

    return 0;
}