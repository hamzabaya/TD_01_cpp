#include <iostream>
#include "my_class.hpp" 

using namespace std;

int main(){
    My_class v;
    v.print_my_element();

    My_class v2("Hello !");
    v2.print_my_element();

    return 0;
}