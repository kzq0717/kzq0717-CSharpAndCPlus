#include"pch.h"
#include"CPlusDLL.h"
#include <string.h>
#include<stdlib.h>
#include<stdio.h>

namespace CPlusDLL {
    int CPlusDll_Class::CPlusDll_Add(int a, int b)
    {
        this->listener_->onWarning(a, b);
        return (a + b);
    }

    int CPlusDll_Class::CPlusDll_Sub(int a, int b)
    {
        return (a - b);
    }

    int CPlusDll_Class::CPlusDll_Show(int a)
    {
        this->listener_->onShow(a);
        return a;
    }
}
