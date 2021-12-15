#pragma once
#include<iostream>
#include<string>
#include <any>
using namespace std;

#ifdef API
#define API /* __declspec(dllexport)*/
#else
#define API 
#endif
#ifdef __cplusplus
extern "C" {
#endif // __cplusplus
    /*
    * 导出函数
    */
#ifdef __cplusplus
}
#endif // __cplusplus


namespace CPlusDLL {
    struct Error {
        int code = 0;
        std::string message;
        static std::shared_ptr<Error> SdkNotInit() noexcept {
            std::shared_ptr<Error> error = std::make_shared<Error>();
            error->code = 1000;
            error->message = "SDK not init";
            return error;
        }
        static std::shared_ptr<Error> NotPermission() noexcept {
            std::shared_ptr<Error> error = std::make_shared<Error>();
            error->code = 2001;
            error->message = "not support feature";
            return error;
        }
    };

    class API Listener {
    public:
        virtual void onError(int msg) = 0;
        virtual void onShow(int msg) = 0;
        virtual int onWarning(int a, int b) = 0;
    };

    class API CPlusDll_Class
    {
    public:
        void setListener(Listener* listener) {
            listener_ = listener;
        }
        int CPlusDll_Add(int a, int b);
        int CPlusDll_Sub(int a, int b);
        int CPlusDll_Show(int a);
    private:
        Listener* listener_;
    };
}
