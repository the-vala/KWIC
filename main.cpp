#include <iostream>

class AbstractWordsContainer {
public:
    AbstractWordsContainer () {}
};

class VectorWords : public AbstractWordsContainer {
public:
    VectorWords () {}
};

class InputProcessor {
public:
    InputProcessor () {}

};

class STDIOInput : public InputProcessor {
public:
    STDIOInput () {}
};

class FileIOInput : public InputProcessor {
public:
    FileIOInput () {}
};

class AbstractWordsProcessor {
public:
    AbstractWordsProcessor () {}
};

class WordsProcessor : public AbstractWordsProcessor {
public:
    WordsProcessor () {}
};

class AbstractRotationProcessor {
public:
    AbstractRotationProcessor () {}
};

class RotationProcessor : public AbstractRotationProcessor {
public:
    RotationProcessor () {}
};

class Sort {
public:
    Sort () {}
};

class SortMethod : public Sort {
public:
    SortMethod () {}
};

class MergeSort : public Sort {
public:
    MergeSort () {}
};

class OutputProcessor {
public:
    OutputProcessor () {}
};

class STDIOOutput : public OutputProcessor {
public:
    STDIOOutput () {}
};

class FileIOOutput : public OutputProcessor {
public:
    FileIOOutput () {}
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}