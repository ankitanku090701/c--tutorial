#include <iostream>

using namespace std;

class emp {
    protected:
        int salary;
};

class pro: public emp {
    public:
        int bonus;
        void setSalary(int s) {
            salary = s;
        }
        int getSalary() {
            return salary;
        }
};

int main () {
    pro obj1;
    obj1.setSalary(50000);
    obj1.bonus = 10000;
    cout << "Salary: " << obj1.getSalary() << endl;
    cout << "Bonus: " << obj1.bonus << endl; 
    return 0;
}