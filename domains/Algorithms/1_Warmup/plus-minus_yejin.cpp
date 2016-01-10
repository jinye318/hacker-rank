#include <vector>
#include <iostream>
#include <cstdio>

using namespace std;


int main(){
    double num;
    cin >> num;
    vector<int> arr(num);
    
    int countPositive = 0;
    int countNagative = 0;
    int countZero = 0;
    
    for(int i_arr=0; i_arr < num; i_arr++){
       cin >> arr[i_arr];
       if(arr[i_arr] > 0)
           countPositive++;
       else if(arr[i_arr] < 0)
            countNagative++;
       else
           countZero++;
    }
    
    printf("%.6f\n%.6f\n%.6f", countPositive/num, countNagative/num, countZero/num );
    
    return 0;
}
