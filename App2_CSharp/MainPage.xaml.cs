using System;
using System.Runtime.InteropServices;
using Windows.UI.Xaml.Controls;
using Windows.Storage;
using static System.Net.Mime.MediaTypeNames;
using System.Diagnostics;
using Windows.UI.Xaml.Controls.Primitives;

namespace App2_CSharp
{
    public sealed partial class MainPage : Page
    {
        public MainPage()
        {
            this.InitializeComponent();
            rt_CPlusToCSharp.Test test = new rt_CPlusToCSharp.Test();
            test.TestEvent += Test_TestEvent;
            test.MyProperty = 20;
        }

        private void Test_TestEvent(object sender, int e)
        {
            Console.WriteLine(e.ToString());
        }

        private void Temperature_Click(object sender, Windows.UI.Xaml.RoutedEventArgs e)
        {

        }
    }

}
