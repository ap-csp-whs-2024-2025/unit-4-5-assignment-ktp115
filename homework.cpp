#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

template <typename T>    // no need to worry about this; Mr. Vu is using this to make teaching easier
void displayList(std::vector<T> const &v);

int main()
{
    std::vector<int> num = {4,5,6,7,8,9,10};
    std::vector<double> doub = {10.14,8.23,3.14,6.4,11.15};
    std::vector<std::string> str = {"bing","bang","boom","bam","bow"};

    std::cout << num[0] << ", " << num[2] << ", " << num[4] << "\n";
    
    displayList(str);
    str.push_back("Katie");
    displayList(str);

    displayList(doub);
    doub.pop_back();
    displayList(doub);
    return 0;
}





// ignore everything down here
template <typename T>
void displayList(std::vector<T> const &v)
{
    if (v.empty())
    {
        std::cout << "[]\n";
        return;
    }

    std::cout << "[";
    for (int i = 0; i < v.size()-1; ++i)
    {
        std::cout << v[i] << ", ";
    }
    std::cout << v.back() << "]\n";
}