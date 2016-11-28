/***************************************************************
 * Name:      zajecia28_11App.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2016-11-28
 * Copyright:  ()
 * License:
 **************************************************************/

#include "zajecia28_11App.h"

//(*AppHeaders
#include "zajecia28_11Main.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(zajecia28_11App);

bool zajecia28_11App::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	zajecia28_11Frame* Frame = new zajecia28_11Frame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
