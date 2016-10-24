#include <utility>
#include <iostream>
#include <map>

using namespace std;

int main()
{
    // example with pair
    std::pair <int,int> foo;
    std::pair <int,int> bar;

    foo = std::make_pair (10,20);
    bar = std::make_pair (10.5,'A'); // ok: implicit conversion from pair<double,char>

    std::cout << "foo: " << foo.first << ", " << foo.second << '\n';
    std::cout << "bar: " << bar.first << ", " << bar.second << '\n';

    // example with map
    // example using begin()
    std::multimap < int, std::string > mmp { std::make_pair(2, "stackoverflow"), std::make_pair(1, "docs-beta"),std::make_pair(2, "stackexchange")};
    auto it = mmp.begin();
    std::cout << it->first << " : " << it->second << std::endl; // Output: "1 : docs-beta"
    it++;
    std::cout << it->first << " : " << it->second << std::endl; // Output: "2 : stackoverflow"
    it++;
    std::cout << it->first << " : " << it->second << std::endl; // Output: "2 : stackexchange"

    // example using rbegin()
    std::map < int, std::string > mp {  std::make_pair(2, "stackoverflow"),
                                        std::make_pair(1, "docs-beta"),
                                        std::make_pair(2, "stackexchange")  };
    auto it2 = mp.rbegin();
    std::cout << it2->first << " : " << it2->second << std::endl; // Output: "2 : stackoverflow"
    it2++;
    std::cout << it2->first << " : " << it2->second << std::endl; // Output: "1 : docs-beta"


    std::map < int,std::map<std::string,std::string> > translations;
    translations.insert(1,("alleviate","mildern"));
//  translations.insert(2,("pertinent","sachlich"));
//  translations.insert(3,("forfeit","einbüßen"));
//    translations[1]["value1"] = "data1";

/*
    auto itt = tranlations.begin();

    for(unsigned int i = 1; i<=2; i++) {
        std::cout << itt->first  + ": " << itt->second << std::endl;
        itt++;
    }
*/
    system("pause");

    return 0;
}
