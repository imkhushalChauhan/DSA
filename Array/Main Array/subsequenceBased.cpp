#include <bits/stdc++.h>
using namespace std;
//ITERATIVE
int main(){
    long long target;
    int n;
    cin >> target >> n;

    vector<long long> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int count = 0;

    for(int i = 0; i < n-3; i++){
        for(int j = i+1; j < n-2; j++){
            for(int k = j+1; k < n-1; k++){
                for(int l = k+1; l < n; l++){
                    
                    long long product = arr[i] * arr[j] * arr[k] * arr[l];
                    
                    if(product == target){
                        count++;
                    }
                }
            }
        }
    }

    cout << count << endl;
    return 0;
}

//Recursive


#include <bits/stdc++.h>
using namespace std;

int countSubsequences(vector<int>& arr, int target, int index, long long product, int length) {
    
    // If product equals target and length >= 4
    if (product == target && length >= 4) {
        return 1;
    }

    // Stop if we reach end or product exceeds target
    if (index >= arr.size() || product > target) {
        return 0;
    }

    int count = 0;

    // Include current element
    count += countSubsequences(arr, target, index + 1, product * arr[index], length + 1);

    // Exclude current element
    count += countSubsequences(arr, target, index + 1, product, length);

    return count;
}

int main() {
    int target, n;
    cin >> target >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = countSubsequences(arr, target, 0, 1, 0);
    cout << result << endl;

    return 0;
}