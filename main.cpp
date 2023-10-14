#include<iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    string answer;
    cout << "R:Hi!" << endl << "H:";
    cin >> answer;
    switch(answer)
    {
    case "Hi":
        cout << "R:Nice way to start conversation!";
    case "Screw you!":
        {
            cout << "R:Rude answer!";
        }
    case "Shut up!":
        {
            cout << "R:Ok, ok, shutting down." << endl;
            exit(0);
        }
    }
    cout << "R:How are you?" << endl << "H:";
    cin >> answer;
    switch(answer)
    {
    case "Fine":
        cout << "R:That's very good!";
    case "Screw you!":
        {
            cout << "R:I am the reason?" << "H:";
            cin << answer;
            switch(answer)
            {
            case "Yes":
                cout << "R:You can solve your mental problem by talking with your family of friends."
                 << endl <<"I think thats a good idea, isn't it?" <<
                 endl << "Thats all i can say, bye!" << endl;
                 exit(0);
            }
            case "No":
                cout << "R:That's very good!"
    cout << "R:How was your day?" << endl << "H:";

}
