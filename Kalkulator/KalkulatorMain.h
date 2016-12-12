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
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
#include <wx/textctrl.h>
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
        //*)

        //(*Identifiers(KalkulatorFrame)
        static const long ID_TEXTCTRL1;
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON3;
        static const long ID_BUTTON4;
        static const long ID_BUTTON5;
        static const long ID_BUTTON6;
        static const long ID_BUTTON7;
        static const long ID_BUTTON8;
        static const long ID_BUTTON9;
        static const long ID_BUTTON10;
        static const long ID_BUTTON11;
        static const long ID_BUTTON12;
        static const long ID_BUTTON13;
        static const long ID_BUTTON14;
        static const long ID_BUTTON15;
        static const long ID_BUTTON16;
        static const long ID_BUTTON17;
        static const long ID_BUTTON18;
        static const long ID_BUTTON19;
        static const long ID_BUTTON20;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(KalkulatorFrame)
        wxStatusBar* StatusBar1;
        wxButton* Button19;
        wxButton* Button16;
        wxButton* Button4;
        wxButton* Button1;
        wxButton* Button2;
        wxButton* Button3;
        wxButton* Button12;
        wxButton* Button8;
        wxButton* Button5;
        wxButton* Button17;
        wxButton* Button9;
        wxButton* Button15;
        wxButton* Button14;
        wxTextCtrl* TextCtrl1;
        wxButton* Button18;
        wxButton* Button11;
        wxButton* Button7;
        wxButton* Button6;
        wxButton* Button13;
        wxButton* Button10;
        wxButton* Button20;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // KALKULATORMAIN_H
