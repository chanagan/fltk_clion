//
// Created by Chris Hanagan on 11/4/19.
//

#include "SimpleWindow.h"

SimpleWindow::SimpleWindow(int w, int h, const char *title) : Fl_Window(w, h, title) {
    begin();
    
    menu = new Fl_Menu_Bar (0,0, 720, 28);
    menu->add("File/Open", 0, cb_menu);
    
    copy = new Fl_Button(10, 150, 70, 30, "C&opy");
    copy->callback(cb_copy, this);

    quit = new Fl_Button(100, 150, 70, 30, "&Quit");
    quit->callback(cb_quit, this);

    inp = new Fl_Input(50, 50, 140, 30, "Input:");
    out = new Fl_Output(50, 100, 140, 30, "Output");
    end();
    resizable(this);
    show();
}

SimpleWindow::~SimpleWindow() = default;

void SimpleWindow::cb_copy(Fl_Widget *, void *v) {
    //SimpleWindow* T=(SimpleWindow*)v;
    //T->cb_copy_i();

    // or just the one line below
    ((SimpleWindow *) v)->cb_copy_i();
}

void SimpleWindow::cb_copy_i() {
    out->value(inp->value());
}

void SimpleWindow::cb_quit(Fl_Widget *, void *v) {
    ((SimpleWindow *) v)->cb_quit_i();
}

void SimpleWindow::cb_quit_i() {
    hide();
}


void SimpleWindow::cb_menu(Fl_Widget *w, void *) {
    const Fl_Menu_Bar *menubar = (Fl_Menu_Bar*)w;
    char picked[80];
    menubar->item_pathname(picked, sizeof(picked)-1);
    printf("CALLBACK: you picked '%s'\n", picked);
}

