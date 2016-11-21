/***************************************************************
 * Name:      exGUIApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2016-11-21
 * Copyright:  ()
 * License:
 **************************************************************/

#include "exGUIApp.h"

//(*AppHeaders
#include "exGUIMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(exGUIApp);

bool exGUIApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	exGUIFrame* Frame = new exGUIFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
