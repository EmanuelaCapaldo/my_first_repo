#include <iostream>
#include <string.h>
#include <cstdio>
#include <math.h>

using namespace std;

bool isPalindrome(string parola) {

    int last_index = parola.length() - 1;
    int first_index = 0;

    int N = floor(parola.length()/2);

    for(int i=0; i<N; i++) {
        if(parola[first_index] != parola[last_index]) {
            return false;
        }
        first_index++;
        last_index--;
    }
    return true;
}

int main()
{
    cout << isPalindrome("alcsa") << endl;
    cout << "chaning log message" << endl;

    return 0;
}


