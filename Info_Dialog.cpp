#include "Info_Dialog.h"

//(*InternalHeaders(Info_Dialog)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Info_Dialog)
const long Info_Dialog::ID_STATICBITMAP1 = wxNewId();
const long Info_Dialog::ID_STATICTEXT1 = wxNewId();
const long Info_Dialog::ID_STATICTEXT2 = wxNewId();
const long Info_Dialog::ID_STATICTEXT3 = wxNewId();
const long Info_Dialog::ID_BUTTON1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Info_Dialog,wxDialog)
	//(*EventTable(Info_Dialog)
	//*)
END_EVENT_TABLE()

Info_Dialog::Info_Dialog(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Info_Dialog)
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;
	wxBoxSizer* BoxSizer4;

	Create(parent, wxID_ANY, _T("eStaurant"), wxDefaultPosition, wxDefaultSize, 0, _T("wxID_ANY"));
	SetBackgroundColour(wxColour(247,247,247));
	wxFont thisFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	SetFont(thisFont);
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	Logo_Bmp = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("resources/logo.bmp"))), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
	BoxSizer2->Add(Logo_Bmp, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer2, 3, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
	BoxSizer3 = new wxBoxSizer(wxVERTICAL);
	eStaurant_StaticText = new wxStaticText(this, ID_STATICTEXT1, _T("eStaurant"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT1"));
	wxFont eStaurant_StaticTextFont(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	eStaurant_StaticText->SetFont(eStaurant_StaticTextFont);
	BoxSizer3->Add(eStaurant_StaticText, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Contact_StaticText = new wxStaticText(this, ID_STATICTEXT2, _T("Kontakt: bukowskibe@gmail.com"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT2"));
	wxFont Contact_StaticTextFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	Contact_StaticText->SetFont(Contact_StaticTextFont);
	BoxSizer3->Add(Contact_StaticText, 1, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
	Info_StaticText = new wxStaticText(this, ID_STATICTEXT3, _T("© 2020-2021 Bartosz Bukowski. Wszelkie prawa zastrzeżone."), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT3"));
	wxFont Info_StaticTextFont(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_ITALIC,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	Info_StaticText->SetFont(Info_StaticTextFont);
	BoxSizer3->Add(Info_StaticText, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	Close_Button = new wxButton(this, ID_BUTTON1, _T("Zamknij"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	Close_Button->SetMinSize(wxSize(130,25));
	Close_Button->SetMaxSize(wxSize(130,25));
	Close_Button->SetBackgroundColour(wxColour(230,230,230));
	BoxSizer4->Add(Close_Button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	Center();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Info_Dialog::OnClose_ButtonClick);
	//*)
}

Info_Dialog::~Info_Dialog()
{
	//(*Destroy(Info_Dialog)
	//*)
}

void Info_Dialog::OnClose_ButtonClick(wxCommandEvent& event) /**< Po wciśnięciu przycisku zamknięcia, zamyka okno dialogowe */
{
    EndModal(0);
}
