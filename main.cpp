#include <iostream>
using namespace std;


int main()
{
    char condition;
    // this program is calling "Should I pull for Mavuika ?"
    cout << "Do you want to use this program [Y/N] : ";
    cin >> condition;
    if(condition=='Y'){
        cout << "Do you have any fire damage ? [Y/N] : ";
        condition = '\0';
        cin >> condition;
        if(condition=='Y'){
            cout << "You don't have to pull. Get the fuck outta here!";
        }
        else{
            cout << "Do you love Mavuika ? [Y/N] : ";
            condition = '\0';
            if(condition=='Y'){
                cout << "Go to fucking job and make some money! and fucking pull her!";
            }
            else{
                cout << "You don't have to pull. Get the fuck outta here!";
            }
        }
        
    }
    return 0;
}
