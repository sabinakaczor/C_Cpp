/***************************************************************
 * Name:      CalculatorMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2016-12-19
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef CALCULATORMAIN_H
#define CALCULATORMAIN_H

//(*Headers(CalculatorFrame)
#include <wx/menu.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
//*)

class CalculatorFrame: public wxFrame
{
    public:

        CalculatorFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~CalculatorFrame();

    private:

        //(*Handlers(CalculatorFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(CalculatorFrame)
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(CalculatorFrame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // CALCULATORMAIN_H
