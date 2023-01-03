
#ifndef LISTA_SIMPLE_TEMPLATES_RUNTIMEEXCEPTION_H
#define LISTA_SIMPLE_TEMPLATES_RUNTIMEEXCEPTION_H

#include <iostream>

using namespace std;

class RuntimeException {
private:
    string errorMsg;
public:
    RuntimeException(const string& err){
        errorMsg = err;
    }
    string getMessage() const{
        return errorMsg;
    }
};
class StackEmpty : public RuntimeException {public:
    StackEmpty(const string& err): RuntimeException(err){

    }
};



#endif //LISTA_SIMPLE_TEMPLATES_RUNTIMEEXCEPTION_H
