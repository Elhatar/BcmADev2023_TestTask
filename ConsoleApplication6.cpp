#include <iostream>
#include <string>

using namespace std;

string UnicSymbol(string text);

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
            for (int i = 0; i < word.length(); i++)
            {
                int count = 0;
                for (int j = 0; j < word.length(); j++)
                {
                    if (word[i] == word[j])
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
                    recievedSet += word[i];
                    break;
                }
            }
            word = "";
        }
    }
    for (int i = 0; i < recievedSet.length(); i++)
    {
        int count = 0;
        for (int j = 0; j < recievedSet.length(); j++)
        {
            if (recievedSet[i] == recievedSet[j])
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
            result += recievedSet[i];
            break;
        }
    }
    if (result != "")
    {
        return "Your symbol is '" + result + "'";
    }
    else
    {
        return "We can't count your unic symbol";
    }

}