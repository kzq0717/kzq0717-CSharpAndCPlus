// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.211028.7

#pragma once
#ifndef WINRT_Windows_Management_Update_2_H
#define WINRT_Windows_Management_Update_2_H
#include "winrt/impl/Windows.Management.Update.1.h"
WINRT_EXPORT namespace winrt::Windows::Management::Update
{
    struct __declspec(empty_bases) PreviewBuildsManager : winrt::Windows::Management::Update::IPreviewBuildsManager
    {
        PreviewBuildsManager(std::nullptr_t) noexcept {}
        PreviewBuildsManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Management::Update::IPreviewBuildsManager(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        static auto IsSupported();
    };
    struct __declspec(empty_bases) PreviewBuildsState : winrt::Windows::Management::Update::IPreviewBuildsState
    {
        PreviewBuildsState(std::nullptr_t) noexcept {}
        PreviewBuildsState(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Management::Update::IPreviewBuildsState(ptr, take_ownership_from_abi) {}
    };
}
#endif
