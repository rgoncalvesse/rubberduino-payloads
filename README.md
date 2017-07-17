# Rubberduino-Payloads

Payload scripts for arduino (Atmega32U4), inspired by Rubber Ducky.

## Documentation

##### Installation of library

Installation below is explained using a GNU/Linux system. You can use a similar way or using copy/paste with anoter OS.

Clone the repository :

> git clone http://github.com/binary550/rubberduino-payloads

Create a link from lib/src to @arduinopath/libraries :

> ln -s rubberduino-payloads/lib/src @arduinopath/libraries/

> ln -s rubberduino-payloads/lib/library.properties @arduinopath/libraries/

##### Commands provided by library

To print a character, word or sentence, and press ENTER :

> Wopen_exec(command)

To launch a program using Win+R :

> Wopen_winr_r(command)

To launch a program using start menu (if Win+R is disabled) :

> Wopen_start_menu(command)

To launch a program as administrator ! :

> Wopen_administrator(command)

More example are available in payloads.

##### Payloads

Payloads exist in root project. Read and modify what you need !

