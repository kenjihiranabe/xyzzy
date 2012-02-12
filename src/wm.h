#ifndef _wm_h_
# define _wm_h_

enum
{
  WM_PRIVATE_SETFOCUS = WM_USER,
  WM_PRIVATE_KILLFOCUS,
  WM_PRIVATE_ACTIVATEAPP,
  WM_PRIVATE_DELETE_WINDOW,
  WM_PRIVATE_QUIT,
  WM_PRIVATE_INITDONE,
  WM_PRIVATE_PROCESS_OUTPUT,
  WM_PRIVATE_PROCESS_TERMINATE,
  WM_PRIVATE_DELAYED_ACTIVATE,
  WM_PRIVATE_FILER_SHOW_MARKS,
  WM_PRIVATE_UPDATE_PAGE,
  WM_PRIVATE_UPDATE_SCALE,
  WM_PRIVATE_FILER_KEYUP,
  WM_PRIVATE_FOREGROUND,
  WM_PRIVATE_LISTBOX_CHAR,
  WM_PRIVATE_IME_MODE,
  WM_PRIVATE_CALL_MENU,
  WM_PRIVATE_REGISTER_HOTKEY,
  WM_PRIVATE_UNREGISTER_HOTKEY,
  WM_PRIVATE_MODIFY_HOTKEY,
  WM_PRIVATE_SIZE,
  WM_PRIVATE_END_LIST_DRIVE,
  WM_PRIVATE_WCHAR,
};

#endif