#include <iostream>
using namespace std;

// int compare(int a, int b){
//     int c;
//     if(a>b){
//         c=a;
//     }else{
//         c=b;
//     }
//     return c;
// }

int compare(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

// int guess(int a){
//     if(a==5){
//         return 1;
//     }
//     return 0;
// }

int sum(int a, int b){
    int c= a+b;
    return c;
}


int main(){

    // compare two integers and return the greatest.

    // function to guess the number.

    // sum to two numbers.

    int a,b,c;
    a=3;
    b=5;
    c=sum(a,b);
    cout << c;
    
    return 0;
}
