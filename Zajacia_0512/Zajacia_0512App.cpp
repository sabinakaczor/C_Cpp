/***************************************************************
 * Name:      Zajacia_0512App.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2016-12-05
 * Copyright:  ()
 * License:
 **************************************************************/

#include "Zajacia_0512App.h"

//(*AppHeaders
#include "Zajacia_0512Main.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(Zajacia_0512App);

bool Zajacia_0512App::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	Zajacia_0512Frame* Frame = new Zajacia_0512Frame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
