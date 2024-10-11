#include <iostream>
#include "my_class.hpp" 

using namespace std;

My_class::My_class():
a("2")
{}

My_class::My_class(string _value): a(_value){
}
    

void  My_class::print_my_element(){
    cout << "the value of the variable is :" << a <<endl;
}

