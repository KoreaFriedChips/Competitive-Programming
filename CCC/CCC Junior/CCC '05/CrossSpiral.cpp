#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    char grid[21][21];
    int w, h, cw, ch, steps;
    cin >> w >> h >> cw >> ch >> steps;
    int c, r, direction;
    bool moving;

    for (int i = 0; i < 21; i++) {
        for (int j = 0; j < 21; j++) {
            if (i >= 1 && i <= h && j >= 1 && j <= w &&
                 !(((i <= ch && (j <= cw || j > w - cw)) || (i > h - ch && (j <= cw || j > w - cw))))) {
                     grid[i][j] = 'O';
                 }
            else {
                grid[i][j] = 'C';
            }
        }
    }
    /*
    for (int i = 0; i < 21; i++)
    {
        for (int j = 0; j < 21; j++)
        {
            cout << grid[i][j];
        }
        cout << "\n";
    }
    */

   c = cw + 1;
   r = 1;
   direction = 0;
   while (moving == true) {
       for (int i = 0; i < steps; i++) {
       grid[r][c] = 'C';
       moving = true;
       if (direction == 0) {
           if (grid[r-1][c] == 'O') {
               r -= 1;
               direction = 90;
           } else if (grid[r][c+1] == 'O') {
               c += 1;
               direction = 0;
           } else if (grid[r+1][c] == 'O') {
               r += 1;
               direction = 270;
           } else if (grid[r][c-1] == 'O') {
               c -= 1;
               direction = 180;
           } else {
               moving = false;
           }
       }
       else if (direction == 90) {
           if (grid[r][c-1] == 'O') {
            c -= 1;
            direction = 180;
           } 
           else if (grid[r-1][c] == 'O') {
            r -= 1;
            direction = 90;
           }
           else if (grid[r][c+1] == 'O'){
            c += 1;
            direction = 0;
            }
            else if (grid[r + 1][c] == 'O') {
            r += 1;
            direction = 270;
            }
            else{
                moving = false;
            }
        } 
        else if (direction == 180) {
            if (grid[r + 1][c] == 'O') {
                r+=1;
                direction = 270;
            }
            else if (grid[r][c-1] == 'O'){
                c -= 1;
                direction = 180;
            }
            else if (grid[r - 1][c] == 'O') {
                r -= 1;
                direction = 90;
            }
            else if (grid[r][c + 1] == 'O') {
                c += 1;
                direction = 0;
            }
            else {
                moving = false;
            }
        }
        else if (direction == 270) {
            if (grid[r][c + 1] == 'O') {
                c += 1;
                direction = 0;
            }
            else if (grid[r + 1][c] == 'O') {
                r += 1;
                direction = 270;
            }
            else if (grid[r][c-1] == 'O') {
                c -= 1;
                direction = 180;
            }
            else if (grid[r - 1][c] == 'O') {
                r -= 1;
                direction = 90;
            } else {
                moving = false;
            }
        }
    }
   
    cout << c << endl;
    cout << r << endl;
    return 0;
    }
}