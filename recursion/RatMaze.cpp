#include <iostream>
#include <vector>

using namespace std;

bool isSafe(int r, int c, int n, vector<vector<int>> &maze,vector<vector<int>> &visited)
{
    if (r >= 0 && r < n && c >= 0 && c < n && maze[r][c] == 1 && visited[r][c]!=1)
    {
        return true;
    }
    return false;
}

void solveMaze(vector<vector<int>> &maze, int r, int c, int n, vector<string> &solution, string path,vector<vector<int>> &visited)
{
    // base case
    if (r == n - 1 && c == n - 1)
    {
        solution.push_back(path);
        return;
    }

     visited[r][c]=1;

    // down
    if (isSafe(r + 1, c, n, maze,visited))
    {
        path.push_back('D');
        visited[r + 1][c] = 1;
        solveMaze(maze, r + 1, c, n, solution, path,visited);
        path.pop_back();
        visited[r + 1][c] = 0;
    }

    // left
    if (isSafe(r, c - 1, n, maze,visited))
    {
        path.push_back('L');
        visited[r][c - 1] = 1;
        solveMaze(maze, r, c - 1, n, solution, path,visited);
        path.pop_back();
        visited[r][c - 1] = 0;
    }
    // right
    if (isSafe(r, c + 1, n, maze,visited))
    {
        path.push_back('R');
        visited[r][c + 1] = 1;
        solveMaze(maze, r, c + 1, n, solution, path,visited);
        path.pop_back();
        visited[r][c + 1] = 0;
    }
    // up
    if (isSafe(r - 1, c, n, maze,visited))
    {
        path.push_back('U');
        visited[r - 1][c] = 1;
        solveMaze(maze, r - 1, c, n, solution, path,visited);
        path.pop_back();
        visited[r - 1][c] = 0;

    }


}
int main()
{
    vector<vector<int>> maze = {{1, 0, 0, 0},
                                {1, 1, 0, 1},
                                {1, 1, 0, 0},
                                {0, 1, 1, 1}};
    int n = maze.size();
    vector<string> solution;
    string path = "";
    int r = 0;
    int c = 0;
    vector<vector<int>> visited(n,vector<int>(n,0));
    visited[0][0]=1;
    solveMaze(maze, r, c, n, solution, path,visited);
    for (string s : solution)
    {
        cout << s << endl;
    }
    return 0;
}


