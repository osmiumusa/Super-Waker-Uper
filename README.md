# Super-Waker-Upper
I wrote this app in conjunction with my blog post [here](http://undocumented-code.blogspot.com/2015/11/how-to-make-your-android-phone-really.html).
It requires a Blunonano Arduino board, Android Studio, and a Android Device running 4.0+ with BLE.

This app works by connecting to the Arduino and sending it a offset to send an IR Signal. It's a very simple app that isn't quite written to any quality standards.

This code inherits the GPLv3 liscense from [DFRobot's sample code](https://github.com/DFRobot/BlunoBasicDemo). I merely converted it to Android Studio and added logic to send it time data. Read the blog post for more information.

This project also uses code from [Android Examples](http://android--examples.blogspot.com/2015/04/timepickerdialog-in-android.html). 

The Arduino Code is also included in this repository. After you install the IR Library, you can upload it to your Blunonano.
