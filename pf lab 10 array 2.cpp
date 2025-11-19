#include <iostream>
using namespace std;
int main() {
    int rows, columns;
     int matrix[100][100];
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> columns;
    cout << "Enter matrix elements:"<<endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }
      cout <<"Matrix:"<<endl;
   for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << matrix[i][j] << " "; }
            cout<<endl;
        }
    cout <<"Reversed Matrix:"<<endl;
    for (int i = rows - 1; i >= 0; i--) {
        for (int j = columns - 1; j >= 0; j--) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }  
    return 0;
}
