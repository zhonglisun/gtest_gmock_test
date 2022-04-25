#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;
    

class person
{
public:
    person(/* args */) {}
    virtual ~person() {}
    virtual void setName(string &name) = 0;
    virtual string getName() = 0;

};



#endif