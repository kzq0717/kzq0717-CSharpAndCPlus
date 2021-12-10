#pragma once

#include "Test.g.h"
#include "CPlusDLL.h"

namespace winrt::rt_CPlusToCSharp::implementation
{
    struct Test : TestT<Test>
    {
        Test();
        int32_t MyProperty();
        void MyProperty(int32_t value);
#pragma region Event
        winrt::event_token TestEvent(winrt::Windows::Foundation::EventHandler<int32_t> const& handler);
        void TestEvent(winrt::event_token const& token) noexcept;

        winrt::event<Windows::Foundation::EventHandler<int32_t>>testEvent_;
#pragma endregion
    private:
        CPlusDll_Class* cplusDll_;
        int32_t sum{ 0 };
    };
}

namespace winrt::rt_CPlusToCSharp::factory_implementation
{
    struct Test : TestT<Test, implementation::Test>
    {
    };
}
