#include <iostream>
using namespace std;

#define max 10
void mult(int A[][max], int B[][max], int C[][max], int r1, int c1, int c2, int i, int j, int k){

    if(i>=r1)
        return;

    if (j>=c2)
    {
        mult(A, B, C, r1, c1, c2, i + 1, 0, 0);
        return;
    }


    if (k<c1)
    {
        C[i][j]+= A[i][k] * B[k][j];
        mult(A, B, C, r1, c1, c2, i, j, k + 1);
        return;
    }


    mult(A, B, C, r1, c1, c2, i, j + 1, 0);
}

int main()
{
    int r1, c1, r2, c2;

    cout << "Enter rows and columns of Matrix A: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of Matrix B: ";
    cin >> r2 >> c2;


    if (c1 != r2)
    {
        cout << "Matrix multiplication not possible!";
        return 0;
    }

    int A[max][max], B[max][max], C[max][max] = {0};

    cout << "Enter Matrix A:\n";
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> A[i][j];

    cout << "Enter Matrix B:\n";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> B[i][j];

    mult(A, B, C, r1, c1, c2, 0, 0, 0);


    cout << "\nResultant Matrix C :\n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}
