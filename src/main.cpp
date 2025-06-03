#include "enviroment.cpp"


//#include "interpreter.cpp"  
// #include "lexer.cpp"
// #include "parser.cpp"
//#include "analyzer.cpp"
// #include "executor.cpp"
#include <iostream>
#include <fstream> 
#include <sstream>
#include <string> 
#include <iostream>
// #include <vector> 
// #include <array>
// #include <map> 
// #include <regex> 
// #include <algorithm>
// #include <set>
// #include <memory>
// #include <stack>
// #include <queue>

// #include "vector.cpp"

bool readfile(std::string filename, std::string &str){
    std::fstream file(filename, std::ios::in);
    if (!file) {
        std::cerr << "Error opening file!" << std::endl;
        return 0;
    }
    std::ostringstream buffer;
    buffer << file.rdbuf();
    str = buffer.str();
    file.close();
    return 1;
}

int main(int argc, char* argv[]){
    if(argc<2) {
        std::cerr << "Error no path argument!" << std::endl;
        return 1;
    }
    std::string code;
    if(!readfile(argv[1], code)) return 2;

    std::cout<<"\nDONE";
    return 0;
}

