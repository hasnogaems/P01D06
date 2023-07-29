#include <stdio.h>
#include "goal.c"
//Ракетки встают в центр после гола
//Ракетка должна упираться в стену

void rendering(int x1, int x2, int x, int y);

int main(){
    int x1= 12, x2 = 12, point1 = 18, point2 = 18;
    char first_player, second_player, ch;
    while(1){
        scanf("%c%c%c", &first_player, &second_player, &ch);
        if(first_player == 'A'){
            x1--;
        }else if(first_player == 'Z'){
            x1++;
        }
        if(second_player == 'K'){
            x2--;
        }else if(second_player == 'M'){
            x2++;
        }
        rendering(x1, x2, 40, 12);
        point1++;
        point2++;
    }
    return 0;
}

void rendering(int x1, int x2, int x, int y){
    for(int i = 1; i <= 25; i++){
        for(int j = 1; j <= 80; j++){
            if(i == 1 || i == 25 ){
                printf("-");
            }else if(j == 1 || j == 80){
                printf("|");
            }else if(j == 77 && (i == x1 || i == x1 - 1 || i == x1 + 1) && (x1 >= 3 && x1 <= 23)){
                printf("*");
            }else if(j == 4 && (i == x1 || i == x1 - 1 || i == x1 + 1) && (x2 >= 3 && x2 <= 23)){
                printf("*");
            }else if(j == x && i == y){
                printf("o");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
