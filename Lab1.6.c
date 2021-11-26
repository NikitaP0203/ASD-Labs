#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y){
    COORD coordinate;
    coordinate.X = x;
    coordinate.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}

int main(void){
    SetConsoleOutputCP(CP_UTF8);
    
    float speed = 20;
    int x_start = 43, y_start = 12;
    int up_down = 2, left_right = 10;

    for (int n = 0; n < 6; n++){

        //LEFT
        for (int i = x_start; i > x_start - left_right; i--){
            gotoxy(i, y_start);
            printf("*");
            Sleep(speed);
        }
        x_start -= left_right;
        left_right += 5;

        //UP
        for (int i = y_start; i > y_start - up_down; i--){
            gotoxy(x_start, i);
            printf("*");
            Sleep(speed);
        }
        y_start -= up_down;
        up_down += 2;

        //RIGHT
        for (int i = x_start; i < x_start + left_right; i++){
            gotoxy(i, y_start);
            printf("*");
            Sleep(speed);
        }
        x_start += left_right;
        left_right += 5;

        //DOWN
        for (int i = y_start; i < y_start + up_down; i++){
            gotoxy(x_start, i);
            printf("*");
            Sleep(speed);
        }
        y_start += up_down;
        up_down += 2;
    }
    printf("\n");
    return 0;                   
}