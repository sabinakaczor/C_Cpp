/***************************************************************
 * Name:      KalkulatorMain.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2016-12-05
 * Copyright:  ()
 * License:
 **************************************************************/

#include "KalkulatorMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(KalkulatorFrame)
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

//(*IdInit(KalkulatorFrame)
const long KalkulatorFrame::ID_TEXTCTRL1 = wxNewId();
const long KalkulatorFrame::ID_BUTTON1 = wxNewId();
const long KalkulatorFrame::ID_BUTTON2 = wxNewId();
const long KalkulatorFrame::ID_BUTTON3 = wxNewId();
const long KalkulatorFrame::ID_BUTTON4 = wxNewId();
const long KalkulatorFrame::ID_BUTTON5 = wxNewId();
const long KalkulatorFrame::ID_BUTTON6 = wxNewId();
const long KalkulatorFrame::ID_BUTTON7 = wxNewId();
const long KalkulatorFrame::ID_BUTTON8 = wxNewId();
const long KalkulatorFrame::ID_BUTTON9 = wxNewId();
const long KalkulatorFrame::ID_BUTTON10 = wxNewId();
const long KalkulatorFrame::ID_BUTTON11 = wxNewId();
const long KalkulatorFrame::ID_BUTTON12 = wxNewId();
const long KalkulatorFrame::ID_BUTTON13 = wxNewId();
const long KalkulatorFrame::ID_BUTTON14 = wxNewId();
const long KalkulatorFrame::ID_BUTTON15 = wxNewId();
const long KalkulatorFrame::ID_BUTTON16 = wxNewId();
const long KalkulatorFrame::ID_BUTTON17 = wxNewId();
const long KalkulatorFrame::ID_BUTTON18 = wxNewId();
const long KalkulatorFrame::ID_BUTTON19 = wxNewId();
const long KalkulatorFrame::ID_BUTTON20 = wxNewId();
const long KalkulatorFrame::idMenuQuit = wxNewId();
const long KalkulatorFrame::idMenuAbout = wxNewId();
const long KalkulatorFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(KalkulatorFrame,wxFrame)
    //(*EventTable(KalkulatorFrame)
    //*)
END_EVENT_TABLE()

KalkulatorFrame::KalkulatorFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(KalkulatorFrame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxGridSizer* GridSizer1;
    wxMenu* Menu1;
    wxBoxSizer* BoxSizer1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    SetClientSize(wxSize(295,38));
    BoxSizer1 = new wxBoxSizer(wxVERTICAL);
    TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxSize(350,0), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    BoxSizer1->Add(TextCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    GridSizer1 = new wxGridSizer(5, 4, 0, 0);
    Button1 = new wxButton(this, ID_BUTTON1, _("C"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    GridSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button2 = new wxButton(this, ID_BUTTON2, _("%"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    GridSizer1->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button3 = new wxButton(this, ID_BUTTON3, _("pow"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
    GridSizer1->Add(Button3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button4 = new wxButton(this, ID_BUTTON4, _("√"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
    GridSizer1->Add(Button4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button5 = new wxButton(this, ID_BUTTON5, _("1"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
    GridSizer1->Add(Button5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button6 = new wxButton(this, ID_BUTTON6, _("2"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON6"));
    GridSizer1->Add(Button6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button7 = new wxButton(this, ID_BUTTON7, _("3"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON7"));
    GridSizer1->Add(Button7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button8 = new wxButton(this, ID_BUTTON8, _("+"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON8"));
    GridSizer1->Add(Button8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button9 = new wxButton(this, ID_BUTTON9, _("4"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON9"));
    GridSizer1->Add(Button9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button10 = new wxButton(this, ID_BUTTON10, _("5"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON10"));
    GridSizer1->Add(Button10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button11 = new wxButton(this, ID_BUTTON11, _("6"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON11"));
    GridSizer1->Add(Button11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button12 = new wxButton(this, ID_BUTTON12, _("-"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON12"));
    GridSizer1->Add(Button12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button13 = new wxButton(this, ID_BUTTON13, _("7"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON13"));
    GridSizer1->Add(Button13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button14 = new wxButton(this, ID_BUTTON14, _("8"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON14"));
    GridSizer1->Add(Button14, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button15 = new wxButton(this, ID_BUTTON15, _("9"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON15"));
    GridSizer1->Add(Button15, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button16 = new wxButton(this, ID_BUTTON16, _("."), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON16"));
    GridSizer1->Add(Button16, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button17 = new wxButton(this, ID_BUTTON17, _("0"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON17"));
    GridSizer1->Add(Button17, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button18 = new wxButton(this, ID_BUTTON18, _("*"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON18"));
    GridSizer1->Add(Button18, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button19 = new wxButton(this, ID_BUTTON19, _("/"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON19"));
    GridSizer1->Add(Button19, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button20 = new wxButton(this, ID_BUTTON20, _("="), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON20"));
    GridSizer1->Add(Button20, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1->Add(GridSizer1, 4, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(BoxSizer1);
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
    SetSizer(BoxSizer1);
    Layout();

    Connect(ID_TEXTCTRL1,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&KalkulatorFrame::OnTextCtrl1Text);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&KalkulatorFrame::OnButton1Click);
    Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&KalkulatorFrame::OnButton5Click);
    Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&KalkulatorFrame::OnButton6Click);
    Connect(ID_BUTTON17,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&KalkulatorFrame::OnButton17Click);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&KalkulatorFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&KalkulatorFrame::OnAbout);
    Connect(wxID_ANY,wxEVT_CLOSE_WINDOW,(wxObjectEventFunction)&KalkulatorFrame::OnClose);
    //*)
}



KalkulatorFrame::~KalkulatorFrame()
{
    //(*Destroy(KalkulatorFrame)
    //*)
}

void KalkulatorFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void KalkulatorFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void KalkulatorFrame::OnClose(wxCloseEvent& event)
{
    exit(0);
}

void KalkulatorFrame::OnTextCtrl1Text(wxCommandEvent& event)
{
}

void KalkulatorFrame::OnButton1Click(wxCommandEvent& event)
{
    TextCtrl1->Clear();
}

void KalkulatorFrame::OnButton17Click(wxCommandEvent& event)
{
}

void KalkulatorFrame::OnButton5Click(wxCommandEvent& event)
{
    wxString text = TextCtrl1->GetValue();
    text << wxT("1");
    TextCtrl1->SetValue(text);
}

void KalkulatorFrame::OnButton6Click(wxCommandEvent& event)
{
}
