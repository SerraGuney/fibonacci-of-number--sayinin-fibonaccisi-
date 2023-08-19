#include <iostream>
using namespace std;
int fibonacci(int f){
    if(f<=1){
    return f;
    }
    else {
        return fibonacci(f-1)+fibonacci(f-2);
    }
}
int main(){
    int number;
    cout<<"enter number:";
    cin>>number;
    cout<<"fibonacci of the number:"<<fibonacci(number);
    return 0;
}

