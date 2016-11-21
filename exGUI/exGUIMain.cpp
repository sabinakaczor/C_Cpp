/***************************************************************
 * Name:      exGUIMain.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2016-11-21
 * Copyright:  ()
 * License:
 **************************************************************/

#include "exGUIMain.h"
#include <wx/msgdlg.h>
#include <string>
#include <stack>

using namespace std;

//(*InternalHeaders(exGUIFrame)
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

//(*IdInit(exGUIFrame)
const long exGUIFrame::ID_BUTTON1 = wxNewId();
const long exGUIFrame::ID_STATICTEXT1 = wxNewId();
const long exGUIFrame::ID_TEXTCTRL1 = wxNewId();
const long exGUIFrame::ID_STATICTEXT2 = wxNewId();
const long exGUIFrame::idMenuQuit = wxNewId();
const long exGUIFrame::idMenuAbout = wxNewId();
const long exGUIFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(exGUIFrame,wxFrame)
    //(*EventTable(exGUIFrame)
    //*)
END_EVENT_TABLE()

exGUIFrame::exGUIFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(exGUIFrame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxMenu* Menu1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    SetClientSize(wxSize(284,261));
    Button1 = new wxButton(this, ID_BUTTON1, _("Label"), wxPoint(152,64), wxSize(88,32), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Label"), wxPoint(64,112), wxSize(152,17), 0, _T("ID_STATICTEXT1"));
    text1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("Text"), wxPoint(48,64), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Wpisz liczbę rzeczywistą"), wxPoint(120,24), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
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

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&exGUIFrame::OnButton1Click);
    Connect(ID_TEXTCTRL1,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&exGUIFrame::OnTextCtrl1Text);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&exGUIFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&exGUIFrame::OnAbout);
    Connect(wxID_ANY,wxEVT_CLOSE_WINDOW,(wxObjectEventFunction)&exGUIFrame::OnClose);
    //*)
}

wxString konwertuj(wxString s) {
    stack<int> st;
    wxString k;
    //int l = wxAtoi(s);
    double *l;
    if(!s.ToDouble(l)) { /*error*/};
    s.substr(0,s.Index('.'));

    int mantysa = wxAtoi(s);

    while(mantysa) {
        if(mantysa%2==0)
            st.push(0);
        else
            st.push(1);
        mantysa /= 2;
    }
    st.push(1);

    while(!st.empty()) {
        k << st.top();
        st.pop();
    }

    return k;
}

exGUIFrame::~exGUIFrame()
{
    //(*Destroy(exGUIFrame)
    //*)
}

void exGUIFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void exGUIFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void exGUIFrame::OnButton1Click(wxCommandEvent& event)
{
    StaticText1->SetLabel(konwertuj(text1->GetValue()));
    Layout();

}

void exGUIFrame::OnClose(wxCloseEvent& event)
{
    exit(0);
}

void exGUIFrame::OnTextCtrl1Text(wxCommandEvent& event)
{
}


