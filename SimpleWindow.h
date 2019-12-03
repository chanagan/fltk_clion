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
#include <FL/Fl_Menu_Item.H>
#include <FL/Fl_Menu_Bar.H>

using namespace std;

class SimpleWindow : public Fl_Window {
 public:
  SimpleWindow(int w, int h, const char* title);
  ~SimpleWindow() override;

  Fl_Button* copy;
  Fl_Button* quit;
  Fl_Input* inp;
  Fl_Output* out;

  Fl_Menu_Bar* menuBar;

 private:
  static void cb_copy(Fl_Widget*, void*);
  inline void cb_copy_i();

  static void cb_quit(Fl_Widget*, void*);
  inline void cb_quit_i();

  static void Menu_CB(Fl_Widget*w, void*data);


// Callback method with class access
  void Menu_CB2();

};

#endif //FLTK_CLION_SIMPLEWINDOW_H
