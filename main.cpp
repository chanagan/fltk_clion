//
//  main.cpp
//  fltk_xcode
//
//  Created by Chris Hanagan on 2/15/18.
//  Copyright © 2018 Chris Hanagan. All rights reserved.
//

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
//#include <FL/Fl_Button.H>
#include "SimpleWindow.h"

using namespace std;
//#include "FL/Fl.h"


int main() {
  SimpleWindow win(300, 200, "SimpleWindow");

  return Fl::run();
}

