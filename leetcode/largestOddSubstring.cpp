#include<iostream>
#include<string>
#include<typeinfo>

using namespace std;

string largestOddNumber_new(string num) {
   for(int i = num.length() - 1; i >= 0; i--) {
        if((num[i] - '0') % 2 != 0) {
            cout<<typeid(num[i] - '0').name();
            return num.substr(0, i + 1);
        }
    }
    return "";
    
}


string largestOddNumber(string num)
{   
    int lengthOfSubString = 0; 
    if(stoi(num) % 2 != 0)
    {    
        return num;
    }
    string subString = "";
    string returnSubstring = "";
    for(int i = 0; i <= num.length(); i++)
    {
        for(int j = 1; j <= num.length()-i ;j++)
        {
            string subString = num.substr(i,j);
            

            if(stoi(subString) % 2 != 0 && lengthOfSubString < num.substr(i,j).length())
            {
                lengthOfSubString = num.substr(i,j).length();
                returnSubstring = subString;
            }
        } 
    }
    return returnSubstring;  
    

}

int main()
{
    string num = "12346";
    // largestOddNumber_new(num);
    cout<< largestOddNumber_new(num)<<'\n';
    return 0;
}