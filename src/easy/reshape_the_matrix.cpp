#include <vector>

using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    int n = mat.size();
    int m = mat[0].size();

    int total = m * n;

    if(r * c != total) {
        return mat;
    }

    vector<int> row(c);
    vector<vector<int>> result(r, row);

    for(int y = 0 ; y < r ; y ++) {
        for(int x = 0 ; x < c ; x++) {
            int index = y * c + x;
            int yy = index / m;
            int xx = index % m;
            result[y][x] = mat[yy][xx];
        }
    }

    return result;
}