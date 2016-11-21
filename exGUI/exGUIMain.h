/***************************************************************
 * Name:      exGUIMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2016-11-21
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef EXGUIMAIN_H
#define EXGUIMAIN_H

//(*Headers(exGUIFrame)
#include <wx/button.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class exGUIFrame: public wxFrame
{
    public:

        exGUIFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~exGUIFrame();

    private:

        //(*Handlers(exGUIFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnClose(wxCloseEvent& event);
        void OnTextCtrl1Text(wxCommandEvent& event);
        //*)

        //(*Identifiers(exGUIFrame)
        static const long ID_BUTTON1;
        static const long ID_STATICTEXT1;
        static const long ID_TEXTCTRL1;
        static const long ID_STATICTEXT2;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(exGUIFrame)
        wxStatusBar* StatusBar1;
        wxTextCtrl* text1;
        wxButton* Button1;
        wxStaticText* StaticText1;
        wxStaticText* StaticText2;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // EXGUIMAIN_H
