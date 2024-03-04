#include <iostream>
using namespace std;

int main() {
    int i = 50,so ;
    cout <<"nhap so; ";
    cin >> so;
    

    while (i <=so  ) {
        cout << i << "\n";
        i++;
    }
    do
    {
        cout << i << " ";
        i++;
    } while (i <= so);
    return 0;
}
