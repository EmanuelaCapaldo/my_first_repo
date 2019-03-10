#include <iostream>
#include <string.h>
#include <cstdio>//per scanf e prinft
#include <math.h>

using namespace std;

bool isPalindrome(string);

int main()
{


    cout << isPalindrome("alcsa") << endl;
    cout << "trial with this program" << endl;

    return 0;
}


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
