//Abel Anand
#include <iostream>
#include <string>
using namespace std;
string reverse(string str)
{
    string txt = "";
    for (long i = str.size(); i>=0; i--){
      txt += str[i];
        
    }
    return txt;
}

int main(void)
{
    string text;
    cout << "Enter text to be reversed\n";
        while( getline( cin, text ) ) {
            cout << reverse(text);
            break;
        }
}


