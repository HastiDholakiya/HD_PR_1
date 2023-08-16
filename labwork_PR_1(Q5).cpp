//public example

#include <iostream>
using namespace std;

class Sample {

   public:
    int age;

};

int main() {

    Sample h1;

    cout << "Enter your age: ";
    cin >> h1.age;

    cout << "age : " << h1.age;

    return 0;
}


//private example

#include <iostream>
using namespace std;

class Sample {
    private:
    int age;

};

int main() {

    Sample h1;

    cout << "Enter your age: ";
    cin >> h1.age;

    cout << "age : " << h1.age;

    return 0;
    
}
