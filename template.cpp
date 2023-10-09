#include<iostream>

template <typename T>

T maximum(T a, T b){
    return (a>b) ? a:b;
}

int main(){
    
    int a{7}, b{5};
    double c{3.4},d{10.6};
    
    #std::string e{"Let's check"},f{"string type template"};
    
    int result = maximum(a,b);
    
    return 0;
}