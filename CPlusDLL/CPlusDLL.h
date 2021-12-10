#pragma once
#include<iostream>
#include<string>
using namespace std;

#ifdef API
#define API /* __declspec(dllexport)*/
#else
#define API 
#endif


#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

    class API Listener {
    public:
        virtual void onError(int msg) = 0;
    };

    class API CPlusDll_Class
    {
    public:
        void setListener(Listener* listener) {
            listener_ = listener;
        }
        int CPlusDll_Add(int a, int b);
        int CPlusDll_Sub(int a, int b);
    private:
        Listener* listener_;
    };

#ifdef __cplusplus
}
#endif // __cplusplus
