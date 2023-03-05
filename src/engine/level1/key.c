//
// Created by Сандро Чокораия on 05.03.2023.
//

#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include  <X11/keysym.h>
#include  <X11/keysymdef.h>

typedef struct
{
    int type;
    unsigned long serial; //Поле serial хранит серийный номер последнего обработанного запроса.
    Bool send_event; // Поле send_event принимает значение True, если событие послано другим клиентом через вызов XSendEvent.
    Display *display; //Поле display хранит указатель на структуру, описывающую дисплей, с которого было получено это событие.
    Window window; //Поле window хранит идентификатор окна, для которого сгенерировано это событие.
    Window root; //Поле root указывает на корневое окно, которому принадлежит окно window.
    Window subwindow;
    int x, y; //   Поля x и y хранят координаты графического курсора мыши относительно окна window.
    int x_root, y_root; // Поля x_root и y_root хранят координаты графического курсора мыши относительно корневого окна.
    unsigned int state;      /* состояния кнопок мыши */
    unsigned int button;     /* код кнопки, изменившей значение */
    Bool same_screen; //Поле same_screen принимает значение True, если событие было порождено на том же экране, которому принадлежит окно window.
} XButtonEvent;
typedef XButtonEvent XButtonPressedEvent;
typedef XButtonEvent XButtonReleasedEvent;