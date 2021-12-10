// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.211028.7

#pragma once
#include "winrt/rt_CPlusToCSharp.h"
namespace winrt::rt_CPlusToCSharp::implementation
{
    template <typename D, typename... I>
    struct __declspec(empty_bases) Test_base : implements<D, rt_CPlusToCSharp::Test, I...>
    {
        using base_type = Test_base;
        using class_type = rt_CPlusToCSharp::Test;
        using implements_type = typename Test_base::implements_type;
        using implements_type::implements_type;
        
        hstring GetRuntimeClassName() const
        {
            return L"rt_CPlusToCSharp.Test";
        }
    };
}
namespace winrt::rt_CPlusToCSharp::factory_implementation
{
    template <typename D, typename T, typename... I>
    struct __declspec(empty_bases) TestT : implements<D, winrt::Windows::Foundation::IActivationFactory, I...>
    {
        using instance_type = rt_CPlusToCSharp::Test;

        hstring GetRuntimeClassName() const
        {
            return L"rt_CPlusToCSharp.Test";
        }
        auto ActivateInstance() const
        {
            return make<T>();
        }
    };
}

#if defined(WINRT_FORCE_INCLUDE_TEST_XAML_G_H) || __has_include("Test.xaml.g.h")
#include "Test.xaml.g.h"
#else

namespace winrt::rt_CPlusToCSharp::implementation
{
    template <typename D, typename... I>
    using TestT = Test_base<D, I...>;
}

#endif