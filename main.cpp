#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string text;
    cout << "----------------------LETTER PYRAMID----------------------" << endl;
    cout << "Enter a string: ";
    getline(cin,text);
    size_t letters = text.length();
    int pos{0};
    // for each letter in the string
    for (char c: text) 
    {
        size_t spaces = letters-pos;
        while(spaces>0) 
        {
            cout << " ";
            --spaces;
        }
        // Display in order up to the current character
        for (int i=0; i<pos; i++) 
        {
            cout << text.at(i);
        }
        // Display the current 'center' character
        cout << c;
        // Display the remaining characters in reverse order
        for (int j=pos-1; j>=0; j--) 
        {
            cout << text.at(j);
        }
        cout << endl;
        ++pos;
    }
    cout << endl;
    return 0;
}
