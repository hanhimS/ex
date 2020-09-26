#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

class Student
{
public:
    Student(const string& n) : m_name(n) { };
    const string& name() { return m_name; };
    auto setK() {
        return setKorean;
    };
    auto setE() {
        return setEnglish;
    };
    auto setM() {
        return setMath;
    };
    int getTotal() {
        int sum;
        sum = setKorean + setEnglish + setMath;
        return sum;
    };

    float getAverage() {
        int sum;
        sum = setKorean + setEnglish + setMath;
        float average;
        average = sum / 3;
        return average;
    };
 
private:
    string m_name;
    int setKorean = 85;
    int setEnglish = 80;
    int setMath = 95;
};


int main() {
    Student s1("tom");
   

    cout << "a =" << s1.setK() << endl;
    cout << "b =" << s1.setE() << endl;
    cout << "c =" << s1.setM() << endl;
    cout << "total: " << s1.getTotal() << endl;
    cout << "average: " << s1.getAverage() << endl;


    return 0;
}