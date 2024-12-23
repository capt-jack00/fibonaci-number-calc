#include <vector>
#include <iostream>

using namespace std;

int main(){
    int n1 = 0; 
    int n2 = 1; 
    int lenght;
    float fibLenght;
    vector <int> fibnum;

    cout << "Enter a lenght for a fibbonaci number: ";
    cin >> lenght;
    fibLenght = lenght /2;

    for (int i = 0; i < fibLenght; i++)
    {   
        fibnum.push_back(n1);
        fibnum.push_back(n2);
        n1 = n1 + n2;
        n2 = n2 + n1;
        
        
    }

    cout << "The fibbonaci number with a lenght of " << lenght << " is: " << endl;
    for (int i = 0; i < fibnum.size(); i++)
    {
        cout << fibnum[i] << ", ";
        
    }
    cout << "" << endl;
    

    return 0;
}
