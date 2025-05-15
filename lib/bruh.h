#ifndef BRUH_H
#define BRUH_H

namespace foo{
    int add(int a, int b);
}

#endif

/*
this could also be written as:


#pragma once
namespace foo{
int add(int a, int b);
}

but the "#pragma once" include guard is less poratble as opposed to ifndef used in this code 

*/