//
// Created by Chris Hanagan on 11/4/19.
//

#ifndef FLTK_CLION_SIMPLEWINDOW_H
#define FLTK_CLION_SIMPLEWINDOW_H

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Output.H>
using namespace std;

class SimpleWindow : public Fl_Window {
 public:
  SimpleWindow(int w, int h, const char* title);
  ~SimpleWindow();
  Fl_Button* copy;
  Fl_Button* quit;
  Fl_Input* inp;
  Fl_Output* out;

 private:
  static void cb_copy(Fl_Widget*, void*);
  inline void cb_copy_i();

  static void cb_quit(Fl_Widget*, void*);
  inline void cb_quit_i();
};

#endif //FLTK_CLION_SIMPLEWINDOW_H
