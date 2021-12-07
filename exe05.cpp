#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(){
    char original[1000] = "Inverter uma frase";
    char nova[1000];
    int j = 0;

    for(int i = strlen(original) - 1; i >= 0; i--){
        nova[j] = original[i];
        j++;
    }
    cout << endl << nova;

    return 0;
}
