/***************************************************************
 * Name:      zajecia28_11Main.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2016-11-28
 * Copyright:  ()
 * License:
 **************************************************************/

#include "zajecia28_11Main.h"
#include <wx/msgdlg.h>
#include <vector>

using namespace std;

//(*InternalHeaders(zajecia28_11Frame)
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

//(*IdInit(zajecia28_11Frame)
const long zajecia28_11Frame::ID_BUTTON1 = wxNewId();
const long zajecia28_11Frame::ID_STATICTEXT1 = wxNewId();
const long zajecia28_11Frame::ID_TEXTCTRL1 = wxNewId();
const long zajecia28_11Frame::ID_STATICTEXT2 = wxNewId();
const long zajecia28_11Frame::ID_STATICTEXT3 = wxNewId();
const long zajecia28_11Frame::idMenuQuit = wxNewId();
const long zajecia28_11Frame::idMenuAbout = wxNewId();
const long zajecia28_11Frame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(zajecia28_11Frame,wxFrame)
    //(*EventTable(zajecia28_11Frame)
    //*)
END_EVENT_TABLE()

zajecia28_11Frame::zajecia28_11Frame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(zajecia28_11Frame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxMenu* Menu1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(374,362));
    Button1 = new wxButton(this, ID_BUTTON1, _("OK"), wxPoint(192,128), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Ciąg Fibonacciego"), wxPoint(128,32), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(104,128), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, wxEmptyString, wxPoint(56,176), wxSize(264,104), 0, _T("ID_STATICTEXT2"));
    StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Ile elementów ciągu chcesz wyświetlić\?"), wxPoint(56,88), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
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

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&zajecia28_11Frame::OnButton1Click2);
    Connect(ID_TEXTCTRL1,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&zajecia28_11Frame::OnTextCtrl1Text);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&zajecia28_11Frame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&zajecia28_11Frame::OnAbout);
    //*)
}

zajecia28_11Frame::~zajecia28_11Frame()
{
    //(*Destroy(zajecia28_11Frame)
    //*)
}

void zajecia28_11Frame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void zajecia28_11Frame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void zajecia28_11Frame::OnButton1Click(wxCommandEvent& event)
{
}

void zajecia28_11Frame::OnButton1Click1(wxCommandEvent& event)
{
}

int* fib(int n) {
    int *fib;
    fib[0] = 0;
    fib[1] = 1;
    for(int i=2; i<=n; ++i) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    return fib;
}

wxString show_fib(int *fib, int n) {
    string str = "";
    for(int i=0; i<n; ++i) {
        str += fib[i];
        str += " ";
    }
    wxString str2(str.c_str(), wxConvUTF8);
    return str2;
}


void zajecia28_11Frame::OnTextCtrl1Text(wxCommandEvent& event)
{
}

void zajecia28_11Frame::OnButton1Click2(wxCommandEvent& event)
{
    int n = wxAtoi(TextCtrl1->GetValue());
    int *fib1 = fib(n);
    wxString fib = show_fib(fib1, n);
    StaticText2->SetLabel(fib);
}
