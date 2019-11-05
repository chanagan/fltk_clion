//
//  main.cpp
//  fltk_xcode
//
//  Created by Chris Hanagan on 2/15/18.
//  Copyright © 2018 Chris Hanagan. All rights reserved.
//

#include <FL/Fl.H>
//#include <FL/Fl_Window.H>
//#include <FL/Fl_Button.H>
#include "SimpleWindow.h"
using namespace std;
//#include "FL/Fl.h"

int main() {
  SimpleWindow win(300, 200, "SimpleWindow");
  return Fl::run();
}


/*
void but_cb(Fl_Widget* o, void*) {
  auto* b = (Fl_Button*)o;
  b->label("Good job");

  b->resize(10, 150, 140, 30);
  b->redraw();
}

int main() {
  // insert code here...
  Fl_Window win(300, 200, "Testing");
  win.begin();
  Fl_Button but(10, 150, 70, 30, "Click me");
  win.end();
  but.callback(but_cb);
  win.show();
  return Fl::run();
}
*/