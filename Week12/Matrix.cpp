#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
const int size = 3;
int arr1[size][size];
int arr2[size][size];
int arr3[size][size];
string mat1, mat2, mat3;
string menu();
void inputmatString();
void parseMatrix();
void print(char ar);
void AddTwoMat(char ar);
void SubTwoMat(char ar);
void ScalarMultiply(string mul);
void MulScalar(int arrR[size][size], int arrM[size][size], int num);
bool isIdentity(int arr[size][size]);
bool isDiagonal(int arr[size][size]);
bool isSymmetric(int arr[size][size]);
void Transpose(int ar[size][size]);
void MulTwoMat(int arrR[size][size], int arrM1[size][size], int arrM2[size][size]);
void ScreenCLS();
main()
{
    bool Identity = false, Diagonal = false, Symmetric = false;
    string option = " ";
    inputmatString();
    while (option != "Exit" && option != "exit")
    {
        option = menu();
        if (option[6] == '+')
        {
            AddTwoMat(option[0]);
        }
        else if (option[6] == '-')
        {
            SubTwoMat(option[0]);
        }
        else if (option[6] == '*')
        {
            if (option[0] == 'A')
            {
                if (option[4] == 'B')
                {
                    MulTwoMat(arr1, arr2, arr3);
                }
                if (option[4] == 'C')
                {
                    MulTwoMat(arr1, arr3, arr2);
                }
            }
            if (option[0] == 'B')
            {
                if (option[4] == 'A')
                {
                    MulTwoMat(arr2, arr1, arr3);
                }
                if (option[4] == 'C')
                {
                    MulTwoMat(arr2, arr3, arr1);
                }
            }
            if (option[0] == 'C')
            {
                if (option[4] == 'B')
                {
                    MulTwoMat(arr3, arr2, arr1);
                }
                if (option[4] == 'A')
                {
                    MulTwoMat(arr3, arr1, arr2);
                }
            }
        }
        else if ((option[2] == 'S' && option[3] == 'c') || (option[2] == 's' && option[3] == 'c'))
        {
            ScalarMultiply(option);
        }
        else if (option[0] == 'p' || option[0] == 'P')
        {
            print(option[6]);
        }
        else if (option[2] == 'I' || option[2] == 'i')
        {
            if (option[11] == 'A')
            {
                Identity = isIdentity(arr1);
            }
            else if (option[11] == 'B')
            {
                Identity = isIdentity(arr2);
            }
            else if (option[11] == 'C')
            {
                Identity = isIdentity(arr3);
            }
            if (Identity)
            {
                cout << "Matrix " << option[11] << " is an identity matrix" << endl;
            }
            else
            {
                cout << "Matrix " << option[11] << " is not an identity matrix" << endl;
            }
        }
        else if (option[2] == 'D' || option[2] == 'd')
        {
            if (option[11] == 'A')
            {
                Diagonal = isDiagonal(arr1);
            }
            else if (option[11] == 'B')
            {
                Diagonal = isDiagonal(arr2);
            }
            else if (option[11] == 'C')
            {
                Diagonal = isDiagonal(arr3);
            }
            if (Diagonal)
            {
                cout << "Matrix " << option[11] << " is a Diagonal matrix" << endl;
            }
            else
            {
                cout << "Matrix " << option[11] << " is not a Diagonal matrix" << endl;
            }
        }
        else if (option[0] == 'T' || option[0] == 't')
        {
            if (option[10] == 'A')
            {
                Transpose(arr1);
            }
            if (option[10] == 'B')
            {
                Transpose(arr2);
            }
            if (option[10] == 'C')
            {
                Transpose(arr3);
            }
        }
        else if (option[2] == 'S' || option[2] == 's')
        {
            if (option[12] == 'A')
            {
                Symmetric = isSymmetric(arr1);
            }
            else if (option[12] == 'B')
            {
                Symmetric = isSymmetric(arr2);
            }
            else if (option[12] == 'C')
            {
                Symmetric = isSymmetric(arr3);
            }
            if (Symmetric)
            {
                cout << "Matrix " << option[12] << " is a Symmetric matrix" << endl;
            }
            else
            {
                cout << "Matrix " << option[12] << " is not a Symmetric matrix" << endl;
            }
        }
        ScreenCLS();
    }
}
string menu()
{
    system("cls");
    cout << ">> print(matrixName)\n";                   // done
    cout << ">> C = A * B\n";                           // done
    cout << ">> C = A + B\n";                           // done
    cout << ">> C = A - B\n";                           // done
    cout << ">> C=ScalarMultiply(matrixName,Number)\n"; // done
    cout << ">> isIdentity(matrix)\n";                  // done
    cout << ">> isDiagonal(matrixName)\n";              // done
    cout << ">> Transpose(matrixName)\n";               // done
    cout << ">> isSymmetric(matrixName)\n";             // done
    cout << "Exit\n";
    string op;
    cin.sync();
    cin.clear();
    cout << ">> ";
    getline(cin, op);
    return op;
}
void inputmatString()
{
    cout << "*****************************************************\n";
    cout << "**                                                 **\n";
    cout << "**              MATRIX SOLVER PROGRAM              **\n";
    cout << "**                                                 **\n";
    cout << "*****************************************************\n";
    cout << "\n\n\n";
    cout << "Enter the values of matrix A, B and C\n";
    cout << "Enter matrix A: ";
    cin >> mat1;
    cout << "Enter matrix B: ";
    cin >> mat2;
    cout << "Enter matrix C: ";
    cin >> mat3;
    parseMatrix();
}
void parseMatrix()
{
    int row = 0, col = 0;
    string c;
    int length = mat1.length();
    for (int i = 0; i < length; i++)
    {
        c = mat1[i];
        if (c != "{" && c != "}" && c != ",")
        {
            arr1[row][col] = stoi(c);
            col++;
            if (col == 3)
            {
                col = 0;
                row++;
            }
        }
    }
    row = 0;
    col = 0;
    length = mat2.length();
    for (int i = 0; i < length; i++)
    {
        c = mat2[i];
        if (c != "{" && c != "}" && c != ",")
        {
            arr2[row][col] = stoi(c);
            col++;
            if (col == size)
            {
                col = 0;
                row++;
            }
        }
    }
    row = 0;
    col = 0;
    length = mat3.length();
    for (int i = 0; i < length; i++)
    {
        c = mat3[i];
        if (c != "{" && c != "}" && c != ",")
        {
            arr3[row][col] = stoi(c);
            col++;
            if (col == 3)
            {
                col = 0;
                row++;
            }
        }
    }
}
void print(char ar)
{
    if (ar == 'A')
    {
        for (int j = 0; j < size; j++)
        {
            for (int i = 0; i < size; i++)
            {
                cout << arr1[j][i] << "\t";
            }
            cout << "\n";
        }
    }
    if (ar == 'B')
    {
        for (int j = 0; j < size; j++)
        {
            for (int i = 0; i < size; i++)
            {
                cout << arr2[j][i] << "\t";
            }
            cout << "\n";
        }
    }
    if (ar == 'C')
    {
        for (int j = 0; j < size; j++)
        {
            for (int i = 0; i < size; i++)
            {
                cout << arr3[j][i] << "\t";
            }
            cout << "\n";
        }
    }
}
void AddTwoMat(char ar)
{
    if (ar == 'A')
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                arr1[i][j] = arr2[i][j] + arr3[i][j];
            }
        }
    }
    if (ar == 'B')
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                arr2[i][j] = arr1[i][j] + arr3[i][j];
            }
        }
    }
    if (ar == 'C')
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                arr3[i][j] = arr1[i][j] + arr2[i][j];
            }
        }
    }
}
void SubTwoMat(char ar)
{
    if (ar == 'A')
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                arr1[i][j] = arr2[i][j] - arr3[i][j];
            }
        }
    }
    if (ar == 'B')
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                arr2[i][j] = arr1[i][j] - arr3[i][j];
            }
        }
    }
    if (ar == 'C')
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                arr3[i][j] = arr1[i][j] - arr2[i][j];
            }
        }
    }
}
void ScalarMultiply(string mul)
{
    int num;
    char n = mul[19];
    char MAT1 = mul[0], MAT2 = mul[17];
    num = n - '0';
    if (MAT1 == 'A' && MAT2 == 'A')
    {
        MulScalar(arr1, arr1, num);
    }
    if (MAT1 == 'B' && MAT2 == 'B')
    {
        MulScalar(arr2, arr2, num);
    }
    if (MAT1 == 'C' && MAT2 == 'C')
    {
        MulScalar(arr3, arr3, num);
    }

    if (MAT1 == 'A' && MAT2 == 'B')
    {
        MulScalar(arr1, arr2, num);
    }
    if (MAT1 == 'B' && MAT2 == 'A')
    {
        MulScalar(arr2, arr1, num);
    }
    if (MAT1 == 'C' && MAT2 == 'A')
    {
        MulScalar(arr3, arr1, num);
    }
    if (MAT1 == 'A' && MAT2 == 'C')
    {
        MulScalar(arr1, arr3, num);
    }
    if (MAT1 == 'B' && MAT2 == 'C')
    {
        MulScalar(arr2, arr3, num);
    }
    if (MAT1 == 'C' && MAT2 == 'B')
    {
        MulScalar(arr3, arr2, num);
    }
}
void MulScalar(int arrR[size][size], int arrM[size][size], int num)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arrR[i][j] = num * arrM[i][j];
        }
    }
}
bool isIdentity(int arr[size][size])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                if (arr[i][j] != 1)
                {
                    return false;
                }
            }
            else
            {
                if (arr[i][j] != 0)
                {
                    return false;
                }
            }
        }
    }
    return true;
}
bool isDiagonal(int arr[size][size])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i != j)
            {
                if (arr[i][j] != 0)
                {
                    return false;
                }
            }
        }
    }
    return true;
}
void Transpose(int ar[size][size])
{
    int ar1[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            ar1[i][j] = ar[j][i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            ar[i][j] = ar1[i][j];
        }
    }
}
bool isSymmetric(int arr[size][size])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i][j] != arr[j][i])
            {
                return false;
            }
        }
    }
    return true;
}
void MulTwoMat(int arrR[size][size], int arrM1[size][size], int arrM2[size][size])
{
    arrR[0][0] = (arrM1[0][0] * arrM2[0][0]) + (arrM1[0][1] * arrM2[1][0]) + (arrM1[0][2] * arrM2[2][0]);
    arrR[0][1] = (arrM1[0][0] * arrM2[0][1]) + (arrM1[0][1] * arrM2[1][1]) + (arrM1[0][2] * arrM2[2][1]);
    arrR[0][2] = (arrM1[0][0] * arrM2[0][2]) + (arrM1[0][1] * arrM2[1][2]) + (arrM1[0][2] * arrM2[2][2]);
    arrR[1][0] = (arrM1[1][0] * arrM2[0][0]) + (arrM1[1][1] * arrM2[1][0]) + (arrM1[1][2] * arrM2[2][0]);
    arrR[1][1] = (arrM1[1][0] * arrM2[0][1]) + (arrM1[1][1] * arrM2[1][1]) + (arrM1[1][2] * arrM2[2][1]);
    arrR[1][2] = (arrM1[1][0] * arrM2[0][2]) + (arrM1[1][1] * arrM2[1][2]) + (arrM1[1][2] * arrM2[2][2]);
    arrR[2][0] = (arrM1[2][0] * arrM2[0][0]) + (arrM1[2][1] * arrM2[1][0]) + (arrM1[2][2] * arrM2[2][0]);
    arrR[2][1] = (arrM1[2][0] * arrM2[0][1]) + (arrM1[2][1] * arrM2[1][1]) + (arrM1[2][2] * arrM2[2][1]);
    arrR[2][2] = (arrM1[2][0] * arrM2[0][2]) + (arrM1[2][1] * arrM2[1][2]) + (arrM1[2][2] * arrM2[2][2]);
}
void ScreenCLS()
{
    cout << "Enter any key to continue: \n";
    getch();
    system("cls");
}