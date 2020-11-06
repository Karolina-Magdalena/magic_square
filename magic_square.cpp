#include <bits/stdc++.h>

using namespace std;

// Complete the formingMagicSquare function below.
int formingMagicSquare(vector<vector<int>> s) {
int arr [9];
int i = 0;
for (int b=0;b<3;b++)
{
    for (int a=0;a<3;a++)
    {
        arr[i]=s[b][a];
        i++;
    }
}
int sol[8][9] = {
                    {4,9,2,3,5,7,8,1,6},
                    {4,3,8,9,5,1,2,7,6},
                    {2,9,4,7,5,3,6,1,8},
                    {2,7,6,9,5,1,4,3,8},
                    {8,1,6,3,5,7,4,9,2},
                    {8,3,4,1,5,9,6,7,2},
                    {6,7,2,1,5,9,8,3,4},
                    {6,1,8,7,5,3,2,9,4},
                };
int sums [8];
int sum = 0;
int dif = 0;
for (int b=0;b<8;b++)
{
    for (int a=0;a<9;a++)
    {
            dif=abs(sol[b][a]-arr[a]);
            sum=sum+dif;
    }
sums[b]=sum;
sum=0;
}

sort(sums,sums+8);
int result = sums[0];
return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> s(3);
    for (int i = 0; i < 3; i++) {
        s[i].resize(3);

        for (int j = 0; j < 3; j++) {
            cin >> s[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = formingMagicSquare(s);

    cout << result << "\n";

    fout.close();

    return 0;
}
