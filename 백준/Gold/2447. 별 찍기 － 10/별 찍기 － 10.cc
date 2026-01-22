#include <iostream>
using namespace std;

char board[2200][2200]; //3의 7승이 2187

void DrawStar(int row, int col, int size)
{
    //탈출조건
    if (size == 1)
    {
        board[row][col] = '*';
        return;
    }
    //가운데 비우기...
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 1 && j == 1)
            {
                continue;
            }
            
            DrawStar(row + i*(size/3), col + j*(size/3), size/3);
        }
    }
    
}


int main() {
    for (int i = 0; i < 2200; i++)
    {
        for (int j = 0; j < 2200; j++)
        {
            board[i][j] = ' ';
        }
    }
    
    int num;
    if (!(cin >> num))
    {
        return 0;
    }
    
    DrawStar(0, 0, num);
    
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout << board[i][j];
        }
        cout << "\n";
    }
    
    
    return 0;
}