// *List View Mode ** Author: Gurmeet Athwal https://github.com/guruathwal ** 

#ifndef _LIST_ITEM_H_
#define _LIST_ITEM_H_

#include "stdint.h"
#include "stdbool.h"
#include "GUI.h"
#include "menu.h"

enum{
ICONCHAR_BLANK = 0,
ICONCHAR_NOZZLE,
ICONCHAR_BED,
ICONCHAR_FAN,
ICONCHAR_FOLDER,
ICONCHAR_FILE,

ICONCHAR_PAGEUP,
ICONCHAR_PAGEDOWN,
ICONCHAR_BACK,
ICONCHAR_LEFT,
ICONCHAR_LEFT_TOP,
ICONCHAR_LEFT_BOTTOM,
ICONCHAR_RIGHT,
ICONCHAR_RIGHT_TOP,
ICONCHAR_RIGHT_BOTTOM,

ICONCHAR_ALERT,
ICONCHAR_WARNING,
ICONCHAR_ERROR,
ICONCHAR_CAUTION,
ICONCHAR_INFO,
ICONCHAR_HAND,
ICONCHAR_WAIT,
ICONCHAR_QUESTION,
ICONCHAR_PLAY,
ICONCHAR_PAUSE,
ICONCHAR_STOP,
ICONCHAR_EJECT,
ICONCHAR_PLAY_ROUND,
ICONCHAR_PAUSE_ROUND,
ICONCHAR_OK_ROUND,
ICONCHAR_CANCEL_ROUND,
ICONCHAR_MINUS_ROUND,
ICONCHAR_PLUS_ROUND,
ICONCHAR_MINUS,
ICONCHAR_PLUS,
ICONCHAR_OK,
ICONCHAR_CANCEL,
ICONCHAR_HALT,
ICONCHAR_UP_DOWN,
ICONCHAR_LEFT_RIGHT,
ICONCHAR_POINT_LEFT,
ICONCHAR_POINT_RIGHT,
ICONCHAR_RETURN,
ICONCHAR_REDO,
ICONCHAR_UNDO,
ICONCHAR_DOWNLOAD,
ICONCHAR_UPLOAD,
ICONCHAR_BULLET,
ICONCHAR_BACK_SMALL,
ICONCHAR_EXPAND,
ICONCHAR_MOVE,
ICONCHAR_ROTATE,
ICONCHAR_RESET,
ICONCHAR_EDIT,
ICONCHAR_SAVE,
ICONCHAR_DELETE,
ICONCHAR_RADIO_CHECKED,
ICONCHAR_RADIO_UNCHECKED,
ICONCHAR_CHECKED,
ICONCHAR_UNCHECKED,
ICONCHAR_SOUND_OFF,
ICONCHAR_SOUND_ON,
ICONCHAR_ALERT_OFF,
ICONCHAR_ALERT_ON,
ICONCHAR_POWER_OFF,
ICONCHAR_POWER_ON,
ICONCHAR_WIFI_OFF,
ICONCHAR_WIFI_ON,
ICONCHAR_KEYBOARD,
ICONCHAR_SD_ERROR,
ICONCHAR_SD_OK,
ICONCHAR_SD_REFRESH,
ICONCHAR_USB_ERROR,
ICONCHAR_USB_OK,
ICONCHAR_PRINTER_ERROR,
ICONCHAR_PRINTER_OK,
ICONCHAR_BOARD,
ICONCHAR_EEPROM,
ICONCHAR_PRINT,
ICONCHAR_SETTING1,
ICONCHAR_PLUGIN,
ICONCHAR_FEATURE,
ICONCHAR_SETTING2,
ICONCHAR_DETAIL,
ICONCHAR_DETAIL2,
ICONCHAR_ADJUST,
ICONCHAR_MENU,
ICONCHAR_POWER,
ICONCHAR_TOUCH,
ICONCHAR_LANGUAGE,
ICONCHAR_CODE,
ICONCHAR_POWER_PLUG,
ICONCHAR_ROTATE_DEVICE,
ICONCHAR_WINDOW,
ICONCHAR_BACKGROUND_COLOR,
ICONCHAR_FONT_COLOR,
ICONCHAR_PAINT,
ICONCHAR_TOGGLE_SMALL_ON,
ICONCHAR_TOGGLE_SMALL_OFF,
ICONCHAR_TOGGLE_ON,
ICONCHAR_TOGGLE_OFF,
ICONCHAR_TOGGLE_BODY,
ICONCHAR_TOGGLE_SWITCH,

//keep below items always at the end
ICONCHAR_NUM,
ICONCHAR_BACKGROUND
};

typedef enum
{
  TOP_LEFT = 0,
  TOP_CENTER,
  TOP_RIGHT,
  LEFT_CENTER,
  MIDDLE,
  RIGHT_CENTER,
  BOTTOM_LEFT,
  BOTTOM_CENTER,
  BOTTOM_RIGHT
}ICON_POS;

extern char * dynamic_label[LISTITEM_PER_PAGE];

#define LISTBTN_BKCOLOR 0x2187
#define MAT_RED         0xE124
#define MAT_YELLOW      0xED80
#define MAT_GREEN       0x1DC4
#define MAT_BLUE        0x24BD
#define MAT_ORANGE      0xF3A0
#define MATT_DARKGRAY   0x52AA
#define MAT_LOWWHITE    0xCE79
#define MATT_PURPLE     0x9135

//#define LABEL_DYNAMIC 12345 //just random number for reference


uint8_t * IconCharSelect(uint8_t sel);
void ListItem_Display(const GUI_RECT* rect, uint8_t positon, const LISTITEM * curitem, bool pressed);
void ListMenuSetItem (const LISTITEM * menuItem, uint8_t positon);
void ListItem_DisplayToggle(uint16_t sx, uint16_t sy, uint8_t iconchar_state);
void ListItem_DisplayCustomValue(const GUI_RECT* rect,uint8_t * value);
GUI_POINT getTextStartPoint(uint16_t sx, uint16_t sy, uint16_t ex, uint16_t ey, ICON_POS pos, const char * textchar);
#endif
