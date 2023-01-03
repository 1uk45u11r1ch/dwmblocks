//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{"[ TME: ",	"echo \"$(date '+%k:%M %d.%m.%Y')\" ]",							1,		0},
	{"[ CPU: ",	"echo \"$(cat /run/cpustatsd/load)%\" ]",						1,		0},
	{"[ CLK: ",	"echo \"$(cat /run/cpustatsd/maxclk)MHz | $(cat /run/cpustatsd/minclk)MHz\" ]",		1,		0},
	{"[ MEM: ",	"echo $(free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g) ]",			1,		0},
	{";",		"",											86400,		0}, /* dwm-extrabar delimeter */
	{";",		"",											86400,		0}, /* dwm-extrabar delimeter */
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "   ";
static unsigned int delimLen = 5;
