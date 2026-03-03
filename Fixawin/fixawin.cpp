// Mon Mar 2 09:16:10 PM CST 2026
#include <stdlib.h>
#include <xcb/xcb.h>
#include <xcb/xcb_cursor.h>
#include <xcb/xproto.h>

// MACROS

// ENUMS

// FUNCTION DECLARATIONS
void setup();

// VARIABLES
xcb_connection_t *dpy;
xcb_screen_t *scr;

static int running = 1;

// MAIN
int main(int argc, char *argv[]) {
  setup();

  return 0;
}

// FUNCTIONS
void setup() {
  int screen_num;
  dpy = xcb_connect(NULL, &screen_num);
}
