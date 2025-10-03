#include <iostream>
using namespace std;
int helper(int number)
{
    int arr[10], num = 0, idx = 0, total = 0;
    while (number > 0)
    {
        num = number % 10;
        number /= 10;
        arr[idx] = num;
        idx++;
    }
    for (int i = 0; i < idx; i++)
    {
        total += arr[i] * arr[i];
    }
    return total;
}
bool FindHappiness(int number)
{
    int check = number;
    while (check >= 10)
    {
        check = helper(check);
        cout << check<< endl;
    }
    return check == 1;
};
int main()
{
    int number = -1;
    while (number < 0)
    {
        cout << "Give a number: ";
        cin >> number;
    }
    bool flag = FindHappiness(number);
    flag ? cout << "Happy Number" : cout << "Sad Number";
    return 0;
}