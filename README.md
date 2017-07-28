# Rubberduino-Payloads

Payload scripts for arduino (Atmega32U4), inspired by Rubber Ducky.

## Documentation

### Exec_batch

Exec_batch allow you to launch your own batch script from a usb flash drive.

Create a partition with fat32, with the label "MyLittlePONEY".

Plug this flash drive before to plug the RubberDuino.

### Installation of library

Installation below is explained using a GNU/Linux system. You can use a similar way or using copy/paste with anoter OS.

Clone the repository :

> git clone http://github.com/binary550/rubberduino-payloads

Create a link from lib/src to @arduinopath/libraries :

> ln -s rubberduino-payloads/lib/src @arduinopath/libraries/

> ln -s rubberduino-payloads/lib/library.properties @arduinopath/libraries/

### Payloads

Payloads are located in root project. Read and modify what you need !

