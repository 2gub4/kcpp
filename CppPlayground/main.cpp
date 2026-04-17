#include <iostream>


int main() {
    std::cout<<"Welcome to ExcerciseHub. A place where you can access all my c++ projects and excercises\n";

    int choice;
    do {
        std::cout<<"Choose valid option: "<<std::endl;
        std::cout<<"\t1 - Main Function\t2 - Function output\n"
                   "\t3 - Pointers\t 4 - IO\n\t5 - Classes"
                   "\t6 - Revision\n\t7 - Compilation"
                   "\n\t0 - Exit\n"
        <<std::endl;
        std::cin>>choice;
        std::cout<<"Entering option "<<choice<<"\n\n"<<std::endl;
        switch (choice) {
            case 1: 
                std::cout<<"Zadanie1 dsohsdvnsdoisbdbzd"<<std::endl;
                break;
            case 2: 
            std::cout<<"Zadanie2 dvsdahvishvbskjdvbsdvhotjhn"<<std::endl;
        }
    } while (choice != 0);
    std::cout<<"Exiting program..."<<std::endl;
}