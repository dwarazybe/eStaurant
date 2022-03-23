/***************************************************************
 * Name:      eStaurantMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Bartosz Bukowski (bukowskibe@gmail.com)
 * Created:   2020-12-02
 * Copyright: Bartosz Bukowski ()
 * License:
 **************************************************************/

#include "eStaurantMain.h"
#include <wx/msgdlg.h>
#include <wx/textfile.h>
#include <wx/wfstream.h>
#include <wx/txtstrm.h>
#include <wx/log.h>
#include <wx/utils.h>
#include <wx/headercol.h>

//(*InternalHeaders(eStaurantFrame)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/icon.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
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

//(*IdInit(eStaurantFrame)
const long eStaurantFrame::ID_BUTTON2 = wxNewId();
const long eStaurantFrame::ID_BUTTON1 = wxNewId();
const long eStaurantFrame::ID_BUTTON3 = wxNewId();
const long eStaurantFrame::ID_STATICBITMAP1 = wxNewId();
const long eStaurantFrame::ID_STATICTEXT20 = wxNewId();
const long eStaurantFrame::ID_LISTCTRL1 = wxNewId();
const long eStaurantFrame::ID_STATICTEXT5 = wxNewId();
const long eStaurantFrame::ID_TEXTCTRL3 = wxNewId();
const long eStaurantFrame::ID_CHECKBOX1 = wxNewId();
const long eStaurantFrame::ID_COMBOBOX7 = wxNewId();
const long eStaurantFrame::ID_STATICTEXT1 = wxNewId();
const long eStaurantFrame::ID_TEXTCTRL1 = wxNewId();
const long eStaurantFrame::ID_STATICTEXT2 = wxNewId();
const long eStaurantFrame::ID_TEXTCTRL2 = wxNewId();
const long eStaurantFrame::ID_STATICTEXT3 = wxNewId();
const long eStaurantFrame::ID_CHOICE1 = wxNewId();
const long eStaurantFrame::ID_STATICTEXT4 = wxNewId();
const long eStaurantFrame::ID_COMBOBOX2 = wxNewId();
const long eStaurantFrame::ID_STATICTEXT11 = wxNewId();
const long eStaurantFrame::ID_TEXTCTRL4 = wxNewId();
const long eStaurantFrame::ID_BUTTON7 = wxNewId();
const long eStaurantFrame::ID_STATICTEXT6 = wxNewId();
const long eStaurantFrame::ID_COMBOBOX1 = wxNewId();
const long eStaurantFrame::ID_STATICTEXT12 = wxNewId();
const long eStaurantFrame::ID_TEXTCTRL5 = wxNewId();
const long eStaurantFrame::ID_BUTTON8 = wxNewId();
const long eStaurantFrame::ID_STATICTEXT7 = wxNewId();
const long eStaurantFrame::ID_COMBOBOX3 = wxNewId();
const long eStaurantFrame::ID_STATICTEXT13 = wxNewId();
const long eStaurantFrame::ID_TEXTCTRL6 = wxNewId();
const long eStaurantFrame::ID_BUTTON9 = wxNewId();
const long eStaurantFrame::ID_STATICTEXT8 = wxNewId();
const long eStaurantFrame::ID_COMBOBOX4 = wxNewId();
const long eStaurantFrame::ID_STATICTEXT14 = wxNewId();
const long eStaurantFrame::ID_TEXTCTRL7 = wxNewId();
const long eStaurantFrame::ID_BUTTON10 = wxNewId();
const long eStaurantFrame::ID_STATICTEXT9 = wxNewId();
const long eStaurantFrame::ID_COMBOBOX5 = wxNewId();
const long eStaurantFrame::ID_STATICTEXT15 = wxNewId();
const long eStaurantFrame::ID_TEXTCTRL8 = wxNewId();
const long eStaurantFrame::ID_BUTTON11 = wxNewId();
const long eStaurantFrame::ID_STATICTEXT10 = wxNewId();
const long eStaurantFrame::ID_COMBOBOX6 = wxNewId();
const long eStaurantFrame::ID_STATICTEXT16 = wxNewId();
const long eStaurantFrame::ID_TEXTCTRL9 = wxNewId();
const long eStaurantFrame::ID_STATICTEXT17 = wxNewId();
const long eStaurantFrame::ID_TEXTCTRL10 = wxNewId();
const long eStaurantFrame::ID_BUTTON5 = wxNewId();
const long eStaurantFrame::ID_BUTTON4 = wxNewId();
const long eStaurantFrame::ID_PANEL1 = wxNewId();
const long eStaurantFrame::ID_STATICTEXT18 = wxNewId();
const long eStaurantFrame::ID_TEXTCTRL11 = wxNewId();
const long eStaurantFrame::ID_STATICTEXT19 = wxNewId();
const long eStaurantFrame::ID_TEXTCTRL12 = wxNewId();
const long eStaurantFrame::ID_BUTTON12 = wxNewId();
const long eStaurantFrame::ID_PANEL2 = wxNewId();
const long eStaurantFrame::ID_BUTTON6 = wxNewId();
const long eStaurantFrame::ID_MESSAGEDIALOG1 = wxNewId();
const long eStaurantFrame::ID_OPEN = wxNewId();
const long eStaurantFrame::ID_CUSTOMERS = wxNewId();
const long eStaurantFrame::ID_MENU = wxNewId();
const long eStaurantFrame::ID_ARCHIVE = wxNewId();
const long eStaurantFrame::ID_CLOSE = wxNewId();
const long eStaurantFrame::ID_ARCHIVEORDER = wxNewId();
const long eStaurantFrame::ID_INFO = wxNewId();
//*)

BEGIN_EVENT_TABLE(eStaurantFrame,wxFrame)
    //(*EventTable(eStaurantFrame)
    //*)
END_EVENT_TABLE()

eStaurantFrame::eStaurantFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(eStaurantFrame)
    wxBoxSizer* BoxSizer10;
    wxBoxSizer* BoxSizer11;
    wxBoxSizer* BoxSizer12;
    wxBoxSizer* BoxSizer13;
    wxBoxSizer* BoxSizer14;
    wxBoxSizer* BoxSizer15;
    wxBoxSizer* BoxSizer16;
    wxBoxSizer* BoxSizer17;
    wxBoxSizer* BoxSizer18;
    wxBoxSizer* BoxSizer19;
    wxBoxSizer* BoxSizer1;
    wxBoxSizer* BoxSizer20;
    wxBoxSizer* BoxSizer21;
    wxBoxSizer* BoxSizer22;
    wxBoxSizer* BoxSizer23;
    wxBoxSizer* BoxSizer24;
    wxBoxSizer* BoxSizer2;
    wxBoxSizer* BoxSizer3;
    wxBoxSizer* BoxSizer4;
    wxBoxSizer* BoxSizer5;
    wxBoxSizer* BoxSizer6;
    wxBoxSizer* BoxSizer7;
    wxBoxSizer* BoxSizer8;
    wxBoxSizer* BoxSizer9;
    wxStaticBoxSizer* NewCustomer_Sizer;
    wxStaticBoxSizer* NewOrder_Sizer;

    Create(parent, wxID_ANY, _T("eStaurant"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL, _T("wxID_ANY"));
    SetBackgroundColour(wxColour(247,247,247));
    wxFont thisFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    SetFont(thisFont);
    wxTopLevelWindow::Maximize(true);
    {
    	wxIcon FrameIcon;
    	FrameIcon.CopyFromBitmap(wxBitmap(wxImage(_T("resources/icon.ico"))));
    	SetIcon(FrameIcon);
    }
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    BoxSizer10 = new wxBoxSizer(wxVERTICAL);
    BoxSizer22 = new wxBoxSizer(wxVERTICAL);
    Customers_Button = new wxButton(this, ID_BUTTON2, _T("Klienci"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    Customers_Button->SetMinSize(wxSize(96,96));
    Customers_Button->SetMaxSize(wxSize(128,128));
    Customers_Button->SetBackgroundColour(wxColour(230,230,230));
    BoxSizer22->Add(Customers_Button, 0, wxTOP|wxBOTTOM|wxLEFT|wxEXPAND, 3);
    Menu_Button = new wxButton(this, ID_BUTTON1, _T("Menu"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Menu_Button->SetMinSize(wxSize(96,96));
    Menu_Button->SetMaxSize(wxSize(128,128));
    Menu_Button->SetBackgroundColour(wxColour(230,230,230));
    BoxSizer22->Add(Menu_Button, 0, wxBOTTOM|wxLEFT|wxEXPAND, 3);
    Archive_Button = new wxButton(this, ID_BUTTON3, _T("Archiwum"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
    Archive_Button->SetMinSize(wxSize(96,96));
    Archive_Button->SetMaxSize(wxSize(128,128));
    Archive_Button->SetBackgroundColour(wxColour(230,230,230));
    BoxSizer22->Add(Archive_Button, 0, wxBOTTOM|wxLEFT|wxEXPAND, 3);
    BoxSizer10->Add(BoxSizer22, 1, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer19 = new wxBoxSizer(wxVERTICAL);
    SmallLogo_Bmp = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("resources/logo_small.bmp"))), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
    BoxSizer19->Add(SmallLogo_Bmp, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    eStaurant2021_StaticText = new wxStaticText(this, ID_STATICTEXT20, _T("eStaurant 2021"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, _T("ID_STATICTEXT20"));
    wxFont eStaurant2021_StaticTextFont(8,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    eStaurant2021_StaticText->SetFont(eStaurant2021_StaticTextFont);
    BoxSizer19->Add(eStaurant2021_StaticText, 1, wxBOTTOM|wxLEFT|wxRIGHT|wxALIGN_LEFT, 5);
    BoxSizer10->Add(BoxSizer19, 0, wxALIGN_CENTER_HORIZONTAL, 10);
    BoxSizer1->Add(BoxSizer10, 0, wxTOP|wxBOTTOM|wxLEFT|wxEXPAND, 5);
    BoxSizer2 = new wxBoxSizer(wxVERTICAL);
    Orders_ListCtrl = new wxListCtrl(this, ID_LISTCTRL1, wxDefaultPosition, wxDefaultSize, wxLC_REPORT|wxVSCROLL, wxDefaultValidator, _T("ID_LISTCTRL1"));
    Orders_ListCtrl->SetMinSize(wxSize(-1,650));
    wxListItem Col_Number;
    Col_Number.SetId(0);
    Col_Number.SetText(_T("Numer"));
    Col_Number.SetWidth(50);
    Orders_ListCtrl->InsertColumn(0, Col_Number);

    wxListItem Col_Address;
    Col_Address.SetId(1);
    Col_Address.SetText(_T("Adres"));
    Col_Address.SetWidth(120);
    Orders_ListCtrl->InsertColumn(1, Col_Address);

    wxListItem Col_Price;
    Col_Price.SetId(2);
    Col_Price.SetText(_T("Kwota"));
    Col_Price.SetWidth(85);
    Orders_ListCtrl->InsertColumn(2, Col_Price);

    wxListItem Col_Payment;
    Col_Payment.SetId(3);
    Col_Payment.SetText(_T("Płatność"));
    Col_Payment.SetWidth(100);
    Orders_ListCtrl->InsertColumn(3, Col_Payment);

    wxListItem Col_Telephone;
    Col_Telephone.SetId(4);
    Col_Telephone.SetText(_T("Numer tel."));
    Col_Telephone.SetWidth(80);
    Orders_ListCtrl->InsertColumn(4, Col_Telephone);

    wxListItem Col_Date;
    Col_Date.SetId(5);
    Col_Date.SetText(_T("Data"));
    Col_Date.SetWidth(135);
    Orders_ListCtrl->InsertColumn(5, Col_Date);

    wxListItem Col_Info;
    Col_Info.SetId(6);
    Col_Info.SetText(_T("Szczegóły"));
    Col_Info.SetWidth(350);
    Orders_ListCtrl->InsertColumn(6, Col_Info);
    BoxSizer2->Add(Orders_ListCtrl, 9, wxALL|wxEXPAND, 4);
    BoxSizer1->Add(BoxSizer2, 9, wxALL|wxEXPAND, 5);
    BoxSizer4 = new wxBoxSizer(wxVERTICAL);
    BoxSizer12 = new wxBoxSizer(wxHORIZONTAL);
    ActiveOrders_StaticText = new wxStaticText(this, ID_STATICTEXT5, _T("Aktywne zamówienia:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
    wxFont ActiveOrders_StaticTextFont(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    ActiveOrders_StaticText->SetFont(ActiveOrders_StaticTextFont);
    BoxSizer12->Add(ActiveOrders_StaticText, 0, wxTOP|wxBOTTOM|wxRIGHT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    ActiveOrders_TextCtrl = new wxTextCtrl(this, ID_TEXTCTRL3, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY, wxDefaultValidator, _T("ID_TEXTCTRL3"));
    ActiveOrders_TextCtrl->SetMinSize(wxSize(46,23));
    ActiveOrders_TextCtrl->SetMaxSize(wxSize(46,23));
    BoxSizer12->Add(ActiveOrders_TextCtrl, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    BoxSizer4->Add(BoxSizer12, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxALIGN_CENTER_HORIZONTAL, 5);
    NewOrderPanel = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    NewOrderPanel->SetBackgroundColour(wxColour(247,247,247));
    NewOrder_Sizer = new wxStaticBoxSizer(wxVERTICAL, NewOrderPanel, _T("Nowe zamówienie"));
    BoxSizer24 = new wxBoxSizer(wxHORIZONTAL);
    Customer_CheckBox = new wxCheckBox(NewOrderPanel, ID_CHECKBOX1, _T(" Klient z listy"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX1"));
    Customer_CheckBox->SetValue(false);
    BoxSizer24->Add(Customer_CheckBox, 1, wxTOP|wxBOTTOM|wxLEFT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    Customer_ComboBox = new wxComboBox(NewOrderPanel, ID_COMBOBOX7, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, 0, wxCB_READONLY|wxVSCROLL|wxHSCROLL, wxDefaultValidator, _T("ID_COMBOBOX7"));
    Customer_ComboBox->SetMinSize(wxSize(200,23));
    Customer_ComboBox->Disable();
    CustomerComboBoxAddItems();
    BoxSizer24->Add(Customer_ComboBox, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    NewOrder_Sizer->Add(BoxSizer24, 1, wxBOTTOM|wxLEFT|wxRIGHT|wxALIGN_RIGHT, 3);
    BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
    Address_StaticText = new wxStaticText(NewOrderPanel, ID_STATICTEXT1, _T("Adres "), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, _T("ID_STATICTEXT1"));
    BoxSizer5->Add(Address_StaticText, 1, wxALL|wxALIGN_CENTER_VERTICAL, 3);
    Address_TextCtrl = new wxTextCtrl(NewOrderPanel, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    Address_TextCtrl->SetMinSize(wxSize(200,23));
    BoxSizer5->Add(Address_TextCtrl, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    NewOrder_Sizer->Add(BoxSizer5, 1, wxBOTTOM|wxLEFT|wxRIGHT|wxALIGN_RIGHT, 3);
    BoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
    Telephone_StaticText = new wxStaticText(NewOrderPanel, ID_STATICTEXT2, _T("Numer tel. "), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, _T("ID_STATICTEXT2"));
    BoxSizer6->Add(Telephone_StaticText, 0, wxALL|wxALIGN_CENTER_VERTICAL, 3);
    Telephone_TextCtrl = new wxTextCtrl(NewOrderPanel, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    Telephone_TextCtrl->SetMinSize(wxSize(200,23));
    wxTextValidator numVal(wxFILTER_DIGITS);
    Telephone_TextCtrl->SetValidator(numVal);
    BoxSizer6->Add(Telephone_TextCtrl, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    NewOrder_Sizer->Add(BoxSizer6, 1, wxBOTTOM|wxLEFT|wxRIGHT|wxALIGN_RIGHT, 3);
    BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
    Payment_StaticText = new wxStaticText(NewOrderPanel, ID_STATICTEXT3, _T("Płatność "), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, _T("ID_STATICTEXT3"));
    BoxSizer7->Add(Payment_StaticText, 1, wxALL|wxALIGN_CENTER_VERTICAL, 3);
    Payment_ChoiceBox = new wxChoice(NewOrderPanel, ID_CHOICE1, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
    Payment_ChoiceBox->Append(_T("Gotówka"));
    Payment_ChoiceBox->Append(_T("Karta płatnicza"));
    Payment_ChoiceBox->Append(_T("Przelew"));
    Payment_ChoiceBox->Append(_T("Inny"));
    Payment_ChoiceBox->SetMinSize(wxSize(200,23));
    BoxSizer7->Add(Payment_ChoiceBox, 2, wxALL|wxALIGN_CENTER_VERTICAL, 3);
    NewOrder_Sizer->Add(BoxSizer7, 1, wxBOTTOM|wxLEFT|wxRIGHT|wxALIGN_RIGHT, 3);
    BoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
    Dish1_StaticText = new wxStaticText(NewOrderPanel, ID_STATICTEXT4, _T("Danie nr 1 "), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, _T("ID_STATICTEXT4"));
    BoxSizer8->Add(Dish1_StaticText, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    Dish1_ComboBox = new wxComboBox(NewOrderPanel, ID_COMBOBOX2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, 0, wxCB_SORT|wxCB_READONLY|wxVSCROLL|wxHSCROLL, wxDefaultValidator, _T("ID_COMBOBOX2"));
    Dish1_ComboBox->SetMinSize(wxSize(146,23));
    BoxSizer8->Add(Dish1_ComboBox, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    StaticText10 = new wxStaticText(NewOrderPanel, ID_STATICTEXT11, _T("x"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT11"));
    BoxSizer8->Add(StaticText10, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    Dish1Multiplier_TextCtrl = new wxTextCtrl(NewOrderPanel, ID_TEXTCTRL4, _T("1"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
    Dish1Multiplier_TextCtrl->SetMaxLength(3);
    Dish1Multiplier_TextCtrl->SetMinSize(wxSize(35,23));
    Dish1Multiplier_TextCtrl->SetMaxSize(wxSize(35,23));
    Dish1Multiplier_TextCtrl->SetValidator(numVal);
    BoxSizer8->Add(Dish1Multiplier_TextCtrl, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    NewOrder_Sizer->Add(BoxSizer8, 1, wxBOTTOM|wxLEFT|wxRIGHT|wxALIGN_RIGHT, 3);
    BoxSizer13 = new wxBoxSizer(wxHORIZONTAL);
    AddDish2_Button = new wxButton(NewOrderPanel, ID_BUTTON7, _T("+"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON7"));
    AddDish2_Button->SetMinSize(wxSize(23,23));
    AddDish2_Button->SetMaxSize(wxSize(23,23));
    AddDish2_Button->SetBackgroundColour(wxColour(230,230,230));
    BoxSizer13->Add(AddDish2_Button, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    Dish2_StaticText = new wxStaticText(NewOrderPanel, ID_STATICTEXT6, _T("Danie nr 2 "), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, _T("ID_STATICTEXT6"));
    BoxSizer13->Add(Dish2_StaticText, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    Dish2_ComboBox = new wxComboBox(NewOrderPanel, ID_COMBOBOX1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, 0, wxCB_SORT|wxCB_READONLY|wxVSCROLL|wxHSCROLL, wxDefaultValidator, _T("ID_COMBOBOX1"));
    Dish2_ComboBox->SetMinSize(wxSize(146,25));
    Dish2_ComboBox->Disable();
    BoxSizer13->Add(Dish2_ComboBox, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    StaticText11 = new wxStaticText(NewOrderPanel, ID_STATICTEXT12, _T("x"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT12"));
    BoxSizer13->Add(StaticText11, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    Dish2Multiplier_TextCtrl = new wxTextCtrl(NewOrderPanel, ID_TEXTCTRL5, _T("1"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
    Dish2Multiplier_TextCtrl->SetMaxLength(3);
    Dish2Multiplier_TextCtrl->SetMinSize(wxSize(35,23));
    Dish2Multiplier_TextCtrl->SetMaxSize(wxSize(35,23));
    Dish2Multiplier_TextCtrl->Disable();
    Dish2Multiplier_TextCtrl->SetValidator(numVal);
    BoxSizer13->Add(Dish2Multiplier_TextCtrl, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    NewOrder_Sizer->Add(BoxSizer13, 1, wxBOTTOM|wxLEFT|wxRIGHT|wxALIGN_RIGHT, 3);
    BoxSizer14 = new wxBoxSizer(wxHORIZONTAL);
    AddDish3_Button = new wxButton(NewOrderPanel, ID_BUTTON8, _T("+"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON8"));
    AddDish3_Button->SetMinSize(wxSize(23,23));
    AddDish3_Button->SetMaxSize(wxSize(23,23));
    AddDish3_Button->SetBackgroundColour(wxColour(230,230,230));
    BoxSizer14->Add(AddDish3_Button, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    Dish3_StaticText = new wxStaticText(NewOrderPanel, ID_STATICTEXT7, _T("Danie nr 3 "), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, _T("ID_STATICTEXT7"));
    BoxSizer14->Add(Dish3_StaticText, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    Dish3_ComboBox = new wxComboBox(NewOrderPanel, ID_COMBOBOX3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, 0, wxCB_SORT|wxCB_READONLY|wxVSCROLL|wxHSCROLL, wxDefaultValidator, _T("ID_COMBOBOX3"));
    Dish3_ComboBox->SetMinSize(wxSize(146,25));
    Dish3_ComboBox->Disable();
    BoxSizer14->Add(Dish3_ComboBox, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    StaticText12 = new wxStaticText(NewOrderPanel, ID_STATICTEXT13, _T("x"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT13"));
    BoxSizer14->Add(StaticText12, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    Dish3Multiplier_TextCtrl = new wxTextCtrl(NewOrderPanel, ID_TEXTCTRL6, _T("1"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
    Dish3Multiplier_TextCtrl->SetMaxLength(3);
    Dish3Multiplier_TextCtrl->SetMinSize(wxSize(35,23));
    Dish3Multiplier_TextCtrl->SetMaxSize(wxSize(35,23));
    Dish3Multiplier_TextCtrl->Disable();
    Dish3Multiplier_TextCtrl->SetValidator(numVal);
    BoxSizer14->Add(Dish3Multiplier_TextCtrl, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    NewOrder_Sizer->Add(BoxSizer14, 1, wxBOTTOM|wxLEFT|wxRIGHT|wxALIGN_RIGHT, 3);
    BoxSizer15 = new wxBoxSizer(wxHORIZONTAL);
    AddDish4_Button = new wxButton(NewOrderPanel, ID_BUTTON9, _T("+"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON9"));
    AddDish4_Button->SetMinSize(wxSize(23,23));
    AddDish4_Button->SetMaxSize(wxSize(23,23));
    AddDish4_Button->SetBackgroundColour(wxColour(230,230,230));
    BoxSizer15->Add(AddDish4_Button, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    Dish4_StaticText = new wxStaticText(NewOrderPanel, ID_STATICTEXT8, _T("Danie nr 4 "), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, _T("ID_STATICTEXT8"));
    BoxSizer15->Add(Dish4_StaticText, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    Dish4_ComboBox = new wxComboBox(NewOrderPanel, ID_COMBOBOX4, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, 0, wxCB_SORT|wxCB_READONLY|wxVSCROLL|wxHSCROLL, wxDefaultValidator, _T("ID_COMBOBOX4"));
    Dish4_ComboBox->SetMinSize(wxSize(146,25));
    Dish4_ComboBox->Disable();
    BoxSizer15->Add(Dish4_ComboBox, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    StaticText13 = new wxStaticText(NewOrderPanel, ID_STATICTEXT14, _T("x"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT14"));
    BoxSizer15->Add(StaticText13, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    Dish4Multiplier_TextCtrl = new wxTextCtrl(NewOrderPanel, ID_TEXTCTRL7, _T("1"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL7"));
    Dish4Multiplier_TextCtrl->SetMaxLength(3);
    Dish4Multiplier_TextCtrl->SetMinSize(wxSize(35,23));
    Dish4Multiplier_TextCtrl->SetMaxSize(wxSize(35,23));
    Dish4Multiplier_TextCtrl->Disable();
    Dish4Multiplier_TextCtrl->SetValidator(numVal);
    BoxSizer15->Add(Dish4Multiplier_TextCtrl, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    NewOrder_Sizer->Add(BoxSizer15, 1, wxBOTTOM|wxLEFT|wxRIGHT|wxALIGN_RIGHT, 3);
    BoxSizer16 = new wxBoxSizer(wxHORIZONTAL);
    AddDish5_Button = new wxButton(NewOrderPanel, ID_BUTTON10, _T("+"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON10"));
    AddDish5_Button->SetMinSize(wxSize(23,23));
    AddDish5_Button->SetMaxSize(wxSize(23,23));
    AddDish5_Button->SetBackgroundColour(wxColour(230,230,230));
    BoxSizer16->Add(AddDish5_Button, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    Dish5_StaticText = new wxStaticText(NewOrderPanel, ID_STATICTEXT9, _T("Danie nr 5 "), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, _T("ID_STATICTEXT9"));
    BoxSizer16->Add(Dish5_StaticText, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    Dish5_ComboBox = new wxComboBox(NewOrderPanel, ID_COMBOBOX5, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, 0, wxCB_SORT|wxCB_READONLY|wxVSCROLL|wxHSCROLL, wxDefaultValidator, _T("ID_COMBOBOX5"));
    Dish5_ComboBox->SetMinSize(wxSize(146,25));
    Dish5_ComboBox->Disable();
    BoxSizer16->Add(Dish5_ComboBox, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    StaticText14 = new wxStaticText(NewOrderPanel, ID_STATICTEXT15, _T("x"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT15"));
    BoxSizer16->Add(StaticText14, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    Dish5Multiplier_TextCtrl = new wxTextCtrl(NewOrderPanel, ID_TEXTCTRL8, _T("1"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL8"));
    Dish5Multiplier_TextCtrl->SetMaxLength(3);
    Dish5Multiplier_TextCtrl->SetMinSize(wxSize(35,23));
    Dish5Multiplier_TextCtrl->SetMaxSize(wxSize(35,23));
    Dish5Multiplier_TextCtrl->Disable();
    Dish5Multiplier_TextCtrl->SetValidator(numVal);
    BoxSizer16->Add(Dish5Multiplier_TextCtrl, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    NewOrder_Sizer->Add(BoxSizer16, 1, wxBOTTOM|wxLEFT|wxRIGHT|wxALIGN_RIGHT, 3);
    BoxSizer17 = new wxBoxSizer(wxHORIZONTAL);
    AddDish6_Button = new wxButton(NewOrderPanel, ID_BUTTON11, _T("+"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON11"));
    AddDish6_Button->SetMinSize(wxSize(23,23));
    AddDish6_Button->SetMaxSize(wxSize(23,23));
    AddDish6_Button->SetBackgroundColour(wxColour(230,230,230));
    BoxSizer17->Add(AddDish6_Button, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    Dish6_StaticText = new wxStaticText(NewOrderPanel, ID_STATICTEXT10, _T("Danie nr 6 "), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, _T("ID_STATICTEXT10"));
    BoxSizer17->Add(Dish6_StaticText, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    Dish6_ComboBox = new wxComboBox(NewOrderPanel, ID_COMBOBOX6, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, 0, wxCB_SORT|wxCB_READONLY|wxVSCROLL|wxHSCROLL, wxDefaultValidator, _T("ID_COMBOBOX6"));
    Dish6_ComboBox->SetMinSize(wxSize(146,-1));
    Dish6_ComboBox->Disable();
    DishComboBoxesAddItems();
    BoxSizer17->Add(Dish6_ComboBox, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    StaticText15 = new wxStaticText(NewOrderPanel, ID_STATICTEXT16, _T("x"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT16"));
    BoxSizer17->Add(StaticText15, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    Dish6Multiplier_TextCtrl = new wxTextCtrl(NewOrderPanel, ID_TEXTCTRL9, _T("1"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL9"));
    Dish6Multiplier_TextCtrl->SetMaxLength(3);
    Dish6Multiplier_TextCtrl->SetMinSize(wxSize(35,23));
    Dish6Multiplier_TextCtrl->SetMaxSize(wxSize(35,23));
    Dish6Multiplier_TextCtrl->Disable();
    Dish2Multiplier_TextCtrl->SetValidator(numVal);
    BoxSizer17->Add(Dish6Multiplier_TextCtrl, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    NewOrder_Sizer->Add(BoxSizer17, 1, wxBOTTOM|wxLEFT|wxRIGHT|wxALIGN_RIGHT, 3);
    BoxSizer18 = new wxBoxSizer(wxHORIZONTAL);
    OrderPrice_StaticText = new wxStaticText(NewOrderPanel, ID_STATICTEXT17, _T("Kwota zamówienia:"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, _T("ID_STATICTEXT17"));
    BoxSizer18->Add(OrderPrice_StaticText, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    TotalPrice_TextCtrl = new wxTextCtrl(NewOrderPanel, ID_TEXTCTRL10, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY, wxDefaultValidator, _T("ID_TEXTCTRL10"));
    BoxSizer18->Add(TotalPrice_TextCtrl, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    NewOrder_Sizer->Add(BoxSizer18, 1, wxBOTTOM|wxLEFT|wxRIGHT|wxALIGN_RIGHT, 3);
    BoxSizer9 = new wxBoxSizer(wxHORIZONTAL);
    OrderClear_Button = new wxButton(NewOrderPanel, ID_BUTTON5, _T("Wyczyść"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
    OrderClear_Button->SetMinSize(wxSize(110,25));
    OrderClear_Button->SetBackgroundColour(wxColour(230,230,230));
    BoxSizer9->Add(OrderClear_Button, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    OrderAdd_Button = new wxButton(NewOrderPanel, ID_BUTTON4, _T("Dodaj"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
    OrderAdd_Button->SetMinSize(wxSize(110,25));
    OrderAdd_Button->SetBackgroundColour(wxColour(230,230,230));
    BoxSizer9->Add(OrderAdd_Button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    NewOrder_Sizer->Add(BoxSizer9, 1, wxLEFT|wxRIGHT|wxALIGN_RIGHT, 3);
    NewOrderPanel->SetSizer(NewOrder_Sizer);
    NewOrder_Sizer->Fit(NewOrderPanel);
    NewOrder_Sizer->SetSizeHints(NewOrderPanel);
    BoxSizer4->Add(NewOrderPanel, 0, wxEXPAND, 5);
    NewCustomerPanel = new wxPanel(this, ID_PANEL2, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL2"));
    NewCustomerPanel->SetBackgroundColour(wxColour(247,247,247));
    NewCustomer_Sizer = new wxStaticBoxSizer(wxVERTICAL, NewCustomerPanel, _T("Nowy klient"));
    BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    FirstName_StaticText = new wxStaticText(NewCustomerPanel, ID_STATICTEXT18, _T("Imię"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, _T("ID_STATICTEXT18"));
    FirstName_StaticText->Disable();
    BoxSizer3->Add(FirstName_StaticText, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    FirstName_TextCtrl = new wxTextCtrl(NewCustomerPanel, ID_TEXTCTRL11, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL11"));
    FirstName_TextCtrl->SetMinSize(wxSize(200,23));
    FirstName_TextCtrl->Disable();
    BoxSizer3->Add(FirstName_TextCtrl, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    NewCustomer_Sizer->Add(BoxSizer3, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxALIGN_RIGHT, 3);
    BoxSizer20 = new wxBoxSizer(wxHORIZONTAL);
    LastName_StaticText = new wxStaticText(NewCustomerPanel, ID_STATICTEXT19, _T("Nazwisko"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, _T("ID_STATICTEXT19"));
    LastName_StaticText->Disable();
    BoxSizer20->Add(LastName_StaticText, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    LastName_TextCtrl = new wxTextCtrl(NewCustomerPanel, ID_TEXTCTRL12, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL12"));
    LastName_TextCtrl->SetMinSize(wxSize(200,23));
    LastName_TextCtrl->Disable();
    BoxSizer20->Add(LastName_TextCtrl, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    NewCustomer_Sizer->Add(BoxSizer20, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxALIGN_RIGHT, 3);
    BoxSizer21 = new wxBoxSizer(wxHORIZONTAL);
    CustomerAdd_Button = new wxButton(NewCustomerPanel, ID_BUTTON12, _T("Dodaj"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON12"));
    CustomerAdd_Button->SetMinSize(wxSize(110,25));
    CustomerAdd_Button->Disable();
    CustomerAdd_Button->SetBackgroundColour(wxColour(230,230,230));
    BoxSizer21->Add(CustomerAdd_Button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    NewCustomer_Sizer->Add(BoxSizer21, 1, wxLEFT|wxRIGHT|wxALIGN_RIGHT, 3);
    NewCustomerPanel->SetSizer(NewCustomer_Sizer);
    NewCustomer_Sizer->Fit(NewCustomerPanel);
    NewCustomer_Sizer->SetSizeHints(NewCustomerPanel);
    BoxSizer4->Add(NewCustomerPanel, 0, wxTOP|wxEXPAND, 12);
    BoxSizer11 = new wxBoxSizer(wxHORIZONTAL);
    BoxSizer23 = new wxBoxSizer(wxHORIZONTAL);
    OrderArchive_Button = new wxButton(this, ID_BUTTON6, _T("Archiwizuj"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON6"));
    OrderArchive_Button->SetMinSize(wxSize(110,25));
    OrderArchive_Button->Disable();
    OrderArchive_Button->SetBackgroundColour(wxColour(230,230,230));
    BoxSizer23->Add(OrderArchive_Button, 1, wxALL|wxALIGN_TOP, 3);
    BoxSizer11->Add(BoxSizer23, 1, wxLEFT|wxRIGHT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
    BoxSizer4->Add(BoxSizer11, 0, wxLEFT|wxRIGHT|wxALIGN_RIGHT, 5);
    BoxSizer1->Add(BoxSizer4, 2, wxTOP|wxBOTTOM|wxRIGHT|wxEXPAND, 5);
    SetSizer(BoxSizer1);
    ExitConfirmation = new wxMessageDialog(this, _T("Opuścić program\?"), _T("eStaurant"), wxOK|wxCANCEL, wxDefaultPosition);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    Menu_ReadOrdersList = new wxMenuItem(Menu1, ID_OPEN, _T("&Wczytaj ostatnią listę"), _T("Wczytaj ostatnią listę zamówień"), wxITEM_NORMAL);
    Menu1->Append(Menu_ReadOrdersList);
    Menu1->AppendSeparator();
    Menu_CustomersList = new wxMenuItem(Menu1, ID_CUSTOMERS, _T("&Lista klientów...\tCtrl+K"), _T("Wyświetl listę klientów"), wxITEM_NORMAL);
    Menu1->Append(Menu_CustomersList);
    Menu_MenuList = new wxMenuItem(Menu1, ID_MENU, _T("&Menu potraw...\tCtrl+M"), _T("Wyświetl menu potraw"), wxITEM_NORMAL);
    Menu1->Append(Menu_MenuList);
    Menu_ArchiveList = new wxMenuItem(Menu1, ID_ARCHIVE, _T("&Archiwum zamówień...\tCtrl+N"), _T("Wyświetl archiwum zamówień"), wxITEM_NORMAL);
    Menu1->Append(Menu_ArchiveList);
    Menu1->AppendSeparator();
    Menu_Close = new wxMenuItem(Menu1, ID_CLOSE, _T("&Zakończ\tAlt+F4"), _T("Zakończ działanie programu"), wxITEM_NORMAL);
    Menu1->Append(Menu_Close);
    MenuBar1->Append(Menu1, _T("&Plik"));
    Menu3 = new wxMenu();
    Menu_ArchiveOrder = new wxMenuItem(Menu3, ID_ARCHIVEORDER, _T("&Archiwizuj zamówienie"), wxEmptyString, wxITEM_NORMAL);
    Menu3->Append(Menu_ArchiveOrder);
    Menu_ArchiveOrder->Enable(false);
    MenuBar1->Append(Menu3, _T("&Edycja"));
    Menu2 = new wxMenu();
    Menu_About = new wxMenuItem(Menu2, ID_INFO, _T("&eStaurant - informacje\tCtrl+I"), wxEmptyString, wxITEM_NORMAL);
    Menu2->Append(Menu_About);
    MenuBar1->Append(Menu2, _T("&Pomoc"));
    SetMenuBar(MenuBar1);
    BoxSizer1->Fit(this);
    BoxSizer1->SetSizeHints(this);
    Center();

    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&eStaurantFrame::OnCustomers_ButtonClick);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&eStaurantFrame::OnMenu_ButtonClick);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&eStaurantFrame::OnArchive_ButtonClick);
    Connect(ID_LISTCTRL1,wxEVT_COMMAND_LIST_ITEM_SELECTED,(wxObjectEventFunction)&eStaurantFrame::OnOrders_ListCtrlItemSelect);
    Connect(ID_LISTCTRL1,wxEVT_COMMAND_LIST_ITEM_DESELECTED,(wxObjectEventFunction)&eStaurantFrame::OnOrders_ListCtrlItemDeselect);
    Connect(ID_LISTCTRL1,wxEVT_COMMAND_LIST_COL_CLICK,(wxObjectEventFunction)&eStaurantFrame::OnOrders_ListCtrlColumnClick);
    Connect(ID_CHECKBOX1,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&eStaurantFrame::OnCustomer_CheckBoxClick);
    Connect(ID_COMBOBOX7,wxEVT_COMMAND_COMBOBOX_SELECTED,(wxObjectEventFunction)&eStaurantFrame::OnCustomer_ComboBoxSelected);
    Connect(ID_COMBOBOX2,wxEVT_COMMAND_COMBOBOX_SELECTED,(wxObjectEventFunction)&eStaurantFrame::OnDish1_ComboBoxSelected);
    Connect(ID_TEXTCTRL4,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&eStaurantFrame::OnDish1_ComboBoxSelected);
    Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&eStaurantFrame::OnAddDish2_ButtonClick);
    Connect(ID_COMBOBOX1,wxEVT_COMMAND_COMBOBOX_SELECTED,(wxObjectEventFunction)&eStaurantFrame::OnDish2_ComboBoxSelected);
    Connect(ID_TEXTCTRL5,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&eStaurantFrame::OnDish2_ComboBoxSelected);
    Connect(ID_BUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&eStaurantFrame::OnAddDish3_ButtonClick);
    Connect(ID_COMBOBOX3,wxEVT_COMMAND_COMBOBOX_SELECTED,(wxObjectEventFunction)&eStaurantFrame::OnDish3_ComboBoxSelected);
    Connect(ID_TEXTCTRL6,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&eStaurantFrame::OnDish3_ComboBoxSelected);
    Connect(ID_BUTTON9,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&eStaurantFrame::OnAddDish4_ButtonClick);
    Connect(ID_COMBOBOX4,wxEVT_COMMAND_COMBOBOX_SELECTED,(wxObjectEventFunction)&eStaurantFrame::OnDish4_ComboBoxSelected);
    Connect(ID_TEXTCTRL7,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&eStaurantFrame::OnDish4_ComboBoxSelected);
    Connect(ID_BUTTON10,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&eStaurantFrame::OnAddDish5_ButtonClick);
    Connect(ID_COMBOBOX5,wxEVT_COMMAND_COMBOBOX_SELECTED,(wxObjectEventFunction)&eStaurantFrame::OnDish5_ComboBoxSelected);
    Connect(ID_TEXTCTRL8,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&eStaurantFrame::OnDish5_ComboBoxSelected);
    Connect(ID_BUTTON11,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&eStaurantFrame::OnAddDish6_ButtonClick);
    Connect(ID_COMBOBOX6,wxEVT_COMMAND_COMBOBOX_SELECTED,(wxObjectEventFunction)&eStaurantFrame::OnDish6_ComboBoxSelected);
    Connect(ID_TEXTCTRL9,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&eStaurantFrame::OnDish6_ComboBoxSelected);
    Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&eStaurantFrame::OnOrderClear_ButtonClick);
    Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&eStaurantFrame::OnOrderAdd_ButtonClick);
    Connect(ID_BUTTON12,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&eStaurantFrame::OnCustomerAdd_ButtonClick);
    Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&eStaurantFrame::OnOrderArchive_ButtonClick);
    Connect(ID_OPEN,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&eStaurantFrame::OnOrders_ReadClick);
    Connect(ID_CUSTOMERS,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&eStaurantFrame::OnCustomers_ButtonClick);
    Connect(ID_MENU,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&eStaurantFrame::OnMenu_ButtonClick);
    Connect(ID_ARCHIVE,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&eStaurantFrame::OnArchive_ButtonClick);
    Connect(ID_CLOSE,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&eStaurantFrame::OnQuit);
    Connect(ID_ARCHIVEORDER,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&eStaurantFrame::OnOrderArchive_ButtonClick);
    Connect(ID_INFO,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&eStaurantFrame::OnMenu_AboutSelected);
    Connect(wxID_ANY,wxEVT_CLOSE_WINDOW,(wxObjectEventFunction)&eStaurantFrame::OnClose);
    //*)
}

eStaurantFrame::~eStaurantFrame()
{
    //(*Destroy(eStaurantFrame)
    //*)
}

void eStaurantFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void eStaurantFrame::OnClose(wxCloseEvent& event) /**< Po naciśnięciu przycisku zamknięcia, wyświetla okno dialogowe 'ExitConfirmation' z potwierdzeniem wyjścia z aplikacji */
{
    if(ExitConfirmation->ShowModal()==wxID_CANCEL)
        return;
    else
        Destroy();
}

void eStaurantFrame::ClearFile(wxString path)
{
    wxTextFile file(path);
    if(file.Exists())
        file.Open(path, wxConvUTF8);
    file.Clear();
    file.Write();
    file.Close();
}

void eStaurantFrame::OnMenu_ButtonClick(wxCommandEvent& event) /**< Po naciśnięciu przycisku 'Menu', wyświetla okno dialogowe 'MenuDialog' zawierające listę potraw */
{
    Menu_Dialog MenuDialog(this);
    if(MenuDialog.ShowModal()==wxID_CANCEL)
        return;
    DishComboBoxesClear();
    DishComboBoxesAddItems();
}

void eStaurantFrame::OnCustomers_ButtonClick(wxCommandEvent& event) /**< Po naciśnięciu przycisku 'Klienci', wyświetla okno dialogowe 'CustomersDialog' zawierające listę klientów */
{
    Customers_Dialog CustomersDialog(this);
    if(CustomersDialog.ShowModal()==wxID_CANCEL)
        return;
    Customer_ComboBox->Clear();
    CustomerComboBoxAddItems();
}

void eStaurantFrame::OnArchive_ButtonClick(wxCommandEvent& event) /**< Po naciśnięciu przycisku 'Archiwum', wyświetla okno dialogowe 'ArchiveDialog' zawierające archiwum zamówień */
{
    Archive_Dialog ArchiveDialog(this);
    if(ArchiveDialog.ShowModal()==wxID_CANCEL)
        return;
}

void eStaurantFrame::OnMenu_AboutSelected(wxCommandEvent& event) /**< Po wybraniu opcji 'eStaurant - informacje' w 'Pomoc', wyświetla okno dialogowe 'InfoDialog' zawierające informacje o aplikacji */
{
    Info_Dialog InfoDialog(this);
    if(InfoDialog.ShowModal()==wxID_CANCEL)
        return;

}

void eStaurantFrame::FillVector()
{
    currNumInt=wxAtoi(currNum);
    OrdersNumbers.push_back(currNumInt);
    currNum=wxT("");
}

int eStaurantFrame::SetOrderNumber()
{
    int n=OrdersNumbers.size()-1;
    if(Orders_ListCtrl->GetItemCount()>0)
        OrderNum=OrdersNumbers[n]+1;
    return OrderNum;
}

void eStaurantFrame::OnOrders_ReadClick(wxCommandEvent& event) /**< Po wybraniu opcji 'Wczytaj ostatnią listę' w 'Plik', wczytuje ostatnią listę zamówień z pliku (data/orders_list.txt) */
{
    if(Orders_ListCtrl->GetItemCount()==0)
    {
        int columnIterator=0, lineIterator=0;
        wxFileInputStream input("data/orders_list.txt");
        if(!input.IsOk())
        {
            wxLogError("Nie mozna otworzyc pliku '%s'.", "data/orders_list.txt");
            return;
        }
        else
        {
            if(input.Eof())
                return;
            wxTextInputStream text(input, wxT("\n"), wxConvUTF8);
            wxString line;
            long itemIndex=Orders_ListCtrl->InsertItem(0, line);
            while(input.IsOk() && !input.Eof())
            {
                text >> line;
                if(columnIterator==0)
                {
                    currNum << line;
                    FillVector();
                }
                Orders_ListCtrl->SetItem(itemIndex, columnIterator, line);
                columnIterator++;
                if(columnIterator>6)
                {
                    lineIterator++;
                    columnIterator=0;
                    if(!input.Eof())
                        itemIndex=Orders_ListCtrl->InsertItem(lineIterator, line);
                }
            }
            sort(OrdersNumbers.begin(), OrdersNumbers.end());
            SetOrderNumber();
            SetTotalOrdersNumber();
        }
    }
}

void eStaurantFrame::SetTotalOrdersNumber()
{
    wxString OrdersNumber=wxString::Format(wxT("%i"), Orders_ListCtrl->GetItemCount());
    ActiveOrders_TextCtrl->ChangeValue(OrdersNumber);
}

void eStaurantFrame::ClearOrderInputData()
{
    Customer_CheckBox->SetValue(false);
    Customer_ComboBox->SetSelection(-1);\
    Customer_ComboBox->Disable();
    Address_TextCtrl->Clear();
    Telephone_TextCtrl->Clear();
    Payment_ChoiceBox->SetSelection(-1);
    Dish1_ComboBox->SetSelection(-1);
    Dish1Multiplier_TextCtrl->SetValue(wxT("1"));
    Dish2_ComboBox->SetSelection(-1);
    Dish2_ComboBox->Disable();
    Dish2Multiplier_TextCtrl->SetValue(wxT("1"));
    Dish2Multiplier_TextCtrl->Disable();
    Dish3_ComboBox->SetSelection(-1);
    Dish3_ComboBox->Disable();
    Dish3Multiplier_TextCtrl->SetValue(wxT("1"));
    Dish3Multiplier_TextCtrl->Disable();
    Dish4_ComboBox->SetSelection(-1);
    Dish4_ComboBox->Disable();
    Dish4Multiplier_TextCtrl->SetValue(wxT("1"));
    Dish4Multiplier_TextCtrl->Disable();
    Dish5_ComboBox->SetSelection(-1);
    Dish5_ComboBox->Disable();
    Dish5Multiplier_TextCtrl->SetValue(wxT("1"));
    Dish5Multiplier_TextCtrl->Disable();
    Dish6_ComboBox->SetSelection(-1);
    Dish6_ComboBox->Disable();
    Dish6Multiplier_TextCtrl->SetValue(wxT("1"));
    Dish6Multiplier_TextCtrl->Disable();
    TotalPrice_TextCtrl->SetValue(wxT(""));
    DoubleDish1Price=0.0;
    DoubleDish2Price=0.0;
    DoubleDish3Price=0.0;
    DoubleDish4Price=0.0;
    DoubleDish5Price=0.0;
    DoubleDish6Price=0.0;
    NumberOfDishes=1;
    OrderValue=0.0;
}

void eStaurantFrame::OnOrderClear_ButtonClick(wxCommandEvent& event) /**< Po wciśnięciu przycisku 'Wyczyść', wywołuje funkcję ClearOrderInputData(), czyszczącą pola wejściowe nowego zamówienia */
{
    ClearOrderInputData();
}

void eStaurantFrame::SaveOrdersFile()
{
    ClearFile("data/orders_list.txt");
    if(Orders_ListCtrl->GetItemCount()>0)
    {
        wxFileOutputStream output("data/orders_list.txt");
        if(!output.IsOk())
        {
            wxLogError("Nie mozna zapisac pliku '%s'.", "data/orders_list.txt");
            return;
        }
        else
        {
            wxTextOutputStream file(output);
            int numItems=Orders_ListCtrl->GetItemCount();
            int numCols=Orders_ListCtrl->GetColumnCount();
            for(int i=0; i<numItems; i++)
            {
                for(int j=0; j<numCols; j++)
                {
                    file << Orders_ListCtrl->GetItemText(i, j);
                    if(!(i+1==numItems && j+1==numCols))
                        file << '\n';
                }
            }
        }
    }
}

void eStaurantFrame::SaveArchiveFile()
{
    long itemNumber=Orders_ListCtrl->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
    wxString FirstName=FirstName_TextCtrl->GetValue();
    wxString LastName=LastName_TextCtrl->GetValue();
    wxString Telephone=Orders_ListCtrl->GetItemText(itemNumber, 4);
    wxString Address=Orders_ListCtrl->GetItemText(itemNumber, 1);
    wxTextFile file("data/customers_list.txt");
    if(file.Exists())
        file.Open("data/customers_list.txt", wxConvUTF8);
    file.AddLine(FirstName);
    file.AddLine(LastName);
    file.AddLine(Telephone);
    file.AddLine(Address);
    file.Write();
    file.Close();
    FirstName_TextCtrl->Clear();
    LastName_TextCtrl->Clear();
}

void eStaurantFrame::DishComboBoxesClear()
{
    Dish1_ComboBox->Clear();
    Dish2_ComboBox->Clear();
    Dish3_ComboBox->Clear();
    Dish4_ComboBox->Clear();
    Dish5_ComboBox->Clear();
    Dish6_ComboBox->Clear();
}

void eStaurantFrame::CustomerComboBoxAddItems()
{
    int columnIterator=0, lineIterator=0;
    wxFileInputStream input("data/customers_list.txt");
    if(!input.IsOk())
    {
        wxLogError("Nie mozna otworzyc pliku '%s'.", "data/customers_list.txt");
        return;
    }
    else
    {
        wxTextInputStream text(input, wxT("\n"), wxConvUTF8);
        wxString line;
        wxString fullName;
        while(input.IsOk() && !input.Eof())
        {
            text >> line;
            if(columnIterator==0)
            {
                fullName << line;
            }
            if(columnIterator==1)
            {
                fullName << wxT(" ") << line;
                Customer_ComboBox->Append(fullName);
                fullName=wxT("");
            }
            columnIterator++;
            if(columnIterator>3)
            {
                lineIterator++;
                columnIterator=0;
            }
        }
    }
}

void eStaurantFrame::FindCustomerData(int customerIndex)
{
    int columnIterator=0, lineIterator=0;
    wxFileInputStream input("data/customers_list.txt");
    if(!input.IsOk())
    {
        wxLogError("Nie mozna otworzyc pliku '%s'.", "data/customers_list.txt");
        return;
    }
    else
    {
        wxTextInputStream text(input, wxT("\n"), wxConvUTF8);
        wxString line;
        while(input.IsOk() && !input.Eof())
        {
            text >> line;
            if(lineIterator==customerIndex && columnIterator==3)
            {
                Address_TextCtrl->SetValue(line);
            }
            if(lineIterator==customerIndex && columnIterator==2)
            {
                Telephone_TextCtrl->SetValue(line);
            }
            columnIterator++;
            if(columnIterator>3)
            {
                lineIterator++;
                columnIterator=0;
            }
        }
    }
}

void eStaurantFrame::DishComboBoxesAddItems()
{
    int columnIterator=0, lineIterator=0;
    wxFileInputStream input("data/dishes_list.txt");
    if(!input.IsOk())
    {
        wxLogError("Nie mozna otworzyc pliku '%s'.", "data/dishes_list.txt");
        return;
    }
    else
    {
        wxTextInputStream text(input, wxT("\n"), wxConvUTF8);
        wxString line;
        while(input.IsOk() && !input.Eof())
        {
            text >> line;
            if(columnIterator==0)
            {
                Dish1_ComboBox->Append(line);
                Dish2_ComboBox->Append(line);
                Dish3_ComboBox->Append(line);
                Dish4_ComboBox->Append(line);
                Dish5_ComboBox->Append(line);
                Dish6_ComboBox->Append(line);
            }
            columnIterator++;
            if(columnIterator>4)
            {
                lineIterator++;
                columnIterator=0;
            }
        }
    }
}

void eStaurantFrame::OnOrderAdd_ButtonClick(wxCommandEvent& event) /**< Po wciśnięciu przycisku 'Dodaj' dla nowego zamówienia, dodaje nowe zamówienie z wprowadzonymi danymi do listy aktualnych zamówień */
{
    long maxIndex=Orders_ListCtrl->GetItemCount();
    wxString OrderNumber;
    OrderNumber << OrderNum;
    wxString Dishes;
    wxString Address=Address_TextCtrl->GetValue();
    wxString Payment=Payment_ChoiceBox->GetString(Payment_ChoiceBox->GetSelection());
    wxString Telephone=Telephone_TextCtrl->GetValue();
    wxDateTime now=wxDateTime::Now();
    wxString day=now.FormatISODate();
    wxString hour=now.FormatISOTime();
    wxString FullDate;
    FullDate << hour << ", " << day;
    wxString Dish1=Dish1_ComboBox->GetString(Dish1_ComboBox->GetSelection());
    if(NumberOfDishes==1)
        Dishes << StrDish1Multiplier << wxT("x ") << Dish1;
    if(NumberOfDishes>1)
    {
        wxString Dish2=Dish2_ComboBox->GetString(Dish2_ComboBox->GetSelection());
        if(NumberOfDishes==2 && Dish1!=wxT("") && Dish2!=wxT(""))
            Dishes << StrDish1Multiplier << wxT("x ") << Dish1 << wxT(", ") << StrDish2Multiplier << wxT("x ") << Dish2;
        if(NumberOfDishes>2)
        {
            wxString Dish3=Dish3_ComboBox->GetString(Dish3_ComboBox->GetSelection());
            if(NumberOfDishes==3 && Dish1!=wxT("") && Dish2!=wxT("") && Dish3!=wxT(""))
                Dishes << StrDish1Multiplier << wxT("x ") << Dish1 << wxT(", ") << StrDish2Multiplier << wxT("x ") << Dish2 << wxT(", ") << StrDish3Multiplier << wxT("x ") << Dish3;
            if(NumberOfDishes>3)
            {
                wxString Dish4=Dish4_ComboBox->GetString(Dish4_ComboBox->GetSelection());
                if(NumberOfDishes==4 && Dish1!=wxT("") && Dish2!=wxT("") && Dish3!=wxT("") && Dish4!=wxT(""))
                    Dishes << StrDish1Multiplier << wxT("x ") << Dish1 << wxT(", ") << StrDish2Multiplier << wxT("x ") << Dish2 << wxT(", ") << StrDish3Multiplier << wxT("x ") << Dish3
                    << wxT(", ") << StrDish4Multiplier << wxT("x ") << Dish4;
                if(NumberOfDishes>4)
                {
                    wxString Dish5=Dish5_ComboBox->GetString(Dish5_ComboBox->GetSelection());
                    if(NumberOfDishes==5 && Dish1!=wxT("") && Dish2!=wxT("") && Dish3!=wxT("") && Dish4!=wxT("") && Dish5!=wxT(""))
                        Dishes << StrDish1Multiplier << wxT("x ") << Dish1 << wxT(", ") << StrDish2Multiplier << wxT("x ") << Dish2 << wxT(", ") << StrDish3Multiplier << wxT("x ") << Dish3
                        << wxT(", ") << StrDish4Multiplier << wxT("x ") << Dish4 << wxT(", ") << StrDish5Multiplier << wxT("x ") << Dish5;
                    if(NumberOfDishes>5)
                    {
                        wxString Dish6=Dish6_ComboBox->GetString(Dish6_ComboBox->GetSelection());
                        if(NumberOfDishes==6 && Dish1!=wxT("") && Dish2!=wxT("") && Dish3!=wxT("") && Dish4!=wxT("") && Dish5!=wxT("") && Dish6!=wxT(""))
                            Dishes << StrDish1Multiplier << wxT("x ") << Dish1 << wxT(", ") << StrDish2Multiplier << wxT("x ") << Dish2 << wxT(", ") << StrDish3Multiplier << wxT("x ") << Dish3
                            << wxT(", ") << StrDish4Multiplier << wxT("x ") << Dish4 << wxT(", ") << StrDish5Multiplier << wxT("x ") << Dish5 << wxT(", ") << StrDish6Multiplier << wxT("x ") << Dish6;
                    }
                }
            }
        }
    }
    if(!(Address==wxT("") || Telephone==wxT("") || Payment==wxT("") || Dishes==wxT("")))
    {
        long itemIndex=Orders_ListCtrl->InsertItem(maxIndex, OrderNumber);
        Orders_ListCtrl->SetItem(itemIndex, 0, OrderNumber);
        Orders_ListCtrl->SetItem(itemIndex, 1, Address);
        Orders_ListCtrl->SetItem(itemIndex, 2, StrOrderValue);
        Orders_ListCtrl->SetItem(itemIndex, 3, Payment);
        Orders_ListCtrl->SetItem(itemIndex, 4, Telephone);
        Orders_ListCtrl->SetItem(itemIndex, 5, FullDate);
        Orders_ListCtrl->SetItem(itemIndex, 6, Dishes);
        SetTotalOrdersNumber();
        SaveOrdersFile();
        ClearOrderInputData();
        OrderNum++;
    }
    else
        return;
}

void eStaurantFrame::OnAddDish2_ButtonClick(wxCommandEvent& event) /**< Po wciśnięciu przycisku '+' przy polu wyboru potrawy nr 2, umożliwia dodanie tej potrawy do aktualnie tworzonego zamówienia */
{
    Dish2_ComboBox->Enable();
    Dish2Multiplier_TextCtrl->Enable();
    NumberOfDishes=2;
}

void eStaurantFrame::OnAddDish3_ButtonClick(wxCommandEvent& event) /**< Po wciśnięciu przycisku '+' przy polu wyboru potrawy nr 3, umożliwia dodanie tej potrawy do aktualnie tworzonego zamówienia */
{
    Dish3_ComboBox->Enable();
    Dish3Multiplier_TextCtrl->Enable();
    NumberOfDishes=3;
}

void eStaurantFrame::OnAddDish4_ButtonClick(wxCommandEvent& event) /**< Po wciśnięciu przycisku '+' przy polu wyboru potrawy nr 4, umożliwia dodanie tej potrawy do aktualnie tworzonego zamówienia */
{
    Dish4_ComboBox->Enable();
    Dish4Multiplier_TextCtrl->Enable();
    NumberOfDishes=4;
}

void eStaurantFrame::OnAddDish5_ButtonClick(wxCommandEvent& event) /**< Po wciśnięciu przycisku '+' przy polu wyboru potrawy nr 5, umożliwia dodanie tej potrawy do aktualnie tworzonego zamówienia */
{
    Dish5_ComboBox->Enable();
    Dish5Multiplier_TextCtrl->Enable();
    NumberOfDishes=5;
}

void eStaurantFrame::OnAddDish6_ButtonClick(wxCommandEvent& event) /**< Po wciśnięciu przycisku '+' przy polu wyboru potrawy nr 6, umożliwia dodanie tej potrawy do aktualnie tworzonego zamówienia */
{
    Dish6_ComboBox->Enable();
    Dish6Multiplier_TextCtrl->Enable();
    NumberOfDishes=6;
}

void eStaurantFrame::SetSelectedDishesPrice()
{
    int Dish1PriceIndex=0, Dish2PriceIndex=0, Dish3PriceIndex=0, Dish4PriceIndex=0, Dish5PriceIndex=0, Dish6PriceIndex=0;
    int lineIterator=0;
    wxFileInputStream input("data/dishes_list.txt");
    if(!input.IsOk())
    {
        wxLogError("Nie mozna otworzyc pliku '%s'.", "data/dishes_list.txt");
        return;
    }
    else
    {
        wxTextInputStream text(input, wxT("\n"), wxConvUTF8);
        wxString line;
        while(input.IsOk() && !input.Eof())
        {
            text >> line;
            if(line.Cmp(Dish1_ComboBox->GetString(Dish1_ComboBox->GetSelection()))==0)
                Dish1PriceIndex=lineIterator+4;
            if(line.Cmp(Dish2_ComboBox->GetString(Dish2_ComboBox->GetSelection()))==0)
                Dish2PriceIndex=lineIterator+4;
            if(line.Cmp(Dish3_ComboBox->GetString(Dish3_ComboBox->GetSelection()))==0)
                Dish3PriceIndex=lineIterator+4;
            if(line.Cmp(Dish4_ComboBox->GetString(Dish4_ComboBox->GetSelection()))==0)
                Dish4PriceIndex=lineIterator+4;
            if(line.Cmp(Dish5_ComboBox->GetString(Dish5_ComboBox->GetSelection()))==0)
                Dish5PriceIndex=lineIterator+4;
            if(line.Cmp(Dish6_ComboBox->GetString(Dish6_ComboBox->GetSelection()))==0)
                Dish6PriceIndex=lineIterator+4;
            lineIterator++;
            if(lineIterator==Dish1PriceIndex && lineIterator!=0)
                StrDish1Price=line;
            if(lineIterator==Dish2PriceIndex && lineIterator!=0)
                StrDish2Price=line;
            if(lineIterator==Dish3PriceIndex && lineIterator!=0)
                StrDish3Price=line;
            if(lineIterator==Dish4PriceIndex && lineIterator!=0)
                StrDish4Price=line;
            if(lineIterator==Dish5PriceIndex && lineIterator!=0)
                StrDish5Price=line;
            if(lineIterator==Dish6PriceIndex && lineIterator!=0)
                StrDish6Price=line;
        }
    }
}

void eStaurantFrame::SetOrderTotalValue()
{
    OrderValue=(DoubleDish1Price*DoubleDish1Multiplier)+(DoubleDish2Price*DoubleDish2Multiplier)+(DoubleDish3Price*DoubleDish3Multiplier)
    +(DoubleDish4Price*DoubleDish4Multiplier)+(DoubleDish5Price*DoubleDish5Multiplier)+(DoubleDish6Price*DoubleDish6Multiplier);
    StrOrderValue=wxT("");
    StrOrderValue << OrderValue << wxT(" PLN");
    TotalPrice_TextCtrl->SetValue(StrOrderValue);
}

void eStaurantFrame::OnCustomerAdd_ButtonClick(wxCommandEvent& event) /**< Po wciśnięciu przycisku 'Dodaj' dla nowego klienta, dodaje klienta z wprowadzonymi danymi oraz odpowiadającymi mu danymi dotyczącymi zamówienia do listy klientów */
{
    long itemNumber=Orders_ListCtrl->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
    wxString FirstName=FirstName_TextCtrl->GetValue();
    wxString LastName=LastName_TextCtrl->GetValue();
    wxString Telephone=Orders_ListCtrl->GetItemText(itemNumber, 4);
    wxString Address=Orders_ListCtrl->GetItemText(itemNumber, 1);
    wxTextFile file("data/customers_list.txt");
    if(file.Exists())
    {
        file.Open("data/customers_list.txt", wxConvUTF8);
        file.AddLine(wxT("\n"));
        file.AddLine(FirstName);
        file.AddLine(LastName);
        file.AddLine(Telephone);
        file.AddLine(Address);
        file.Write();
        file.Close();
        FirstName_TextCtrl->Clear();
        LastName_TextCtrl->Clear();
        Customer_ComboBox->Clear();
        CustomerComboBoxAddItems();
    }
}

void eStaurantFrame::OnOrders_ListCtrlItemSelect(wxListEvent& event) /**< Po wybraniu dowolnego zamówienia z listy, umożliwia jego zarchiwizowanie oraz dodanie nowego klienta do bazy klientów */
{
    OrderArchive_Button->Enable();
    Menu_ArchiveOrder->Enable();
    FirstName_TextCtrl->Enable();
    LastName_TextCtrl->Enable();
    FirstName_StaticText->Enable();
    LastName_StaticText->Enable();
    CustomerAdd_Button->Enable();
}

void eStaurantFrame::OnOrders_ListCtrlItemDeselect(wxListEvent& event) /**< Po zaprzestaniu wyboru zamówienia z listy, uniemożliwia jego zarchiwizowanie oraz dodanie nowego klienta do bazy klientów */
{
    OrderArchive_Button->Disable();
    Menu_ArchiveOrder->Enable(false);
    FirstName_TextCtrl->Disable();
    LastName_TextCtrl->Disable();
    FirstName_StaticText->Disable();
    LastName_StaticText->Disable();
    CustomerAdd_Button->Disable();
}

void eStaurantFrame::SortData(long item1, long item2)
{
    int numCols;
    long tempData;
    wxString tempString;
    numCols=Orders_ListCtrl->GetColumnCount();
    for(int i=0; i<numCols; i++)
    {
        tempString=Orders_ListCtrl->GetItemText(item1, i);
        Orders_ListCtrl->SetItem(item1, i, Orders_ListCtrl->GetItemText(item2, i));
        Orders_ListCtrl->SetItem(item2, i, tempString);
    }
    tempData=Orders_ListCtrl->GetItemData(item1);
    Orders_ListCtrl->SetItemData(item1, Orders_ListCtrl->GetItemData(item2));
    Orders_ListCtrl->SetItemData(item2, tempData);
    return;
}

void eStaurantFrame::OnOrders_ListCtrlColumnClick(wxListEvent& event) /**< Sortuje listę zamówien po kliknięciu na dowolną jej kolumnę, według wartości znajdujących się w tej kolumnie */
{
    int numItems;
    long item1, item2;
    long item1val, item2val;
    numItems=Orders_ListCtrl->GetItemCount();
    int columnNumber=event.GetColumn();
    if(columnNumber<0)
        return;
    if(columnNumber==0)
    {
        for(item1=1; item1<numItems; item1++)
        {
            item2=item1;
            (Orders_ListCtrl->GetItemText(item2-1, 0)).ToLong(&item1val);
            (Orders_ListCtrl->GetItemText(item2, 0)).ToLong(&item2val);
            while(item2>0 && item1val > item2val)
            {
                SortData(item2, item2-1);
                item2=item2-1;
                if(item2-1>=0)
                {
                    (Orders_ListCtrl->GetItemText(item2-1, 0)).ToLong(&item1val);
                    (Orders_ListCtrl->GetItemText(item2, 0)).ToLong(&item2val);
                }
            }
        }
        return;
    }
    if(columnNumber>0)
    {
        for(item1=1; item1<numItems; item1++)
        {
            item2=item1;
            while(item2>0 && Orders_ListCtrl->GetItemText(item2-1, columnNumber) > Orders_ListCtrl->GetItemText(item2, columnNumber))
            {
                SortData(item2, item2-1);
                item2=item2-1;
            }
        }
        return;
    }
}

void eStaurantFrame::OnDish1_ComboBoxSelected(wxCommandEvent& event) /**< Po wybraniu potrawy nr 1, oblicza ogólną wartość tworzonego zamówienia */
{
    SetSelectedDishesPrice();
    StrDish1Multiplier=Dish1Multiplier_TextCtrl->GetValue();
    if(Dish1_ComboBox->GetCurrentSelection()>-1)
    {
        if(!StrDish1Price.ToDouble(&DoubleDish1Price))
        {
            wxLogError("Blad (StrDish1Price.ToDouble)");
            return;
        }
    }
    if(!(StrDish1Multiplier.ToDouble(&DoubleDish1Multiplier)))
    {
        wxLogError("Blad (StrDish1Multiplier.ToDouble)");
        return;
    }
    SetOrderTotalValue();
}

void eStaurantFrame::OnDish2_ComboBoxSelected(wxCommandEvent& event) /**< Po wybraniu potrawy nr 2, oblicza ogólną wartość tworzonego zamówienia */
{
    SetSelectedDishesPrice();
    StrDish2Multiplier=Dish2Multiplier_TextCtrl->GetValue();
    if(Dish2_ComboBox->GetCurrentSelection()>-1)
    {
        if(!StrDish2Price.ToDouble(&DoubleDish2Price))
        {
        wxLogError("Blad (StrDish2Price.ToDouble)");
        return;
        }
    }
    if(!(StrDish2Multiplier.ToDouble(&DoubleDish2Multiplier)))
    {
        wxLogError("Blad (StrDish2Multiplier.ToDouble)");
        return;
    }
    SetOrderTotalValue();
}

void eStaurantFrame::OnDish3_ComboBoxSelected(wxCommandEvent& event) /**< Po wybraniu potrawy nr 3, oblicza ogólną wartość tworzonego zamówienia */
{
    SetSelectedDishesPrice();
    StrDish3Multiplier=Dish3Multiplier_TextCtrl->GetValue();
    if(Dish3_ComboBox->GetCurrentSelection()>-1)
    {
        if(!StrDish3Price.ToDouble(&DoubleDish3Price))
        {
            wxLogError("Blad (StrDish3Price.ToDouble)");
            return;
        }
    }
    if(!(StrDish3Multiplier.ToDouble(&DoubleDish3Multiplier)))
    {
        wxLogError("Blad (StrDish3Multiplier.ToDouble)");
        return;
    }
    SetOrderTotalValue();
}

void eStaurantFrame::OnDish4_ComboBoxSelected(wxCommandEvent& event) /**< Po wybraniu potrawy nr 4, oblicza ogólną wartość tworzonego zamówienia */
{
    SetSelectedDishesPrice();
    StrDish4Multiplier=Dish4Multiplier_TextCtrl->GetValue();
    if(Dish4_ComboBox->GetCurrentSelection()>-1)
    {
        if(!StrDish4Price.ToDouble(&DoubleDish4Price))
        {
            wxLogError("Blad (StrDish4Price.ToDouble)");
            return;
        }
    }
    if(!(StrDish4Multiplier.ToDouble(&DoubleDish4Multiplier)))
    {
        wxLogError("Blad (StrDish4Multiplier.ToDouble)");
        return;
    }
    SetOrderTotalValue();
}

void eStaurantFrame::OnDish5_ComboBoxSelected(wxCommandEvent& event) /**< Po wybraniu potrawy nr 5, oblicza ogólną wartość tworzonego zamówienia */
{
    SetSelectedDishesPrice();
    StrDish5Multiplier=Dish5Multiplier_TextCtrl->GetValue();
    if(Dish5_ComboBox->GetCurrentSelection()>-1)
    {
        if(!StrDish5Price.ToDouble(&DoubleDish5Price))
        {
            wxLogError("Blad (StrDish5Price.ToDouble)");
            return;
        }
    }
    if(!(StrDish5Multiplier.ToDouble(&DoubleDish5Multiplier)))
    {
        wxLogError("Blad (StrDish5Multiplier.ToDouble)");
        return;
    }
    SetOrderTotalValue();
}

void eStaurantFrame::OnDish6_ComboBoxSelected(wxCommandEvent& event) /**< Po wybraniu potrawy nr 6, oblicza ogólną wartość tworzonego zamówienia */
{
    SetSelectedDishesPrice();
    StrDish6Multiplier=Dish6Multiplier_TextCtrl->GetValue();
    if(Dish6_ComboBox->GetCurrentSelection()>-1)
    {
        if(!StrDish6Price.ToDouble(&DoubleDish6Price))
        {
            wxLogError("Blad (StrDish6Price.ToDouble)");
            return;
        }
    }
    if(!(StrDish6Multiplier.ToDouble(&DoubleDish6Multiplier)))
    {
        wxLogError("Blad (StrDish6Multiplier.ToDouble)");
        return;
    }
    SetOrderTotalValue();
}

void eStaurantFrame::OnOrderArchive_ButtonClick(wxCommandEvent& event) /**< Po wciśnięciu przycisku 'Archiwizuj', usuwa wybrane zamówienie z listy oraz dodaje je do archiwum zamówień */
{
    long itemNumber=Orders_ListCtrl->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
    wxString Address=Orders_ListCtrl->GetItemText(itemNumber, 1);
    wxString Price=Orders_ListCtrl->GetItemText(itemNumber, 2);
    wxString Payment=Orders_ListCtrl->GetItemText(itemNumber, 3);
    wxString Telephone=Orders_ListCtrl->GetItemText(itemNumber, 4);
    wxString Date=Orders_ListCtrl->GetItemText(itemNumber, 5);
    wxString Dishes=Orders_ListCtrl->GetItemText(itemNumber, 6);
    wxTextFile file("data/archives_list.txt");
    if(file.Exists())
    {
        file.Open("data/archives_list.txt", wxConvUTF8);
        file.AddLine(Address);
        file.AddLine(Price);
        file.AddLine(Payment);
        file.AddLine(Telephone);
        file.AddLine(Date);
        file.AddLine(Dishes);
        file.Write();
        file.Close();
        Orders_ListCtrl->DeleteItem(itemNumber);
        SetTotalOrdersNumber();
        SaveOrdersFile();
    }
}


void eStaurantFrame::OnCustomer_CheckBoxClick(wxCommandEvent& event)
{
    if(Customer_CheckBox->IsChecked())
        Customer_ComboBox->Enable();
    if(!Customer_CheckBox->IsChecked())
    {
        Customer_ComboBox->SetSelection(-1);
        Customer_ComboBox->Disable();
        Address_TextCtrl->Clear();
        Telephone_TextCtrl->Clear();
    }
}

void eStaurantFrame::OnCustomer_ComboBoxSelected(wxCommandEvent& event)
{
    int customerIndex;
    customerIndex=Customer_ComboBox->GetSelection();
    FindCustomerData(customerIndex);
}
