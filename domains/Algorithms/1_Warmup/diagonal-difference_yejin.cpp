#include <vector>
#include <iostream>

using namespace std;


int main(){
    int size;
    cin >> size;

    vector< vector<int> > matrix(size,vector<int>(size));
    
    int primary = 0;
    int secondary = 0;
    
    for(int i=0; i<size; i++) {
        for(int j=0; j<size; j++) {
            cin >> matrix[i][j];
            
            if(i==j)
                primary += matrix[i][j];
            if(i+j == (size-1))
                secondary += matrix[i][j];
        }
    }
    
    int result = (primary < secondary) ? (secondary-primary) : (primary-secondary) ;
    cout << result;
    
    return 0;
}
