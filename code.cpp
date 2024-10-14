#include <iostream>
#include <iomanip>

using namespace std; 

//Performing the format of output
int main(){
    cout << left << setw(10) << "Course C++ : " << right << setw(10) << 100 << "students." << endl; 
    
    cout << left << setw(10) << "Course JavaScript : " << right << setw(10) << 50 << "students." << endl; 
    return 0; 
}
