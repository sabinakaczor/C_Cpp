/***************************************************************
 * Name:      Zajacia_0512Main.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2016-12-05
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef ZAJACIA_0512MAIN_H
#define ZAJACIA_0512MAIN_H

//(*Headers(Zajacia_0512Frame)
#include <wx/menu.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
//*)

class Zajacia_0512Frame: public wxFrame
{
    public:

        Zajacia_0512Frame(wxWindow* parent,wxWindowID id = -1);
        virtual ~Zajacia_0512Frame();

    private:

        //(*Handlers(Zajacia_0512Frame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnClose(wxCloseEvent& event);
        //*)

        //(*Identifiers(Zajacia_0512Frame)
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(Zajacia_0512Frame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // ZAJACIA_0512MAIN_H
