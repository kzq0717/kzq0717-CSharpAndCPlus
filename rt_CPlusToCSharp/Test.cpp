
#include "pch.h"
#include "Test.h"
#include "Test.g.cpp"

namespace winrt::rt_CPlusToCSharp::implementation
{
#pragma region C++
    class ListenerImpl :public Listener
    {
    public:
        ListenerImpl(Test* test) :test_(test) {}
        void onError(int msg) final {
            test_->testEvent_(*test_, msg);
        }
    private:
        Test* test_;
    };
#pragma endregion

    ListenerImpl* listenerImpl_ = nullptr;

    Test::Test() {
        cplusDll_ = new CPlusDll_Class();
        listenerImpl_ = new ListenerImpl(this);
        cplusDll_->setListener(listenerImpl_);
    }

    int32_t Test::MyProperty()
    {
        return sum;
    }

    void Test::MyProperty(int32_t value)
    {
        sum = value;
        cplusDll_->CPlusDll_Add(10, 20);
        //testEvent_(*this, value);
    }

    winrt::event_token Test::TestEvent(winrt::Windows::Foundation::EventHandler<int32_t> const& handler)
    {
        return testEvent_.add(handler);
    }
    void Test::TestEvent(winrt::event_token const& token) noexcept
    {
        testEvent_.remove(token);
    }

    //winrt::Windows::Foundation::IAsyncAction Test::Action(winrt::Windows::Foundation::DateTime value)
    //{
    //    throw hresult_not_implemented();
    //}

}
