#include <vector>
#include <iostream>

using namespace std;


int main(){
    int n;
    cin >> n;
    long long result = 0;
    
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
       result += arr[arr_i];
    }
    
    cout << result;
    
    return 0;
}
