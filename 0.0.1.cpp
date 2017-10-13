#include "iostream"
using namespace std;

int main()
{
    char txt;
    std::string str;
    do{
        txt = std::cin.get();
        if (txt == ' '){
            str += "%20";}
        else{str+=txt;
            }
      } while (txt != '\n');
    std::cout << str << std::endl;
    system("pause");
    return 0;
}
