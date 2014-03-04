//
//  PrecondViolatedExcep.h
//  Heaps
//
//  Created by Lina on 3/3/14.
//  Copyright (c) 2014 Lina. All rights reserved.
//

#ifndef Heaps_PrecondViolatedExcep_h
#define Heaps_PrecondViolatedExcep_h

#include <stdexcept>
#include <string>

using namespace std;
class PrecondViolatedExcep: public exception
{
public:
    PrecondViolatedExcep(const string& message = "")
    : exception("Heap is empty: " + message.c_str())
    {
    }
};;

#endif
