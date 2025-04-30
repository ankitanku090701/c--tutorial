#include <iostream>

using namespace std;

class emp {
    private:
        int salary;

    public: 
        void setSalary(int s) {
            salary = s;
        }

        int getSalary() {
            return salary;
        } 
};

int main () {
    emp obj1;
    obj1.setSalary(50000);
    cout << obj1.getSalary() << endl;
    return 0;
}