#include <iostream>

int addnumbers(int a , int b){
    return a +b;
}


int main(){
    //in c++ every statment must have semicolon end of that

        int value = 2;
        int value_from_function;
        value_from_function = addnumbers(2,3); // addnumbers are retures int type varible

        std::cout << "my value is : " << value << std::endl;
        std:: cout << "my value from function is " << value_from_function ; // output 5
        return 0;
}

