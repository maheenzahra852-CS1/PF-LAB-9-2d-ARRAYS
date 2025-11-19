#include <iostream>
using namespace std;

int main() {
    int numbers[3];  
    int maxnum=0;
    for (int i = 0; i < 3; i++) {
    	  cout << "Enter number: ";
        cin >> numbers[i];
    }
    for (int i = 0; i < 3; i++) {
    	if(numbers[i]>maxnum)
           maxnum = numbers[i];
    }
    cout << "The maximum number is: " << maxnum << endl;
    return 0;
}
