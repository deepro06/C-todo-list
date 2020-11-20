#include <iostream>
#include <string>

using namespace std;
int main()
{   
    int length;
    cout <<"        ***** Todo List *****         " << endl;
    cout <<"How many task do you want to assign"<< endl;
    cin >> length;
    string Todo[length];

    for(int i = 0; i < length; i++)
    {
        cout << "Enter task " << i + 1 << ":- " << endl;
        cin >>  Todo[i];
    }

    cout << "_______________________________________________________________________" << endl;

    for(int i = 0; i < length; i++)
    {
        cout << "("<<i + 1 << ") " << Todo[i] << "\n";
    }

    cout <<" "<< endl;
    cout <<"__________";

    system("pause");

    return 0;
}