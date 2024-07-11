#include<variant>

class MyNormalClass 
{
    public:
        MyNormalClass(int value);
 
        int m_Value{};

    friend std::ostream& operator<<(std::ostream& os, const MyNormalClass& obj);

    int getMemberValue();
};

class MyExplicitClass 
{
    public:
    
    explicit MyExplicitClass(int value);
    int m_Value{};

    friend std::ostream& operator<<(std::ostream& os, const MyExplicitClass& obj);

    int getMemberValue();
};

using MyClassVariant = std::variant<MyNormalClass, MyExplicitClass>; 

void foo(MyClassVariant& var);
