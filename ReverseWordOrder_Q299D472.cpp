#include <iostream>
#include <string>
using namespace std;

void reverseSubString(char wordList[] , int startPos , int endPos)
{
    int size = (endPos - startPos) + 1;
    
    for (int i = 0 ; i < size/2 ; i++)
    {
        char temp;
        temp = wordList[startPos + i];
        wordList[startPos + i] = wordList[endPos - i];
        wordList[endPos - i] = temp;
    }
}
int main()
{
    char arr[1000];
    int wordEnd = 0;
    int wordStart = 0;
    int i = 0;
    
    cout << "Enter a word or sentance to reverse: ";
    cin.getline(arr,1000);
    cout <<endl;
    
    while(arr[i] != '\0')
    {
        wordEnd++;
        i++;
        
        if (arr[i+1] == ' ' || arr[i+1] == '\0')
        {
            reverseSubString(arr, wordStart, wordEnd);
            wordStart = wordEnd + 2;
        }
    }
    reverseSubString(arr, 0, wordEnd - 1);
    
    
    for (int i = 0 ; i < wordEnd ; i++)
        cout << arr[i];
    cout << endl;
    return 0;
}


