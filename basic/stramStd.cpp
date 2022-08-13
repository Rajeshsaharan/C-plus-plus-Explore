#include <iostream>

main(){

    // std:: count << gives output to terminal console
    // std :: cerr << gives error or terminal
    // std :: clog << gives logs on terminal
    //std :: cin >> take data from terminal

// example
 std::string name;
 std :: cout << "what is your name " << std ::endl;
 std::getline (std :: cin, name);  //take string value with space
 std :: cout << "your name is " << name << std :: endl ;

}