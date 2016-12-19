/***************************************************************
 * Name:      CalculatorApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2016-12-19
 * Copyright:  ()
 * License:
 **************************************************************/

#include "CalculatorApp.h"

//(*AppHeaders
#include "CalculatorMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(CalculatorApp);

bool CalculatorApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	CalculatorFrame* Frame = new CalculatorFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
