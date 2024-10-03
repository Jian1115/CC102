#include <iostream>
using namespace std;

int main()
{
    string nickname,course,school;
    
    cout << "Nickname:";
    cin >> nickname;
    cout << "Course-Year Level:";
    cin >> course;
    cout << "School:";
    cin >> school;
    
    cout << "Wow Congrats " << nickname << "! " << course << " is nice course. And you are studying in " << school << " which is the one of the Center of Exellence in Tertiary Education " << endl;
    
    return 0;
}
