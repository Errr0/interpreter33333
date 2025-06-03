#include <queue>
#include <vector>
#include <variant>
#include <iostream>
#include <string>

using action_variant = std::variant<int, double, char, std::string>;

enum Actions{
    Return,
    AddVar,
    ReadVar
};

class Action{
    enum Actions type;
    std::vector<action_variant> args;
    public:
    Action(enum Actions type = Actions::Return, action_variant args = {}){

    }
    void print(){
        std::cout << "type: " << type;
        std::cout << ", args: ";
        for(action_variant arg: args){
            std::visit([](const auto& value) {
                std::cout << value << ", ";
            }, arg);
        }
        std::cout << "\n";
    }
};


class Executor{
    public:
    Executor(std::queue<Action> actions){
        
    }
};