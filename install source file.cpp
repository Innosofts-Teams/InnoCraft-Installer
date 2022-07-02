#include <iostream>
using namespace std;

int main(int argc, char** argv){
    cout << "请选择语言 please select language";
    cout << "1是中文 2 is English" << endl << "请输入(please input): ";
    int install_language;
    cin >> install_language;
    if (install_language == 1)
    {
        cout << "成功，语言为中文";
    }    
   else if(install_language == 2)
   {
    cout << "Successful,The language is English";
     
    }
    else{
     cout << "error:5806";
     
     }
    return 0;
  }
