#ifndef BRAINFUCK_INTERPRETER_PLUS_H
#define BRAINFUCK_INTERPRETER_PLUS_H
#include "Instruction.h"

class Plus:public Instruction{ // +
public:
    void setIndex(__attribute__((unused)) const std::size_t& index) override {};
    void execute (Controller& controller) override { controller.memory.increment_value(); }
};


#endif //BRAINFUCK_INTERPRETER_PLUS_H
