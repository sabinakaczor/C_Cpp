/***************************************************************
 * Name:      zajecia28_11Main.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2016-11-28
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef ZAJECIA28_11MAIN_H
#define ZAJECIA28_11MAIN_H

//(*Headers(zajecia28_11Frame)
#include <wx/button.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class zajecia28_11Frame: public wxFrame
{
    public:

        zajecia28_11Frame(wxWindow* parent,wxWindowID id = -1);
        virtual ~zajecia28_11Frame();

    private:

        //(*Handlers(zajecia28_11Frame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnButton1Click1(wxCommandEvent& event);
        void OnTextCtrl1Text(wxCommandEvent& event);
        void OnButton1Click2(wxCommandEvent& event);
        //*)

        //(*Identifiers(zajecia28_11Frame)
        static const long ID_BUTTON1;
        static const long ID_STATICTEXT1;
        static const long ID_TEXTCTRL1;
        static const long ID_STATICTEXT2;
        static const long ID_STATICTEXT3;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(zajecia28_11Frame)
        wxStatusBar* StatusBar1;
        wxButton* Button1;
        wxStaticText* StaticText1;
        wxStaticText* StaticText3;
        wxTextCtrl* TextCtrl1;
        wxStaticText* StaticText2;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // ZAJECIA28_11MAIN_H
