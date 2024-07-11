#include<iostream>

#include "explicitKeyWord.h"


MyNormalClass::MyNormalClass(int value)
{
    std::cout << __func__ << " " << value << std::endl;
    m_Value = value;
}

std::ostream& operator<<(std::ostream& os, const MyNormalClass& obj)
{
    os << "MyClassNormal: Value: " << obj.m_Value << "\n";
    return os;
}

int MyNormalClass::getMemberValue()
{
    return m_Value;
}


MyExplicitClass::MyExplicitClass(int value)
{
    std::cout << __func__ << " " << value << std::endl;
    m_Value = value;
}


std::ostream& operator<<(std::ostream& os, const MyExplicitClass& obj)
{
    os << "MyClassExplicit: Value: " << obj.m_Value << "\n";;
    return os;
}

int MyExplicitClass::getMemberValue()
{
    return m_Value;
}

void foo(MyClassVariant& var)
{
   if(std::holds_alternative<MyNormalClass>(var))
   {
    std::cout << "MyClassNormal: Value: " << std::get<MyNormalClass>(var) << "\n";
   }
   else
   {
     std::cout << "MyClassExplicit: Value: " << std::get<MyExplicitClass>(var) << "\n";;
   }
}
