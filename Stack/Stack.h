#pragma once

#include <string>
#include <iostream>

namespace My_stack {
    
    struct stack 
    {
        stack(int N);
        
		std::string* Front();
        void Push(std::string input);
        void Pop();
        int Size();
        int ContainedNumber();
        
        ~stack();

    private:
        int num_of_elem;
        int size_of_stack;
        std::string* elem;
    };
}