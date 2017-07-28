#include <Keyboard.h>
#include <Wopen.h>

void setup() {

	Keyboard.begin();

	delay(5000);
	Wopen_win_r("cmd");
	
	delay(500);
	Wopen_exec("color 02");
}

void loop() {
}
