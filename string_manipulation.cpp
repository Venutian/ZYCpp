#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

void Choices()
{
    cout << "MENU" << endl
         << "c - Number of non-whitespace characters" << endl
         << "w - Number of words" << endl
         << "f - Find text" << endl
         << "r - Replace all !'s" << endl
         << "s - Shorten spaces" << endl
         << "q - Quit" << endl;
}

int GetNumOfNonWSCharacters(string text)
{
    int space = count(text.begin(), text.end(), ' ');
    int nonSpace = text.length() - space;
    return nonSpace;
}

int GetNumOfWords(const string text)
{
    int word = 0, i;
    int length = text.length();

    for (i = 0; i < length;)
    {
        if (isspace(text[i]))
        {

            while (isspace(text[i]))
                i++;

            word++;
        }
        else
        {

            i++;
        }
    }

    word = word + 1;
    return word;
}

int FindText(string userWord, string text)
{
    int numOfWords = 0;
    stringstream ss(text);
    string word;

    while (ss >> word)
    {
        if (word == userWord)
        {
            numOfWords++;
        }
    }
    return numOfWords;
}

string ReplaceExclamation(string text)
{
    string replaced = text;
    int i, length = text.length();

    for (i = 0; i < length + 1; i++)
    {

        if (text[i] == '!')
            replaced[i] = '.';
    }
    return replaced;
}

string ShortenSpace(string text)
{
    char *edited;
    int i, length = text.size();
    int j = 0;
    edited = new char[length + 1];

    for (i = 0; i < length; j++)
    {

        edited[j] = text[i];

        if (isspace(text[i]))
        {
            while (isspace(text[i]))

                i++;
        }
        else
        {

            i++;
        }
    }

    edited[j] = '\0';
    text = edited;
    return text;
}

void PrintMenu(string letter, string input)
{
    if (letter == "c")
    {
        cout << "Number of non-whitespace characters: " << GetNumOfNonWSCharacters(input);
    }
    else if (letter == "w")
    {
        cout << "Number of words: " << GetNumOfWords(input);
    }
    else if (letter == "f")
    {
        cout << "Enter a word or phrase to be found: " << endl;
        string userWord;
        getline(cin, userWord);
        cout << userWord << " Instances: " << FindText(userWord, input);
    }
    else if (letter == "r")
    {
        cout << "Edited Text: " << ReplaceExclamation(input);
    }
    else if (letter == "s")
    {
        cout << ShortenSpace(input);
    }
    else if (letter == "q")
    {
        return;
    }
    else
    {
        cout << "Error, wrong choice " << endl;
        Choices();
    }
}

int main()
{

    string text = "";
    cout << "Enter a sample text:" << endl;
    getline(cin, text);
    cout << "You entered: " << text << endl;

    string choice;
    Choices();
    getline(cin, choice);
    PrintMenu(choice, text);
    return 0;
}
