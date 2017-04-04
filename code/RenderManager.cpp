#include <iostream>
using namespace std;
class A{
    public:
    A(){
        cout << "A" << endl;
    }
    
    ~A(){
        cout << "~A" << endl;
    }
};

class B{
    public:
        B(){
        cout << "B" << endl;
    }
    
    ~B(){
        cout << "~B" << endl;
    }
    
    static B& get(){
        static B sSingleton;
        return sSingleton;
    }
    
};

A a;
int main(){
    
    cout << "Hello,World" << endl;
    B& b = B::get();
    return 0;
}