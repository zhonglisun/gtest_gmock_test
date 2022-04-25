#ifndef MOCKPERSON_H
#define MOCKPERSON_H

#include <gmock/gmock.h>

#include "person.h"

using namespace testing;
using namespace std;

class mockPerson
{

public:
    MOCK_METHOD0(getName, string());
    MOCK_METHOD1(setName, void(string&));
};



#endif