#include <stdio.h>
const int size = 8;

int main()
{
    char table[size][size];

    // create table
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            table[i][j] = '0';
        }
    }

    // pawns
    for (int i = 0; i < size; ++i) {
        table[1][i] = 'p';
        table[6][i] = 'P';
    }

    // otcher
    table[0][0] = 'r';
    table[0][7] = 'r';
    table[7][0] = 'R';
    table[7][7] = 'R';
    table[0][1] = 'n';
    table[0][6] = 'n';
    table[7][1] = 'N';
    table[7][6] = 'N';
    table[0][2] = 'b';
    table[0][5] = 'b';
    table[7][2] = 'B';
    table[7][5] = 'B';
    table[0][3] = 'q';
    table[7][3] = 'Q';
    table[0][4] = 'k';
    table[7][4] = 'K';

    // print table
    for (int i = 0; i < size; ++i) {
        printf("%d ", size - i);
        for (int j = 0; j < size; ++j) {
            printf("%c ", table[i][j]);
        }
        printf("\n");
    }
    printf("  a b c d e f g h\n");

    return 0;
}
