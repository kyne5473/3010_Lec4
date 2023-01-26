#include "functions_to_implement.cpp"
#include <iostream>
#include <vector>

int main(){
	std::vector<int> a = { 1, 2, 3, 4, 5, 6 };
	std::cout << Sum(a) << std::endl; //21
	std::cout << NthFibonacci(7) << std::endl; //13
    //std::cout << RemoveTwos(16);
}