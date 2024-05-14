#include <stdio.h>
#include <stdlib.h>

void moveTop(char tower[][3], int from, int to) {
    printf("Move disk from tower %d to tower %d\n", from, to);
}

void hanoi(char tower[][3], int size, int from, int to, int aux) {
    if (size == 1) {
        moveTop(tower, from, to);
        return;
    }
    
    hanoi(tower, size - 1, from, aux, to);
    moveTop(tower, from, to);
    hanoi(tower, size - 1, aux, to, from);
}


int main() {
    int ROWS = 6;
    int COLS = 3;
    char tower[3][3] = {{'A', 'B', 'C'}, {1,0,0}, {2,0,0}, {3,0,0}, {4,0,0}, {5,0,0}, {10,10,10}};
    int size = 6;
    int from = 0, to = 2, aux = 1;

    hanoi(tower, size, from, to, aux);
   
    return 0;
}