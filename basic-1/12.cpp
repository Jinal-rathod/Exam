#include <iostream>
using namespace std;

int main()
{
    int ages[8] = {20, 22, 18, 35, 48, 26, 87, 70};
    int sum = 0;
    float length = sizeof(ages) / sizeof(ages[0]);
    for (int age : ages)
    {
        sum += age;
    }
    float avg = sum / length;
    cout << avg;

    return 0;
}