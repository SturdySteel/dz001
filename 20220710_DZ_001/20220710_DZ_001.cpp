#include <iostream>
#include "Drob.h"

void showResult(std::string mes, char sign, Drob& a, Drob& b, Drob res)
{    
    std::cout << mes << a.getNum() << "/" << a.getDenom() << ' ' << sign << ' ';
    std::cout << b.getNum() << "/" << b.getDenom() << " = ";
    std::cout << res.getNum() << "/" << res.getDenom();
    std::cout << '\n';
}

int main()
{
    setlocale(LC_ALL, "ru");

    Drob a{ 3,4 };
    Drob b{ 5,6 };
    
    showResult("�������� ������: ", '+', a, b, a.addFractions(b));
    showResult("��������� ������: ", '-', a, b, a.subFractions(b));
    showResult("��������� ������: ", '*', a, b, a.multFractions(b));
    showResult("������� ������: ", '/', a, b, a.divFractions(b));
        
    return 0;
}
