#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

template <typename T>    // no need to worry about this; Mr. Vu is using this to make teaching easier
void displayList(std::vector<T> const &v);

int main()
{
    // You can follow along with any code in class here
    int x = 6;
    double y = 6.5;
    std::string name = "vroom";

    // list of ints named jennys w 7 elements
    std::vector<int> jennys = {8,6,7,5,3,0,9};
    std::vector<double> vro = {3.2,5.5};
    std::vector<std::string> words = {"hello","darkness","my","old","friend"};
    // cannot std::cout << words
    std::cout << "The list is ";
    //procedure
    displayList(words);
    

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