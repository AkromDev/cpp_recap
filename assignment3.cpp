#include <iostream>
#include <array>

using namespace std;

class Matrix{
    int *a = new int[0][0];
    int rowLength = 0;
    int colLength = 0;
public:
    Matrix(){
        int n, m;
        cout << "Enter n,m: ";
        cin >> n;
        cin >> m;
        a = new int[n][m];
        colLength = n;
        rowLength = m;
    }

    void getData(){
        for (int i = 0; i <colLength ; ++i) {
            for (int j = 0; j < rowLength; ++j) {
                cin >> a[i][j];
            }
        }
    }
};

int main(){
    Matrix m1(2,3);
    m1.getData();
    return 0;
}