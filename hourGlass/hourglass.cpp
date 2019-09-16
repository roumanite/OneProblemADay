#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int largest = 0; 
    for(int i = 0; i < arr.size() - 2; i++){
        for(int n = 0; n < arr[i].size() - 2; n++){
            int sum = 0;
            sum += arr[i][n] + arr[i][n+1] + arr[i][n+2] + arr[i+1][n+1];
            sum += arr[i+2][n] + arr[i+2][n+1] + arr[i+2][n+2];
            if(i == 0 && n == 0)
                    largest = sum; 
            if(sum > largest)
                largest = sum; 
        }
    }
    return largest; 
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
