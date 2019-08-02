
#include <iostream>

namespace NamespaceD{
    namespace NamespaceD1{
        int x;
    }
}

namespace NamespaceE{

    class ClassE{
    public:
        class ClassE1{
        public:
            int x;
            ClassE1(){x = 10;}
        };
    };
}

using namespace std;
int main() {
    int y = 0;
    NamespaceD::NamespaceD1::x = 6;
    NamespaceE::ClassE::ClassE1 e1;
    
    y = NamespaceD::NamespaceD1::x * e1.x;

    cout << "the result of the multiplication is " << y << endl;

    return 0;
      
}

