#include <Keyboard.h>

void setup() {
	
	/*
	for /f "tokens=3 delims= " %A in ('echo list volume ^| diskpart ^| findstr "DUCKY"') do (
	set DUCKYdrive=%A
	)
	*/

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

	Keyboard.print("for /f \"tokens=3 delims= \" %A in ('echo list volume ^");
	//Keyboard.print("|"); 
	Keyboard.press(KEY_RIGHT_ALT);
	Keyboard.print("-");
	Keyboard.releaseAll();
	Keyboard.print(" diskpart ^");
	//Keyboard.print("|");
	Keyboard.press(KEY_RIGHT_ALT);
	Keyboard.print("-");
	Keyboard.releaseAll();
	Keyboard.print(" findstr  \"MyLittlePONEY\"') do (");
	Keyboard.press(KEY_RETURN);
	Keyboard.releaseAll();

	Keyboard.print("set PONEY=%A");
	Keyboard.press(KEY_RETURN);
	Keyboard.releaseAll();

	Keyboard.print(")");
	Keyboard.press(KEY_RETURN);
	Keyboard.releaseAll();
}


void loop() {
}
