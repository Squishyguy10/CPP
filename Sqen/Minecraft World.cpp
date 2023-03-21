#include <bits/stdc++.h>
 
using namespace std;

int one_column(int height) {
    if(height > 0)
        return (4 * height) + 2;
    else
        return 0;
}

int touching(int height1, int height2) {
    if(height1 > height2)
        return 2 * height2;
    else
        return 2 * height1;
}

int surface_area(int heights[]) {
    int result = 0;
    for(int i = 0; i < sizeof(heights); i++)
        result += one_column(heights[i]);

    for(int i = 0; i < sizeof(heights) - 1; i++)
        result -= touching(heights[i], heights[i + 1]);
    return result;
}

int main() {
    int rows; cin >> rows;
    int cols; cin >> cols;
    int result = 0;
    int array[rows][cols];

    for(int r = 0; r < rows; r++)
        for(int c = 0; c < cols; c++)
            cin >> array[r][c];
    
    for(int r = 0; r < rows; r++)
        for(int c = 0; c < cols; c++)
            result += one_column(array[r][c]);

    for(int r = 0; r < rows; r++) {
        for(int c = 0; c < cols; c++){
            if(c != cols - 1)
                result -= touching(array[r][c], array[r][c + 1]);

            if(r != rows - 1)
                result -= touching(array[r][c], array[r + 1][c]);
        }
    }
    cout << result << endl;
}