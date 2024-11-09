#include <iostream>
using namespace std;

int main() {
    int n;
    for(int i = 2020; i <= 3838; i++) {
        if(i%3==0 && i%6==0 && i%9==0){
            printf("%d", i);
        }
    }
    return 0;
}