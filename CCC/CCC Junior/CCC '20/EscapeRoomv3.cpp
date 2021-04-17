#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>
#include <vector>
using namespace std;

class Cell {
    public:
    int r;
    int c;
};

bool searched[1005][1005];
vector<vector<Cell> > vals (1000005);
//vals[1] returns the vector that contains all cells with value 1
string is_possible(Cell last_cell) {
    queue<Cell> q;
    q.push(last_cell); //backtracking from the target
    while (q.size() > 0) // while the queue is not empty
    {
        Cell cell = q.front(); //first look at the first cell in the queue
        q.pop();
        vector<Cell> neighbours = vals[cell.r * cell.c]; //finds the vector of all cells that jump to that cell
        for (Cell neighbour : neighbours) //search for every neighbour
        {
            if (neighbour.r == 1 && neighbour.c == 1) { //found path
                return "yes";
            } else if (!searched[neighbour.r][neighbour.c]) { //if cell is not searched, search it
                searched[neighbour.r][neighbour.c] = true;
                q.push(neighbour);
            }
        }
    }
    return "no";
}

int main()
{
	ios_base::sync_with_stdio(false); //saves cin time
    cin.sync_with_stdio(0);
    cin.tie(0);
	int r, c; cin >> r >> c;
    Cell last_cell;

    for (int i = 1; i <= r; i++) //get every cell
    {
       for (int j = 1; j <= c; j++)
       {
           int val; cin >> val;
           Cell cell;
           cell.r = i; cell.c = j;
           vals[val].push_back(cell); //set up vals vector
           if (i == r && j == c) {
               last_cell = cell; //give the target is equal to the last cell
           }
       }
    }
    cout << is_possible(last_cell);
		
	return 0; 
}
