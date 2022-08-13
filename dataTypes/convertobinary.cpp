#include <iostream>

main(){

   int number= 23;
   int binary[32];
    int i =0;
   while(number > 0){
     binary[i] = number % 2;
     number = number /2;
     i++;
   }
   
  for(int i=0 ; i <32; i++ ){
            std::cout << binary[i];
    }
    
  }


