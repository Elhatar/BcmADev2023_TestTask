#include <iostream>
#include <string>

using namespace std;

string UnicSymbol(string text);
void GetUnicChar(string input, string& output);

int main()
{
    string inputText;
    getline(cin, inputText);
    cout << UnicSymbol(inputText) << endl;
    system("pause");
    return 0;
}

string UnicSymbol(string text)
{
    string result;
    string word = "";
    string recievedSet = "";
    text += " ";
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] != ' ')
        {
            word += text[i];
        }
        else
        {
            GetUnicChar(word, recievedSet);
            word = "";
        }
    }
    GetUnicChar(recievedSet, result);
    if (result != "")
    {
        return "Your symbol is '" + result + "'";
    }
    else
    {
        return "We can't count your unic symbol";
    }

}
void GetUnicChar(string input, string& output)
{
    for (int i = 0; i < input.length(); i++)
    {
        int count = 0;
        for (int j = 0; j < input.length(); j++)
        {
            if (input[i] == input[j])
            {
                count++;
            }
            if (count > 1)
            {
                break;
            }
        }
        if (count == 1)
        {
            output += input[i];
            break;
        }
    }
}