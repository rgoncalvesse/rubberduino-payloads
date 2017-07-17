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

}

void loop() {
	

}
