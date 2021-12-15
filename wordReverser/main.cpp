#include <iostream>
#include <string>
using namespace std;

void reverse(string str)
{
    for (long i = str.size(); i>=0; i--){
      cout << str[i];
    }
}

int main(void)
{
    string text;
    cout << "Enter text to be reversed\n";
        while( getline( cin, text ) ) {
            reverse(text);
            break;
        }
}


