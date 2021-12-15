using System.Diagnostics;
using Windows.UI.Xaml.Controls;

namespace App2_CSharp
{
    public sealed partial class MainPage : Page
    {
        public MainPage()
        {
            this.InitializeComponent();
            rt_CPlusToCSharp.Test test = new rt_CPlusToCSharp.Test();
            test.OnShow += Test_TestEvent;
            test.OnInitialized += Test_OnInitialized;
            //test.ImageRecognized += Test_ImageRecognized;
            //test.ImageRecognizedEx += Test_ImageRecognizedEx;
            test.MyProperty = 20;
            int sum = test.Add(20, 20);
            //this.tbox_content.Text = sum.ToString();
        }

        private void Test_OnInitialized(rt_CPlusToCSharp.Error error, rt_CPlusToCSharp.Params args)
        {

        }

        private int Test_ImageRecognizedEx(int a, int b)
        {
            Debug.WriteLine($"a:{a} b:{b}");
            return 10000;
        }

        private void Test_ImageRecognized(bool arg)
        {
        }

        private int useDelegate(int a, int b)
        {
            return a + b;
        }

        private void Test_TestEvent(object sender, int e)
        {
            this.tbox_content.Text = e.ToString();
            Debug.WriteLine(e.ToString());
        }

        private void Temperature_Click(object sender, Windows.UI.Xaml.RoutedEventArgs e)
        {

        }
    }
}
