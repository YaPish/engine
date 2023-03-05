//
// Created by Сандро Чокораия on 05.03.2023.
//
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include  <X11/keysym.h>
#include  <X11/keysymdef.h>

typedef struct {
    int type;
    unsigned long serial;
    Bool send_event;
    Display *display;
    Window window;
    Window root;
    Window subwindow;
    Time time;
    int x, y;
    int x_root, y_root;
    unsigned int state;
    unsigned int keycode;
    Bool same_screen;
} XKeyEvent;
typedef XKeyEvent XKeyPressedEvent;
typedef XKeyEvent XKeyReleasedEvent;