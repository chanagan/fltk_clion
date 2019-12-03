//
// Created by Chris Hanagan on 11/4/19.
//

#include "SimpleWindow.h"

SimpleWindow::SimpleWindow(int w, int h, const char *title) : Fl_Window(w, h, title) {
  Fl_Menu_Item mainMenuTable[] = {
      {"Red",	FL_ALT+'r'},
      {"Green",	FL_ALT+'g'},
      {"Blue",	FL_ALT+'b'},
      {"Strange",	FL_ALT+'s', 0, 0, FL_MENU_INACTIVE},
      {"&Charm",	FL_ALT+'c'},
      {"Truth",	FL_ALT+'t'},
      {"Beauty",	FL_ALT+'b'},
      {0}};

  begin();
//    Fl_Window window(700, 400);

  menuBar = new Fl_Menu_Bar(0, 0, 300, 25);
//  menuBar->menu(mainMenuTable);
  menuBar->add("File/Open", 0, Menu_CB, (void*)this);    // userdata is always 'this'
  menuBar->add("File/Quit", 0, Menu_CB, (void*)this);
  menuBar->add("Help/Help", 0, Menu_CB, (void*)this);
  copy = new Fl_Button(10, 150, 70, 30, "C&opy");
  copy->callback(cb_copy, this);

  quit = new Fl_Button(100, 150, 70, 30, "&Quit");
  quit->callback(cb_quit, this);

  inp = new Fl_Input(50, 50, 140, 30, "Input:");
  out = new Fl_Output(50, 100, 140, 30, "Output");

  end();
  resizable(this);
//    show();
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
// Static menu callback
void  SimpleWindow::Menu_CB(Fl_Widget*w, void*data) {
//  MyApp *o = (MyApp*)data;
//  o->Menu_CB2();
}

// Callback method with class access
void SimpleWindow::Menu_CB2() {
  char picked[80];
  menuBar->item_pathname(picked, sizeof(picked) - 1);
  printf("CALLBACK: You picked '%s'\n", picked);

  // How to handle callbacks..
  if (strcmp(picked, "File/Quit")==0) exit(0);
  if (strcmp(picked, "Help/Help")==0) printf("Help goes here\n");
}