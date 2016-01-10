#include <vector>
#include <iostream>


int main(){
    int num;
    std::cin >> num;
    
    std::vector<int> arr(num);
    int result = 0;
    
    for(int i=0; i<num; i++) {
       std::cin >> arr[i];
       result += arr[i];
    }
    std::cout << result;
    return 0;
}
