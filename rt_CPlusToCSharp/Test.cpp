#include "pch.h"
#include "Test.h"
#include "Test.g.cpp"

namespace winrt::rt_CPlusToCSharp::implementation {

#pragma region C++
    class ListenerImpl : public CPlusDLL::Listener {
    public:
        ListenerImpl(Test* test) : test_(test) {}
        void onError(int msg) final {}
        void onShow(int msg) final {
            test_->onShowEvent_(*test_, msg);
        }
        int onWarning(int a, int b) final {
            test_->onRecognitionEventEx_(a, b);
            return 0;
        }

    private:
        Test* test_;
    };
#pragma endregion

    ListenerImpl* listenerImpl_ = nullptr;

    Test::Test() {
        cplusDll_ = new CPlusDLL::CPlusDll_Class();
        listenerImpl_ = new ListenerImpl(this);
        cplusDll_->setListener(listenerImpl_);
    }

    Test::Test(winrt::Windows::Storage::StorageFile const& file) {
        throw hresult_not_implemented();
    }

    Test::Test(hstring const& para1, hstring const& parab) {}

    int32_t Test::MyProperty() {
        return sum;
    }

    void Test::MyProperty(int32_t value) {
        sum = value;
        cplusDll_->CPlusDll_Show(value);
    }

    float Test::SepiaIntensity() {
        throw hresult_not_implemented();
    }

    int32_t Test::Add(int32_t a, int32_t b) {
        return cplusDll_->CPlusDll_Add(a, b);
    }

    winrt::Windows::Foundation::IAsyncAction Test::StartRecognitionAsync() {
        throw hresult_not_implemented();
    }

    winrt::event_token Test::OnInitialized(winrt::rt_CPlusToCSharp::InitializedDelegate const& handler) {
        return onInitilizedEvent_.add(handler);
    }
    void Test::OnInitialized(winrt::event_token const& token) noexcept {
        onInitilizedEvent_.remove(token);
    }

    winrt::event_token Test::ImageRecognized(winrt::rt_CPlusToCSharp::RecognitionHandler const& handler) {
        return onRecognitionEvent_.add(handler);
    }
    void Test::ImageRecognized(winrt::event_token const& token) noexcept {
        onRecognitionEvent_.remove(token);
    }

    winrt::event_token Test::ImageRecognizedEx(winrt::rt_CPlusToCSharp::RecognitionHandlerEx const& handler) {
        return onRecognitionEventEx_.add(handler);
    }
    void Test::ImageRecognizedEx(winrt::event_token const& token) noexcept {
        onRecognitionEventEx_.remove(token);
    }

    winrt::event_token Test::OnShow(winrt::Windows::Foundation::EventHandler<int32_t> const& handler) {
        return onShowEvent_.add(handler);
    }
    void Test::OnShow(winrt::event_token const& token) noexcept {
        onShowEvent_.remove(token);
    }

    winrt::event_token Test::PropertyChanged(winrt::Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler) {
        return onPropertyChangedEvent_.add(handler);
    }
    void Test::PropertyChanged(winrt::event_token const& token) noexcept {
        onPropertyChangedEvent_.remove(token);
    }
} // namespace winrt::rt_CPlusToCSharp::implementation
