#include "Menu_Dialog.h"
#include <wx/textfile.h>
#include <wx/wfstream.h>
#include <wx/txtstrm.h>
#include <wx/log.h>

//(*InternalHeaders(Menu_Dialog)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Menu_Dialog)
const long Menu_Dialog::ID_LISTCTRL1 = wxNewId();
const long Menu_Dialog::ID_STATICTEXT1 = wxNewId();
const long Menu_Dialog::ID_TEXTCTRL1 = wxNewId();
const long Menu_Dialog::ID_STATICTEXT2 = wxNewId();
const long Menu_Dialog::ID_TEXTCTRL2 = wxNewId();
const long Menu_Dialog::ID_STATICTEXT3 = wxNewId();
const long Menu_Dialog::ID_TEXTCTRL3 = wxNewId();
const long Menu_Dialog::ID_STATICTEXT4 = wxNewId();
const long Menu_Dialog::ID_TEXTCTRL4 = wxNewId();
const long Menu_Dialog::ID_STATICTEXT5 = wxNewId();
const long Menu_Dialog::ID_COMBOBOX1 = wxNewId();
const long Menu_Dialog::ID_BUTTON2 = wxNewId();
const long Menu_Dialog::ID_BUTTON3 = wxNewId();
const long Menu_Dialog::ID_BUTTON1 = wxNewId();
const long Menu_Dialog::MODIFY_NAME = wxNewId();
const long Menu_Dialog::MODIFY_DESCRIPTION = wxNewId();
const long Menu_Dialog::MODIFY_WEIGHT = wxNewId();
const long Menu_Dialog::MODIFY_PRICE = wxNewId();
const long Menu_Dialog::ITEM_MODIFY = wxNewId();
const long Menu_Dialog::ITEM_DELETE = wxNewId();
const long Menu_Dialog::ID_TEXTENTRYDIALOG1 = wxNewId();
const long Menu_Dialog::ID_TEXTENTRYDIALOG2 = wxNewId();
const long Menu_Dialog::ID_TEXTENTRYDIALOG3 = wxNewId();
const long Menu_Dialog::ID_TEXTENTRYDIALOG4 = wxNewId();
const long Menu_Dialog::ID_MESSAGEDIALOG1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Menu_Dialog,wxDialog)
	//(*EventTable(Menu_Dialog)
	//*)
END_EVENT_TABLE()

Menu_Dialog::Menu_Dialog(wxWindow* parent,wxWindowID id)
{
	//(*Initialize(Menu_Dialog)
	wxBoxSizer* BoxSizer10;
	wxBoxSizer* BoxSizer11;
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;
	wxBoxSizer* BoxSizer4;
	wxBoxSizer* BoxSizer5;
	wxBoxSizer* BoxSizer6;
	wxBoxSizer* BoxSizer7;
	wxBoxSizer* BoxSizer8;
	wxBoxSizer* BoxSizer9;
	wxStaticBoxSizer* NewDish_Sizer;

	Create(parent, wxID_ANY, _T("Menu"), wxDefaultPosition, wxDefaultSize, wxCAPTION|wxRESIZE_BORDER|wxCLOSE_BOX, _T("wxID_ANY"));
	SetBackgroundColour(wxColour(247,247,247));
	wxFont thisFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	SetFont(thisFont);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	Menu_ListCtrl = new wxListCtrl(this, ID_LISTCTRL1, wxDefaultPosition, wxDefaultSize, wxLC_REPORT|wxVSCROLL, wxDefaultValidator, _T("ID_LISTCTRL1"));
	Menu_ListCtrl->SetMinSize(wxSize(965,760));
	wxListItem Col_Name;
	Col_Name.SetId(0);
	Col_Name.SetText(_T("Nazwa"));
	Col_Name.SetWidth(200);
	Menu_ListCtrl->InsertColumn(0, Col_Name);

	wxListItem Col_Description;
	Col_Description.SetId(1);
	Col_Description.SetText(_T("Opis"));
	Col_Description.SetWidth(497);
	Menu_ListCtrl->InsertColumn(1, Col_Description);

	wxListItem Col_Weight;
	Col_Weight.SetId(2);
	Col_Weight.SetText(_T("Gramatura"));
	Col_Weight.SetWidth(84);
	Menu_ListCtrl->InsertColumn(2, Col_Weight);

	wxListItem Col_Price;
	Col_Price.SetId(3);
	Col_Price.SetText(_T("Cena (PLN)"));
	Col_Price.SetWidth(84);
	Menu_ListCtrl->InsertColumn(3, Col_Price);

	wxListItem Col_Type;
	Col_Type.SetId(4);
	Col_Type.SetText(_T("Typ"));
	Col_Type.SetWidth(100);
	Menu_ListCtrl->InsertColumn(4, Col_Type);
	BoxSizer3->Add(Menu_ListCtrl, 3, wxTOP|wxBOTTOM|wxLEFT|wxEXPAND, 3);
	BoxSizer1->Add(BoxSizer3, 3, wxALL|wxEXPAND, 5);
	BoxSizer10 = new wxBoxSizer(wxVERTICAL);
	NewDish_Sizer = new wxStaticBoxSizer(wxVERTICAL, this, _T("Nowa potrawa"));
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	Name_StaticText = new wxStaticText(this, ID_STATICTEXT1, _T("Nazwa "), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, _T("ID_STATICTEXT1"));
	BoxSizer4->Add(Name_StaticText, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
	Name_TextCtrl = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	Name_TextCtrl->SetMinSize(wxSize(200,23));
	BoxSizer4->Add(Name_TextCtrl, 2, wxALL|wxEXPAND, 3);
	NewDish_Sizer->Add(BoxSizer4, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND, 3);
	BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	Description_StaticText = new wxStaticText(this, ID_STATICTEXT2, _T("Opis "), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, _T("ID_STATICTEXT2"));
	BoxSizer5->Add(Description_StaticText, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
	Description_TextCtrl = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	Description_TextCtrl->SetMinSize(wxSize(200,89));
	BoxSizer5->Add(Description_TextCtrl, 2, wxALL|wxEXPAND, 3);
	NewDish_Sizer->Add(BoxSizer5, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND, 3);
	BoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
	Weight_StaticText = new wxStaticText(this, ID_STATICTEXT3, _T("Gramatura (g) "), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, _T("ID_STATICTEXT3"));
	BoxSizer6->Add(Weight_StaticText, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
	Weight_TextCtrl = new wxTextCtrl(this, ID_TEXTCTRL3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	Weight_TextCtrl->SetMinSize(wxSize(200,23));
	wxTextValidator numSignsVal(wxFILTER_NUMERIC);
	Weight_TextCtrl->SetValidator(numSignsVal);
	BoxSizer6->Add(Weight_TextCtrl, 2, wxALL|wxEXPAND, 3);
	NewDish_Sizer->Add(BoxSizer6, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND, 3);
	BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
	Price_StaticText = new wxStaticText(this, ID_STATICTEXT4, _T("Cena (PLN) "), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, _T("ID_STATICTEXT4"));
	BoxSizer7->Add(Price_StaticText, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
	Price_TextCtrl = new wxTextCtrl(this, ID_TEXTCTRL4, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	Price_TextCtrl->SetMinSize(wxSize(200,23));
	Price_TextCtrl->SetValidator(numSignsVal);
	BoxSizer7->Add(Price_TextCtrl, 2, wxALL|wxEXPAND, 3);
	NewDish_Sizer->Add(BoxSizer7, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND, 3);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	Type_StaticText = new wxStaticText(this, ID_STATICTEXT5, _T("Typ "), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, _T("ID_STATICTEXT5"));
	BoxSizer2->Add(Type_StaticText, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
	Type_ComboBox = new wxComboBox(this, ID_COMBOBOX1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, 0, wxCB_READONLY, wxDefaultValidator, _T("ID_COMBOBOX1"));
	Type_ComboBox->Append(_T("Przystawki"));
	Type_ComboBox->Append(_T("Dania główne"));
	Type_ComboBox->Append(_T("Zupy"));
	Type_ComboBox->Append(_T("Desery"));
	Type_ComboBox->Append(_T("Dodatki"));
	Type_ComboBox->Append(_T("Napoje"));
	Type_ComboBox->Append(_T("Inne"));
	Type_ComboBox->SetMinSize(wxSize(200,23));
	BoxSizer2->Add(Type_ComboBox, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
	NewDish_Sizer->Add(BoxSizer2, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND, 3);
	BoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
	DishClear_Button = new wxButton(this, ID_BUTTON2, _T("Wyczyść"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	DishClear_Button->SetMinSize(wxSize(110,25));
	DishClear_Button->SetBackgroundColour(wxColour(230,230,230));
	BoxSizer8->Add(DishClear_Button, 1, wxALL|wxALIGN_TOP, 3);
	DishAdd_Button = new wxButton(this, ID_BUTTON3, _T("Dodaj"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	DishAdd_Button->SetMinSize(wxSize(110,25));
	DishAdd_Button->SetBackgroundColour(wxColour(230,230,230));
	BoxSizer8->Add(DishAdd_Button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 3);
	NewDish_Sizer->Add(BoxSizer8, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxALIGN_RIGHT, 3);
	BoxSizer10->Add(NewDish_Sizer, 2, wxALL|wxALIGN_RIGHT, 5);
	BoxSizer9 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer11 = new wxBoxSizer(wxHORIZONTAL);
	Close_Button = new wxButton(this, ID_BUTTON1, _T("Zamknij"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	Close_Button->SetMinSize(wxSize(110,25));
	Close_Button->SetBackgroundColour(wxColour(230,230,230));
	BoxSizer11->Add(Close_Button, 1, wxBOTTOM|wxLEFT|wxRIGHT|wxALIGN_TOP, 3);
	BoxSizer9->Add(BoxSizer11, 0, wxLEFT|wxRIGHT|wxALIGN_TOP, 8);
	BoxSizer10->Add(BoxSizer9, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxALIGN_RIGHT, 5);
	BoxSizer1->Add(BoxSizer10, 1, wxALL|wxALIGN_TOP, 5);
	SetSizer(BoxSizer1);
	ItemModify = new wxMenu();
	ModifyName = new wxMenuItem(ItemModify, MODIFY_NAME, _T("Zmień nazwę..."), wxEmptyString, wxITEM_NORMAL);
	ItemModify->Append(ModifyName);
	ModifyDescription = new wxMenuItem(ItemModify, MODIFY_DESCRIPTION, _T("Zmień opis..."), wxEmptyString, wxITEM_NORMAL);
	ItemModify->Append(ModifyDescription);
	ModifyWeight = new wxMenuItem(ItemModify, MODIFY_WEIGHT, _T("Zmień gramaturę..."), wxEmptyString, wxITEM_NORMAL);
	ItemModify->Append(ModifyWeight);
	ModifyPrice = new wxMenuItem(ItemModify, MODIFY_PRICE, _T("Zmień cenę..."), wxEmptyString, wxITEM_NORMAL);
	ItemModify->Append(ModifyPrice);
	MenuDialog_Menu.Append(ITEM_MODIFY, _T("&Modyfikuj"), ItemModify, wxEmptyString);
	ItemDelete = new wxMenuItem((&MenuDialog_Menu), ITEM_DELETE, _T("&Usuń"), wxEmptyString, wxITEM_NORMAL);
	MenuDialog_Menu.Append(ItemDelete);
	Modify_NameCtrl = new wxTextEntryDialog(this, _T("Podaj nazwę"), _T("Modyfikacja"), wxEmptyString, wxOK|wxCANCEL|wxCENTRE|wxWS_EX_VALIDATE_RECURSIVELY, wxDefaultPosition);
	Modify_DescriptionCtrl = new wxTextEntryDialog(this, _T("Podaj opis"), _T("Modyfikacja"), wxEmptyString, wxOK|wxCANCEL|wxCENTRE|wxWS_EX_VALIDATE_RECURSIVELY, wxDefaultPosition);
	Modify_WeightCtrl = new wxTextEntryDialog(this, _T("Podaj gramaturę"), _T("Modyfikacja"), wxEmptyString, wxOK|wxCANCEL|wxCENTRE|wxWS_EX_VALIDATE_RECURSIVELY, wxDefaultPosition);
	Modify_PriceCtrl = new wxTextEntryDialog(this, _T("Podaj cenę"), _T("Modyfikacja"), wxEmptyString, wxOK|wxCANCEL|wxCENTRE|wxWS_EX_VALIDATE_RECURSIVELY, wxDefaultPosition);
	DishConfirmDelete_Dialog = new wxMessageDialog(this, _T("Usunąć potrawę z listy\?"), _T("eStaurant"), wxOK|wxCANCEL, wxDefaultPosition);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	Center();

	Connect(ID_LISTCTRL1,wxEVT_COMMAND_LIST_ITEM_RIGHT_CLICK,(wxObjectEventFunction)&Menu_Dialog::OnMenu_ListCtrlItemRClick);
	Connect(ID_LISTCTRL1,wxEVT_COMMAND_LIST_COL_CLICK,(wxObjectEventFunction)&Menu_Dialog::OnMenu_ListCtrlColumnClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Menu_Dialog::OnDishClear_ButtonClick);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Menu_Dialog::OnDishAdd_ButtonClick);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Menu_Dialog::OnClose_ButtonClick);
	Connect(MODIFY_NAME,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Menu_Dialog::OnMenu_ModifyNameSelected);
	Connect(MODIFY_DESCRIPTION,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Menu_Dialog::OnMenu_ModifyDescriptionSelected);
	Connect(MODIFY_WEIGHT,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Menu_Dialog::OnMenu_ModifyWeightSelected);
	Connect(MODIFY_PRICE,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Menu_Dialog::OnMenu_ModifyPriceSelected);
	Connect(ITEM_DELETE,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Menu_Dialog::OnMenu_DeleteSelected);
	Connect(wxID_ANY,wxEVT_INIT_DIALOG,(wxObjectEventFunction)&Menu_Dialog::OnInit);
	Connect(wxID_ANY,wxEVT_CLOSE_WINDOW,(wxObjectEventFunction)&Menu_Dialog::OnClose);
	//*)
}

Menu_Dialog::~Menu_Dialog()
{
	//(*Destroy(Menu_Dialog)
	//*)
}


void Menu_Dialog::OnInit(wxInitDialogEvent& event) /**< Po uruchomieniu okna dialogowego, wczytuje listę potraw z pliku (data/dishes_list.txt) */
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

        long itemIndex=Menu_ListCtrl->InsertItem(0, line);
        while(input.IsOk() && !input.Eof())
        {
            text >> line;
            Menu_ListCtrl->SetItem(itemIndex, columnIterator, line);
            columnIterator++;
            if(columnIterator>4)
            {
                lineIterator++;
                columnIterator=0;
                if(!input.Eof())
                    itemIndex=Menu_ListCtrl->InsertItem(lineIterator, line);
            }
        }
    }
}

void Menu_Dialog::SortData(long item1, long item2)
{
    int numCols;
    long tempData;
    wxString tempString;
    numCols=Menu_ListCtrl->GetColumnCount();
    for(int i=0; i<numCols; i++)
    {
        tempString=Menu_ListCtrl->GetItemText(item1, i);
        Menu_ListCtrl->SetItem(item1, i, Menu_ListCtrl->GetItemText(item2, i));
        Menu_ListCtrl->SetItem(item2, i, tempString);
    }
    tempData=Menu_ListCtrl->GetItemData(item1);
    Menu_ListCtrl->SetItemData(item1, Menu_ListCtrl->GetItemData(item2));
    Menu_ListCtrl->SetItemData(item2, tempData);
    return;
}

void Menu_Dialog::ClearFile(wxString path)
{
    wxTextFile file(path);
    if(file.Exists())
    {
        file.Open(path, wxConvUTF8);
        file.Clear();
        file.Write();
        file.Close();
    }
}

void Menu_Dialog::SaveMenuFile()
{
    if(Menu_ListCtrl->GetItemCount()>0)
    {
        wxFileOutputStream output("data/dishes_list.txt");
        if(!output.IsOk())
        {
            wxLogError("Nie mozna zapisac pliku '%s'.", "data/dishes_list.txt");
            return;
        }
        else
        {
            wxTextOutputStream file(output);
            int numItems=Menu_ListCtrl->GetItemCount();
            int numCols=Menu_ListCtrl->GetColumnCount();
            for(int i=0; i<numItems; i++)
            {
                for(int j=0; j<numCols; j++)
                {
                    file << Menu_ListCtrl->GetItemText(i, j);
                    if(!(i+1==numItems && j+1==numCols))
                        file << '\n';
                }
            }
        }
    }
}

void Menu_Dialog::OnClose(wxCloseEvent& event) /**< Po wciśnięciu przycisku zamknięcia, zapisuje aktualną liste potraw do pliku (data/dishes_list.txt) oraz zamyka okno dialogowe */
{
    SaveMenuFile();
    EndModal(0);
}

void Menu_Dialog::ClearModifyCtrl()
{
    Modify_NameCtrl->SetValue(wxT(""));
    Modify_DescriptionCtrl->SetValue(wxT(""));
    Modify_WeightCtrl->SetValue(wxT(""));
    Modify_PriceCtrl->SetValue(wxT(""));
}

void Menu_Dialog::OnDishClear_ButtonClick(wxCommandEvent& event) /**< Po wciśnięciu przycisku 'Wyczyść', czyści pola wejściowe dla nowej potrawy */
{
    ClearDishInputData();
}

void Menu_Dialog::ClearDishInputData()
{
    Name_TextCtrl->Clear();
    Description_TextCtrl->Clear();
    Weight_TextCtrl->Clear();
    Price_TextCtrl->Clear();
    Type_ComboBox->SetSelection(-1);
}

void Menu_Dialog::OnDishAdd_ButtonClick(wxCommandEvent& event) /**< Po wciśnięciu przycisku 'Dodaj' dla nowej potrawy, dodaje nową potrawę na podstawie wprowadzonych danych */
{
    long maxIndex=Menu_ListCtrl->GetItemCount();
    wxString Name=Name_TextCtrl->GetValue();
    wxString Description=Description_TextCtrl->GetValue();
    wxString Weight=Weight_TextCtrl->GetValue();
    Weight << wxT("g");
    wxString Price=Price_TextCtrl->GetValue();
    wxString Type=Type_ComboBox->GetValue();
    if(!(Name==wxT("") || Description==wxT("") || Weight==wxT("") || Price==wxT("") || Type==wxT("")))
    {
        long itemIndex=Menu_ListCtrl->InsertItem(maxIndex, Name);
        Menu_ListCtrl->SetItem(itemIndex, 0, Name);
        Menu_ListCtrl->SetItem(itemIndex, 1, Description);
        Menu_ListCtrl->SetItem(itemIndex, 2, Weight);
        Menu_ListCtrl->SetItem(itemIndex, 3, Price);
        Menu_ListCtrl->SetItem(itemIndex, 4, Type);
        SaveMenuFile();
        ClearDishInputData();
    }
    else
        return;
}

void Menu_Dialog::SetItemDetails(wxString Name, wxString Description, wxString Weight, wxString Price, wxString Type)
{
    long itemIndex=Menu_ListCtrl->InsertItem(itemNumber, Name);
    Menu_ListCtrl->SetItem(itemIndex, 0, Name);
    Menu_ListCtrl->SetItem(itemIndex, 1, Description);
    Menu_ListCtrl->SetItem(itemIndex, 2, Weight);
    Menu_ListCtrl->SetItem(itemIndex, 3, Price);
    Menu_ListCtrl->SetItem(itemIndex, 4, Type);
    SaveMenuFile();
}

void Menu_Dialog::OnMenu_ModifyNameSelected(wxCommandEvent& event) /**< Po wybraniu opcji 'Zmień nazwę...' w 'Modyfikuj', wyświetla okno dialogowe wymagające wprowadzenia nowej nazwy; jeśli zatwierdzono, modyfikuje dane wybranej potrawy */
{
    if(Modify_NameCtrl->ShowModal()==wxID_CANCEL)
        return;
    else
    {
        itemNumber=Menu_ListCtrl->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
        wxString Name=Modify_NameCtrl->GetValue();
        wxString Description=Menu_ListCtrl->GetItemText(itemNumber, 1);
        wxString Weight=Menu_ListCtrl->GetItemText(itemNumber, 2);
        wxString Price=Menu_ListCtrl->GetItemText(itemNumber, 3);
        wxString Type=Menu_ListCtrl->GetItemText(itemNumber, 4);
        Menu_ListCtrl->DeleteItem(itemNumber);
        SetItemDetails(Name, Description, Weight, Price, Type);
        ClearModifyCtrl();
    }
}

void Menu_Dialog::OnMenu_ModifyDescriptionSelected(wxCommandEvent& event) /**< Po wybraniu opcji 'Zmień opis...' w 'Modyfikuj', wyświetla okno dialogowe wymagające wprowadzenia nowego opisu; jeśli zatwierdzono, modyfikuje dane wybranej potrawy */
{
    if(Modify_DescriptionCtrl->ShowModal()==wxID_CANCEL)
        return;
    else
    {
        itemNumber=Menu_ListCtrl->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
        wxString Name=Menu_ListCtrl->GetItemText(itemNumber, 0);
        wxString Description=Modify_DescriptionCtrl->GetValue();
        wxString Weight=Menu_ListCtrl->GetItemText(itemNumber, 2);
        wxString Price=Menu_ListCtrl->GetItemText(itemNumber, 3);
        wxString Type=Menu_ListCtrl->GetItemText(itemNumber, 4);
        Menu_ListCtrl->DeleteItem(itemNumber);
        SetItemDetails(Name, Description, Weight, Price, Type);
        SaveMenuFile();
        ClearModifyCtrl();
    }
}

void Menu_Dialog::OnMenu_ModifyWeightSelected(wxCommandEvent& event) /**< Po wybraniu opcji 'Zmień gramaturę...' w 'Modyfikuj', wyświetla okno dialogowe wymagające wprowadzenia nowej gramatury; jeśli zatwierdzono, modyfikuje dane wybranej potrawy */
{
    if(Modify_WeightCtrl->ShowModal()==wxID_CANCEL)
        return;
    else
    {
        itemNumber=Menu_ListCtrl->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
        wxString Name=Menu_ListCtrl->GetItemText(itemNumber, 0);
        wxString Description=Menu_ListCtrl->GetItemText(itemNumber, 1);
        wxString Weight=Modify_WeightCtrl->GetValue();
        wxString Price=Menu_ListCtrl->GetItemText(itemNumber, 3);
        wxString Type=Menu_ListCtrl->GetItemText(itemNumber, 4);
        Menu_ListCtrl->DeleteItem(itemNumber);
        SetItemDetails(Name, Description, Weight, Price, Type);
        SaveMenuFile();
        ClearModifyCtrl();
    }
}

void Menu_Dialog::OnMenu_ModifyPriceSelected(wxCommandEvent& event) /**< Po wybraniu opcji 'Zmień cenę...' w 'Modyfikuj', wyświetla okno dialogowe wymagające wprowadzenia nowej ceny; jeśli zatwierdzono, modyfikuje dane wybranej potrawy */
{
    if(Modify_PriceCtrl->ShowModal()==wxID_CANCEL)
        return;
    else
    {
        itemNumber=Menu_ListCtrl->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
        wxString Name=Menu_ListCtrl->GetItemText(itemNumber, 0);
        wxString Description=Menu_ListCtrl->GetItemText(itemNumber, 1);
        wxString Weight=Menu_ListCtrl->GetItemText(itemNumber, 2);
        wxString Price=Modify_PriceCtrl->GetValue();
        wxString Type=Menu_ListCtrl->GetItemText(itemNumber, 4);
        Menu_ListCtrl->DeleteItem(itemNumber);
        SetItemDetails(Name, Description, Weight, Price, Type);
        SaveMenuFile();
        ClearModifyCtrl();
    }
}

void Menu_Dialog::OnMenu_DeleteSelected(wxCommandEvent& event) /**< Po wybraniu opcji 'Usuń', wyświetla okno dialogowe wymagające potwierdzenia; jeśli wybrano TAK, usuwa wybraną potrawę z listy */
{
    if(Menu_ListCtrl->GetItemCount()>0)
    {
        if(DishConfirmDelete_Dialog->ShowModal()==wxID_CANCEL)
            return;
        else
        {
            itemNumber=Menu_ListCtrl->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
            Menu_ListCtrl->DeleteItem(itemNumber);
        }
    }
}

void Menu_Dialog::OnClose_ButtonClick(wxCommandEvent& event) /**< Po wciśnięciu przycisku zamknięcia, zapisuje aktualną listę potraw do pliku (data/dishes_list.txt) oraz zamyka okno dialogowe */
{
    SaveMenuFile();
    EndModal(0);
}

void Menu_Dialog::OnMenu_ListCtrlItemRClick(wxListEvent& event) /**< Po wciśnięciu prawego przycisku myszy na wybranej potrawie z listy, wyświetla menu wyboru opcji 'Modyfikuj' oraz 'Usuń' */
{
    PopupMenu(&MenuDialog_Menu);
}

void Menu_Dialog::OnMenu_ListCtrlColumnClick(wxListEvent& event) /**< Sortuje listę potraw po kliknięciu na dowolną jej kolumnę, według wartości znajdujących się w tej kolumnie */
{
    int numItems;
    long item1, item2;
    double item1val, item2val;
    numItems=Menu_ListCtrl->GetItemCount();
    int columnNumber=event.GetColumn();
    if(columnNumber<0)
        return;
    if(columnNumber==3)
    {
        for(item1=1; item1<numItems; item1++)
        {
            item2=item1;
            (Menu_ListCtrl->GetItemText(item2-1, 3)).ToDouble(&item1val);
            (Menu_ListCtrl->GetItemText(item2, 3)).ToDouble(&item2val);
            while(item2>0 && item1val > item2val)
            {
                SortData(item2, item2-1);
                item2=item2-1;
                if(item2-1>=0)
                {
                    (Menu_ListCtrl->GetItemText(item2-1, 3)).ToDouble(&item1val);
                    (Menu_ListCtrl->GetItemText(item2, 3)).ToDouble(&item2val);
                }
            }
        }
        return;
    }
    else
    {
        for(item1=1; item1<numItems; item1++)
        {
            item2=item1;
            while(item2>0 && Menu_ListCtrl->GetItemText(item2-1, columnNumber) > Menu_ListCtrl->GetItemText(item2, columnNumber))
            {
                SortData(item2, item2-1);
                item2=item2-1;
            }
        }
        return;
    }
}
