#include <iostream>
using namespace std;
int main() {
    int A[2][2], B[2][2];
    int ch;
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> A[i][j];
        }
    }
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> B[i][j];
        }
    }
    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Display matrices\n";
        cout << "2. Sum of matrices\n";
        cout << "3. Subtraction of matrices\n";
        cout << "4. Multiplication of matrices\n";
        cout << "5. Transpose of first matrix\n";
        cout << "6. Check identity matrix (first matrix)\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch) {
            case 1:
                cout << "\nFirst Matrix:\n";
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        cout << A[i][j] << " ";
                    }
                    cout << endl;
                }
                cout << "\nSecond Matrix:\n";
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        cout << B[i][j] << " ";
                    }
                    cout << endl;
                }
                break;
            case 2:
                cout << "\nSum of matrices:\n";
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        cout << A[i][j] + B[i][j] << " ";
                    }
                    cout << endl;
                }
                break;
            case 3:
                cout << "\nSubtraction (A - B):\n";
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        cout << A[i][j] - B[i][j] << " ";
                    }
                    cout << endl;
                }
                break;
            case 4: {
                cout << "\nMultiplication:\n";
                int C[2][2] = {0};

                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        for (int k = 0; k < 2; k++) {
                            C[i][j] += A[i][k] * B[k][j];
                        }
                        cout << C[i][j] << " ";
                    }
                    cout << endl;
                }
                break;
            }
            case 5:
                cout << "\nTranspose of First Matrix:\n";
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        cout << A[j][i] << " ";
                    }
                    cout << endl;
                }
                break;
            case 6: {
                bool identity = true;

                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        if ((i == j && A[i][j] != 1) || (i != j && A[i][j] != 0)) {
                            identity = false;
                        }
                    }
                }
                if (identity)
                    cout << "First matrix is an Identity Matrix\n";
                else
                    cout << "First matrix is NOT an Identity Matrix\n";

                break;
            }
            case 7:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 7);
    return 0;
}
