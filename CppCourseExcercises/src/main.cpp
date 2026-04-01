#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

bool isStringEmpty(const std::string &in) {
    return in.empty();
}

void stringDimensions(const std::string &in) {
    std::cout<<"size of string: "<<in.size()<<"\n"
    "length of string: "<<in.length()<<"\nlength from size: "
    <<in.size()/8<<std::endl;
}

char stringAt(const std::string &in, int index) {
    return in.at(index);
}

void clearString(const std::string &in) {
    std::cout<<"initial string: "<<in<<std::endl;
}

std::string reverseString(std::string in) {
    std::ranges::reverse(in.begin(), in.end());
    return in;
}

void swapLetters(std::string a, std::string b) {
    std::cout<<"initial strings: \na=\""<<a<<"\"\tb=\""<<b<<"\""<<std::endl;
    std::swap(a, b);
}


int main() {
    std::cout<<"Zadania C++!\n\n"<<std::endl;
    swapLetters("aaaaaaaa", "bbbbbbbb");
    stringDimensions("bbbbbbbb");
    return 0;
}
