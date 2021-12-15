#pragma once

#include "CPlusDLL.h"
#include "Test.g.h"

namespace winrt::rt_CPlusToCSharp::implementation {
    struct Test : TestT<Test> {
        Test();
        Test(winrt::Windows::Storage::StorageFile const& file);
        Test(hstring const& para1, hstring const& parab);
        int32_t MyProperty();
        void MyProperty(int32_t value);
        int32_t Add(int32_t a, int32_t b);
        float SepiaIntensity();
        winrt::Windows::Foundation::IAsyncAction StartRecognitionAsync();

#pragma region Event
        winrt::event_token OnInitialized(winrt::rt_CPlusToCSharp::InitializedDelegate const& handler);
        void OnInitialized(winrt::event_token const& token) noexcept;

        winrt::event_token ImageRecognized(winrt::rt_CPlusToCSharp::RecognitionHandler const& handler);
        void ImageRecognized(winrt::event_token const& token) noexcept;

        winrt::event_token ImageRecognizedEx(winrt::rt_CPlusToCSharp::RecognitionHandlerEx const& handler);
        void ImageRecognizedEx(winrt::event_token const& token) noexcept;

        winrt::event_token OnShow(winrt::Windows::Foundation::EventHandler<int32_t> const& handler);
        void OnShow(winrt::event_token const& token) noexcept;

        winrt::event_token PropertyChanged(winrt::Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler);
        void PropertyChanged(winrt::event_token const& token) noexcept;

        winrt::event<winrt::rt_CPlusToCSharp::InitializedDelegate> onInitilizedEvent_;
        winrt::event<Windows::Foundation::EventHandler<int32_t>> onShowEvent_;
        winrt::event<winrt::rt_CPlusToCSharp::RecognitionHandler> onRecognitionEvent_;
        winrt::event<winrt::rt_CPlusToCSharp::RecognitionHandlerEx> onRecognitionEventEx_;
        winrt::event<winrt::Windows::UI::Xaml::Data::PropertyChangedEventHandler> onPropertyChangedEvent_;
#pragma endregion
    private:
        CPlusDLL::CPlusDll_Class* cplusDll_;
        int32_t sum{ 0 };
    };
} // namespace winrt::rt_CPlusToCSharp::implementation

namespace winrt::rt_CPlusToCSharp::factory_implementation {
    struct Test : TestT<Test, implementation::Test> {};
} // namespace winrt::rt_CPlusToCSharp::factory_implementation
