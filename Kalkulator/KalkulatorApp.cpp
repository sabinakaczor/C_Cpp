/***************************************************************
 * Name:      KalkulatorApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2016-12-05
 * Copyright:  ()
 * License:
 **************************************************************/

#include "KalkulatorApp.h"

//(*AppHeaders
#include "KalkulatorMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(KalkulatorApp);

bool KalkulatorApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	KalkulatorFrame* Frame = new KalkulatorFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
