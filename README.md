# STMAudio

##MP3Player
With this project you can use your STM32f4 discovery board to play your favourite music. 

###Description 
This project uses the Helix mp3 decoder and other files from this [example](http://vedder.se/2012/12/stm32f4-discovery-usb-host-and-mp3-player/) made by [Benjamin](http://vedder.se/).


###Tools
[CooCox IDE](www.coocox.com) v1.7.8

[GNU ARM Toolchain](https://launchpad.net/gcc-arm-embedded) v4.9 2014q4

###How to run
To run this project you need to program the STM with the [released](https://github.com/PUT-PTM/STMAudio/releases) file, plug in an USB drive with a cable like [this](http://booki.flossmanuals.net/video-making-on-android/_draft/_v/1.0/offline-mobile-screenings/static/Micro%20USB%20cropped%20300.JPG)(make sure that there are mp3 files on it) and connect the headphones or speaker. Press the user button to play the next file.

###How to compile
Build the project with CooCox IDE and upload it to the STM32f4 discovery board. 

###Attributions 
This project is based upon the example from [here](http://vedder.se/2012/12/stm32f4-discovery-usb-host-and-mp3-player/) made by [Benjamin](http://vedder.se/). His example is based on other examples provided by STMicroelectronics.

###License 
MP3Player is released under the [MIT License](http://opensource.org/licenses/MIT).

###Credits 
Project made by *Jakub Plebaniak*

*The project was conducted during the Microprocessor Lab course held by the Institute of Control and Information Engineering, Poznan University of Technology.*
