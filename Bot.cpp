#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;



int main() {
    
    time_t current_time = time(nullptr);
    

   
    cout << ctime(&current_time);

    return 0;
}
