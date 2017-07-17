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

	Keyboard.releaseAll();
	delay(200);

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
	
	delay(4000);

	Keyboard.print("sihost");
	delay(50);

	Keyboard.press(KEY_RETURN);
	Keyboard.releaseAll();
	delay(2000);

	Keyboard.press(KEY_LEFT_ALT);
	Keyboard.press(KEY_F4);

	Keyboard.releaseAll();

}

void loop() {
	

}
