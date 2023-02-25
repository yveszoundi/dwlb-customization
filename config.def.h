// use ipc functionality
static bool ipc = false;

// bar properties
static bool hidden = false;
static bool bottom = false;
static bool hide_vacant = false;

// font
static char *fontstr = "monospace:size=10";

// tag names if ipc is disabled
static char *tags_noipc[] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };

// set 16-bit colors for bar
// 8-bit color can be converted to 16-bit color by simply duplicating values e.g
// 0x55 -> 0x5555, 0xf1 -> 0xf1f1
static pixman_color_t active_fg_color = { .red = 0xeeee, .green = 0xeeee, .blue = 0xeeee, .alpha = 0xffff, };
static pixman_color_t active_bg_color = { .red = 0x7979, .green = 0x0000, .blue = 0x2828, .alpha = 0xffff, };
static pixman_color_t inactive_fg_color = { .red = 0xbbbb, .green = 0xbbbb, .blue = 0xbbbb, .alpha = 0xffff, };
static pixman_color_t inactive_bg_color = { .red = 0x2222, .green = 0x2222, .blue = 0x2222, .alpha = 0xffff, };
static pixman_color_t urgent_fg_color = { .red = 0x2222, .green = 0x2222, .blue = 0x2222, .alpha = 0xffff, };
static pixman_color_t urgent_bg_color = { .red = 0xeeee, .green = 0xeeee, .blue = 0xeeee, .alpha = 0xffff, };

// vertical pixel padding above and below text
static uint32_t vertical_padding = 1;

// allow in-line color commands in status text
static bool status_commands = true;

