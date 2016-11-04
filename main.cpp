#include <iostream>
#include <fstream>
#include <algorithm>

int arr[301][301] = {};
int peopleWeight[301];

int buses, capacity, people;

int main()
{
    std::ifstream in("c.in");
    std::ofstream out("c.out");

    in >> buses >> capacity >> people;

    for (int i = 1; i < people + 1; ++i)
    {
        in >> peopleWeight[i];
    }
    int put, leave;
    put = 0;
    leave = 0;

    for (int bus = 0; bus < buses; ++bus)
    {
        for (int j = 1; j < people + 1; ++j)
        {
            for (int k = 0; k < capacity + 1; ++k)
            {
                put = 0;
                if (k - peopleWeight[j] >= 0)
                    put = arr[j - 1][k - peopleWeight[j]] + 1;
                leave = std::max(arr[j - 1][k], arr[j][capacity]);
                arr[j][k] = std::max(put, leave);
            }
        }
    }

    out << arr[people][capacity];
}
