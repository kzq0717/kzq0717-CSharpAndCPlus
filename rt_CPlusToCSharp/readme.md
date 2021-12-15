
1.rt_CPlusToCSharp.dll  ARM/ARM64/X64(Debug/Release)
2.namespace rt_CPlusToCSharp
3.包含内容
 - 类  :Test
 - 事件:OnShow(object sender, int e)   e:回调返回值
 - 属性:MyProperty
 - 方法:Add(int a,int b)
4.调用
 ```
 	rt_CPlusToCSharp.Test test = new rt_CPlusToCSharp.Test();
 	test.OnShow += Test_TestEvent;#注册回调
 	test.MyProperty = 20;#为字段赋值后，通过回调返回所赋值
 	int sum = test.Add(20, 20);#调用方法
 ```
