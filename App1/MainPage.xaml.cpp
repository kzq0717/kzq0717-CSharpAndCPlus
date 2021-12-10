//
// MainPage.xaml.cpp
// MainPage 类的实现。
//

#include "pch.h"
#include "MainPage.xaml.h"

using namespace App1;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;


using namespace Windows::Storage;

// https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x804 上介绍了“空白页”项模板

MainPage::MainPage()
{

    InitializeComponent();

    //int result3 = MyAddDLL3(999, 100);
    //char* result1 = eat3();
    //tbox_content->Text = result3.ToString();
    //std::string msg = result1;
    //tbox_content->Text = stops(msg);
    //free(result1);
}

Platform::String^ App1::MainPage::stops(std::string s)
{
    return ref new Platform::String(stows(s).c_str());
}

std::wstring App1::MainPage::stows(std::string s)
{
    std::wstring ws;
    ws.assign(s.begin(), s.end());
    return ws;
}
