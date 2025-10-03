#include <iostream>
using namespace std;
class Numpy
{
private:
    int n, n1[n], n2[n], number;

public:
    Numpy() {}

    void take_input()
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> n1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> n2[i];
        }
        cin >> number;
    }
    void add(int n1[], int n2[], int size)
    {
        int final[size];
        for (int i = 0; i < size; i++)
        {
            final[i] = n1[i] + n2[i];
        }
        for (int i = 0; i < size; i++)
        {
            cout << final[i] << " ";
        }
        cout << endl;
    }
    void add(int n1[], int num, int size)
    {
        int final[size];
        for (int i = 0; i < size; i++)
        {
            final[i] = n1[i] + 50;
        }
        for (int i = 0; i < size; i++)
        {
            cout << final[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Numpy numpy;
    numpy.take_input();
    numpy.add(numpy.n1, numpy.n2);
    numpy.add(numpy.n1, numpy.number);
}