/**
@file util-gtk.h
@author Arthur Detrembleur (Appliaction [DaveTilheim])
@version 1.0
*/
#ifndef __UTIL_GTK__
#define __UTIL_GTK__

/**
@fn void fill_box(GtkWidget *box, int Nwg, ...)
@brief fill a box with widgets
@param box a GtkWidget
@param Nwg the number of widgets to fill in box
@param ... the widgets
@pre box != NULL, Nwd > 0
@post box fills
*/
void fill_box(GtkWidget *box, int Nwg, ...);


#endif
