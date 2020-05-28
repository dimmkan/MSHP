#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

using namespace std;
typedef istream_iterator<int> in_it;
typedef vector <int> v_int;

int main()
{
    int n, k;
    std::cin >> n >> k;

    int* arr = new int[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int* it1 = arr;
    int* it2 = arr + k - 1;
    int* min = nullptr;
    while (it2 != arr + n) {
        if (min >= it1) {
            min = *(it2) <= *min ? it2 : min;
        }
        else {
            min = std::min_element(it1, it2 + 1);
        }
        ++it1, ++it2;
        std::cout << *min << ' ';
    }

    delete[] arr;
    return 0;
}
