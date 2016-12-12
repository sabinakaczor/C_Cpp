/***************************************************************
 * Name:      KalkulatorMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2016-12-05
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef KALKULATORMAIN_H
#define KALKULATORMAIN_H

//(*Headers(KalkulatorFrame)
#include <wx/menu.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
//*)

class KalkulatorFrame: public wxFrame
{
    public:

        KalkulatorFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~KalkulatorFrame();

    private:

        //(*Handlers(KalkulatorFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnClose(wxCloseEvent& event);
        void OnTextCtrl1Text(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnButton17Click(wxCommandEvent& event);
        void OnButton5Click(wxCommandEvent& event);
        void OnButton6Click(wxCommandEvent& event);
        void OnClose1(wxCloseEvent& event);
        void OnClose2(wxCloseEvent& event);
        void OnClose3(wxCloseEvent& event);
        //*)

        //(*Identifiers(KalkulatorFrame)
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(KalkulatorFrame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // KALKULATORMAIN_H
