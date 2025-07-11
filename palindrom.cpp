#include<iostream>
#include<string>
#include<algorithm>
#include<cctype> // for isalnum
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string palindrom_s = s;
        transform(palindrom_s.begin(), palindrom_s.end(), palindrom_s.begin(), ::tolower); // Convert to lowercase
        // Remove non-alphanumeric characters
        for(char c:s){
            if(!isalnum(c)){
                palindrom_s.erase(remove(palindrom_s.begin(), palindrom_s.end(), c), palindrom_s.end());
            }
        }
        cout<<palindrom_s<<endl;
        // Check if the string is a palindrome
        int last = palindrom_s.length();
        int mid = last / 2;
        cout<<"mid:"<<mid<<endl;         
        int last_index = last - 1;
        // cout<<"last_index:"<<last_index<<endl;
        int first = 0;
        cout<<first<<" "<<last_index<<endl;
        while(first <= mid && last_index >= 0){
            if(palindrom_s[first] == palindrom_s[last_index]){
                first += 1;
                last_index -= 1;
            }
            else{
                break;
            }
        }
        // for(first = 0; first <= mid + 1; first++){
        //     if(palindrom_s[first] == palindrom_s[last_index]){
        //          last_index -= 1;
        //     }
               
        // }
        cout<<first<<" "<<last_index<<endl;
        // If first and last indices meet or cross, it is a palindrome
        if(first == last_index || first > last_index){
            return true;
        }
        else{
            return false;
        }
        
    }
};


int main(){
    Solution solution;
    string s = "A man, a plan, a canal: Panama"; // Example input string
    // string s1 = "race a car"; // Another example input string
    // string s2 = " "; // Empty string case
    // Uncomment the following line to test with a different string     
    // string s2 = "Not a palindrome";
    // You can change the input string to test other cases
    // Call the function to check for palindrome
    bool result = solution.isPalindrome(s); // Call the function to check for palindrome
    cout<< "Is the string \"" << s << "\" a palindrome? " 
        << (result ? "Yes" : "No") << endl; // Output the result
    return 0;
}