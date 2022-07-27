#include <bits/stdc++.h>
using namespace std;

void vowels_count(string s)
{
    int count = 0 , cons = 0;

    for(int i = 0 ; s[i] != '\0' ; i++)
    {

       if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'
        || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' )
        {
            count++;
        } 
        else if( (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            cons++;
            
        }


    }

    cout << " vowels " << count << "\ncons " << cons << endl;

}
void words_count(string s)
{
    int words = 0;

    for(int i = 0 ; s[i] != '\0' ; i++)
    {

        if(s[i] == ' ' && s[i-1] != ' ')
            words++;


    }

    cout << "total no of words are " << words + 1 << endl;
}
int main()
{
    string sen = "How Are You";
    vowels_count(sen);
    words_count(sen);
    return 0;
}
