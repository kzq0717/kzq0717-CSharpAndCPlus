//
// MainPage.xaml.h
// MainPage 类的声明。
//

#pragma once

#include "MainPage.g.h"

namespace App1
{
    /// <summary>
    /// 可用于自身或导航至 Frame 内部的空白页。
    /// </summary>
    public ref class MainPage sealed
    {
    public:
        MainPage();
    private:
        Platform::String^ stops(std::string s);
        std::wstring stows(std::string s);
    };
}
