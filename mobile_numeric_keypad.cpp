#include <iostream>
using namespace std;
 
string print(string arry[], string input)
{
    string output = "";
    int l = input.length();
    for (int i=0; i<l; i++)
    {
        if (input[i] == ' ')
            output=output+"0";
        else
        {
            int position=input[i]-'A';
            output=output+arry[position];
        }
    }
    return output;
}
int main()
{
    string buttons[] = {"2","22","222","3","33","333","4","44","444","5","55","555", "6","66","666","7","77","777","7777","8","88","888","9","99","999","9999" };
    string input = "PIES";
    cout << print(buttons, input);
    return 0;
}
