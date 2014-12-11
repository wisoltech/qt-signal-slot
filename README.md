qt-signal-slot
==============

Overview
--------

This program demonstrate how QML and C++ can be connected through Qt signals
and slots.

When the program is started, the C++ part send a signal to QML, including a
parameter. This signal is only sent once. When the user clicks on the window
area, a signal is sent from QML to a C++ slot.

Watch the console output to see if it works.

Installation
------------

This program requires a working Qt5 installation. It was tested with version 5.3 and 5.4.

In order to compile and run the program, execute the following commands.

~~~
qmake signal_slot.pro
make
./signal_slot
~~~

Alternatively, the project can be loaded into Qt Creator and started from there.
