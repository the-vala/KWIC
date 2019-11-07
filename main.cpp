#include <iostream>

class AbstractWordsContainer {
    AbstractWordsContainer () {};
};

class VectorWords : public AbstractWordsContainer {

};

class InputProcessor {
    InputProcessor () {};
    
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}