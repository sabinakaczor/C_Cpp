/***************************************************************
 * Name:      Zajacia_0512Main.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2016-12-05
 * Copyright:  ()
 * License:
 **************************************************************/

#include "Zajacia_0512Main.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(Zajacia_0512Frame)
#include <wx/string.h>
#include <wx/intl.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(Zajacia_0512Frame)
const long Zajacia_0512Frame::idMenuQuit = wxNewId();
const long Zajacia_0512Frame::idMenuAbout = wxNewId();
const long Zajacia_0512Frame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Zajacia_0512Frame,wxFrame)
    //(*EventTable(Zajacia_0512Frame)
    //*)
END_EVENT_TABLE()

Zajacia_0512Frame::Zajacia_0512Frame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(Zajacia_0512Frame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxMenu* Menu1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);

    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Zajacia_0512Frame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Zajacia_0512Frame::OnAbout);
    Connect(wxID_ANY,wxEVT_CLOSE_WINDOW,(wxObjectEventFunction)&Zajacia_0512Frame::OnClose);
    //*)
}

Zajacia_0512Frame::~Zajacia_0512Frame()
{
    //(*Destroy(Zajacia_0512Frame)
    //*)
}

void Zajacia_0512Frame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void Zajacia_0512Frame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void Zajacia_0512Frame::OnClose(wxCloseEvent& event)
{
}
