// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.211028.7

void* winrt_make_rt_CPlusToCSharp_Test()
{
    return winrt::detach_abi(winrt::make<winrt::rt_CPlusToCSharp::factory_implementation::Test>());
}
WINRT_EXPORT namespace winrt::rt_CPlusToCSharp
{
    Test::Test() :
        Test(make<rt_CPlusToCSharp::implementation::Test>())
    {
    }
}