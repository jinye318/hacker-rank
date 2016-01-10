#include <string>
#include <iostream>

using namespace std;


int main(){
    string time;
    cin >> time;
    string newTime;
    
    int hour = stoi(time.substr(0,2));
    
    // 12:00:00AM
    if(hour == 12) {
        if(time.at(8) == 'A')
            newTime = time.replace(0, 2, "00").substr(0, 8);
        else
            newTime = time.substr(0,8);
    }
    
    else if (time.at(8) == 'A')
        newTime = time.substr(0, 8);

    // PM
    else {
        hour += 12;
        newTime = time.replace(0, 2, to_string(hour)).substr(0, 8);
    }
    cout << newTime;
    return 0;
}
