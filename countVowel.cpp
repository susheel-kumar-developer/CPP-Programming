#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int countVowel(string str)
{
    int count = 0;
    for(int i = 0; i < str.length(); i++)
    {
        if(tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' ||tolower(str[i]) == 'o' || tolower(str[i]) == 'u')
        {
            count++;
        }
    }
    return count;
}

int main()
{
     string str = "SushEel";

    cout<<countVowel(str);
    return 0;
}
