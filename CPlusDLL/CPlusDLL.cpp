#include"pch.h"
#include"CPlusDLL.h"
#include <string.h>
#include<stdlib.h>
#include<stdio.h>

int CPlusDll_Class::CPlusDll_Add(int a, int b)
{
    this->listener_->onError((a + b));
    return (a + b);
}

int CPlusDll_Class::CPlusDll_Sub(int a, int b)
{
    return (a - b);
}
