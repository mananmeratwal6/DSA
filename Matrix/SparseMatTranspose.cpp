#include <iostream>
#include <vector>

using namespace std;

void readsparse(vector<vector<int>> &m) {
    int r, c, n;
    cout << "Enter the Size of Matrix (rows, columns): ";
    cin >> r >> c;

    cout << "Enter the Number of Non-Zero Elements: ";
    cin >> n;

    // Add header row
    m.push_back({r, c, n});

    // Read non-zero elements
    for (int i = 0; i < n; i++) {
        int row, col, val;
        cout << "Enter the next triple (row, col, value): ";
        cin >> row >> col >> val;
        m.push_back({row, col, val});
    }
}

void transpose(vector<vector<int>> &sm1, vector<vector<int>> &sm2) {
    int n = sm1[0][2]; // Number of non-zero elements

    // Add transposed header
    sm2.push_back({sm1[0][1], sm1[0][0], n});

    if (n > 0) {
        // Iterate through each column in original matrix
        for (int col = 0; col < sm1[0][1]; col++) {
            for (int i = 1; i <= n; i++) {
                if (sm1[i][1] == col) { // Match column
                    sm2.push_back({sm1[i][1], sm1[i][0], sm1[i][2]});
                }
            }
        }
    }
}

void printsparse(vector<vector<int>> &m) {
    cout << "\nRow\tCol\tValue\n";
    for (const auto &row : m) {
        cout << row[0] << "\t" << row[1] << "\t" << row[2] << endl;
    }
}

int main() {
    vector<vector<int>> m1, m2;

    readsparse(m1);
    transpose(m1, m2);
    printsparse(m2);

    return 0;
}
