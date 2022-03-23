#include "Customers_Dialog.h"
#include <wx/textfile.h>
#include <wx/wfstream.h>
#include <wx/txtstrm.h>
#include <wx/log.h>

//(*InternalHeaders(Customers_Dialog)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Customers_Dialog)
const long Customers_Dialog::ID_LISTCTRL1 = wxNewId();
const long Customers_Dialog::ID_BUTTON1 = wxNewId();
const long Customers_Dialog::MODIFY_FIRSTNAME = wxNewId();
const long Customers_Dialog::MODIFY_LASTNAME = wxNewId();
const long Customers_Dialog::MODIFY_TELEPHONE = wxNewId();
const long Customers_Dialog::MODIFY_ADDRESS = wxNewId();
const long Customers_Dialog::ITEM_MODIFY = wxNewId();
const long Customers_Dialog::ITEM_DELETE = wxNewId();
const long Customers_Dialog::ID_TEXTENTRYDIALOG1 = wxNewId();
const long Customers_Dialog::ID_TEXTENTRYDIALOG2 = wxNewId();
const long Customers_Dialog::ID_TEXTENTRYDIALOG3 = wxNewId();
const long Customers_Dialog::ID_TEXTENTRYDIALOG4 = wxNewId();
const long Customers_Dialog::ID_MESSAGEDIALOG1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Customers_Dialog,wxDialog)
	//(*EventTable(Customers_Dialog)
	//*)
END_EVENT_TABLE()

Customers_Dialog::Customers_Dialog(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Customers_Dialog)
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;

	Create(parent, wxID_ANY, _T("Lista klientów"), wxDefaultPosition, wxDefaultSize, wxCAPTION|wxRESIZE_BORDER|wxCLOSE_BOX, _T("wxID_ANY"));
	SetBackgroundColour(wxColour(247,247,247));
	wxFont thisFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	SetFont(thisFont);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	Customers_ListCtrl = new wxListCtrl(this, ID_LISTCTRL1, wxDefaultPosition, wxDefaultSize, wxLC_REPORT|wxVSCROLL, wxDefaultValidator, _T("ID_LISTCTRL1"));
	Customers_ListCtrl->SetMinSize(wxSize(600,760));
	wxListItem Col_Name;
	Col_Name.SetId(0);
	Col_Name.SetText(_T("Imię"));
	Col_Name.SetWidth(120);
	Customers_ListCtrl->InsertColumn(0, Col_Name);

	wxListItem Col_Surname;
	Col_Surname.SetId(1);
	Col_Surname.SetText(_T("Nazwisko"));
	Col_Surname.SetWidth(150);
	Customers_ListCtrl->InsertColumn(1, Col_Surname);

	wxListItem Col_Telephone;
	Col_Telephone.SetId(2);
	Col_Telephone.SetText(_T("Numer telefonu"));
	Col_Telephone.SetWidth(110);
	Customers_ListCtrl->InsertColumn(2, Col_Telephone);

	wxListItem Col_Adress;
	Col_Adress.SetId(3);
	Col_Adress.SetText(_T("Adres"));
	Col_Adress.SetWidth(220);
	Customers_ListCtrl->InsertColumn(3, Col_Adress);
	BoxSizer3->Add(Customers_ListCtrl, 4, wxTOP|wxBOTTOM|wxLEFT|wxEXPAND, 3);
	BoxSizer1->Add(BoxSizer3, 4, wxTOP|wxBOTTOM|wxLEFT|wxEXPAND, 3);
	BoxSizer2 = new wxBoxSizer(wxVERTICAL);
	Close_Button = new wxButton(this, ID_BUTTON1, _T("Zamknij"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	Close_Button->SetMinSize(wxSize(130,25));
	Close_Button->SetMaxSize(wxSize(130,25));
	Close_Button->SetBackgroundColour(wxColour(230,230,230));
	BoxSizer2->Add(Close_Button, 1, wxTOP|wxBOTTOM|wxALIGN_CENTER_HORIZONTAL, 3);
	BoxSizer1->Add(BoxSizer2, 1, wxTOP|wxBOTTOM|wxALIGN_TOP, 3);
	SetSizer(BoxSizer1);
	ItemModify = new wxMenu();
	ModifyFirstName = new wxMenuItem(ItemModify, MODIFY_FIRSTNAME, _T("Zmień imię..."), wxEmptyString, wxITEM_NORMAL);
	ItemModify->Append(ModifyFirstName);
	ModifyLastName = new wxMenuItem(ItemModify, MODIFY_LASTNAME, _T("Zmień nazwisko..."), wxEmptyString, wxITEM_NORMAL);
	ItemModify->Append(ModifyLastName);
	ModifyTelephone = new wxMenuItem(ItemModify, MODIFY_TELEPHONE, _T("Zmień numer telefonu..."), wxEmptyString, wxITEM_NORMAL);
	ItemModify->Append(ModifyTelephone);
	ModifyAddress = new wxMenuItem(ItemModify, MODIFY_ADDRESS, _T("Zmień adres..."), wxEmptyString, wxITEM_NORMAL);
	ItemModify->Append(ModifyAddress);
	CustomersDialog_Menu.Append(ITEM_MODIFY, _T("&Modyfikuj"), ItemModify, wxEmptyString);
	ItemDelete = new wxMenuItem((&CustomersDialog_Menu), ITEM_DELETE, _T("&Usuń"), wxEmptyString, wxITEM_NORMAL);
	CustomersDialog_Menu.Append(ItemDelete);
	Modify_FirstNameCtrl = new wxTextEntryDialog(this, _T("Podaj imię"), _T("Modyfikacja"), wxEmptyString, wxOK|wxCANCEL|wxCENTRE|wxWS_EX_VALIDATE_RECURSIVELY, wxDefaultPosition);
	Modify_LastNameCtrl = new wxTextEntryDialog(this, _T("Podaj nazwisko"), _T("Modyfikacja"), wxEmptyString, wxOK|wxCANCEL|wxCENTRE|wxWS_EX_VALIDATE_RECURSIVELY, wxDefaultPosition);
	Modify_TelephoneCtrl = new wxTextEntryDialog(this, _T("Podaj numer telefonu"), _T("Modyfikacja"), wxEmptyString, wxOK|wxCANCEL|wxCENTRE|wxWS_EX_VALIDATE_RECURSIVELY, wxDefaultPosition);
	Modify_AddressCtrl = new wxTextEntryDialog(this, _T("Podaj adres"), _T("Modyfikacja"), wxEmptyString, wxOK|wxCANCEL|wxCENTRE|wxWS_EX_VALIDATE_RECURSIVELY, wxDefaultPosition);
	CustomerConfirmDelete_Dialog = new wxMessageDialog(this, _T("Usunąć klienta z listy\?"), _T("eStaurant"), wxOK|wxCANCEL, wxDefaultPosition);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	Center();

	Connect(ID_LISTCTRL1,wxEVT_COMMAND_LIST_ITEM_RIGHT_CLICK,(wxObjectEventFunction)&Customers_Dialog::OnCustomers_ListCtrlItemRClick);
	Connect(ID_LISTCTRL1,wxEVT_COMMAND_LIST_COL_CLICK,(wxObjectEventFunction)&Customers_Dialog::OnCustomers_ListCtrlColumnClick);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Customers_Dialog::OnClose_ButtonClick);
	Connect(MODIFY_FIRSTNAME,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Customers_Dialog::OnModifyFirstNameSelected);
	Connect(MODIFY_LASTNAME,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Customers_Dialog::OnModifyLastNameSelected);
	Connect(MODIFY_TELEPHONE,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Customers_Dialog::OnModifyTelephoneSelected);
	Connect(MODIFY_ADDRESS,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Customers_Dialog::OnModifyAddressSelected);
	Connect(ITEM_DELETE,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Customers_Dialog::OnItemDeleteSelected);
	Connect(wxID_ANY,wxEVT_INIT_DIALOG,(wxObjectEventFunction)&Customers_Dialog::OnInit);
	Connect(wxID_ANY,wxEVT_CLOSE_WINDOW,(wxObjectEventFunction)&Customers_Dialog::OnClose);
	//*)
}

Customers_Dialog::~Customers_Dialog()
{
	//(*Destroy(Customers_Dialog)
	//*)
}

void Customers_Dialog::OnInit(wxInitDialogEvent& event) /**< Po uruchomieniu okna dialogowego, wczytuje do listy informacje o klientach z pliku (data/customers_list.txt) */
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

        long itemIndex=Customers_ListCtrl->InsertItem(0, line);
        while(input.IsOk() && !input.Eof())
        {
            text >> line;
            Customers_ListCtrl->SetItem(itemIndex, columnIterator, line);
            columnIterator++;
            if(columnIterator>3)
            {
                lineIterator++;
                columnIterator=0;
                if(!input.Eof())
                itemIndex=Customers_ListCtrl->InsertItem(lineIterator, line);
            }
        }
    }
    SortItems(0);
}

void Customers_Dialog::ClearFile(wxString path)
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

void Customers_Dialog::SaveCustomersFile()
{
    ClearFile("data/customers_list.txt");
    wxFileOutputStream output("data/customers_list.txt");
    if(!output.IsOk())
    {
        wxLogError("Nie mozna zapisac pliku '%s'.", "data/customers_list.txt");
        return;
    }
    else
    {
        wxTextOutputStream file(output);
        int numItems=Customers_ListCtrl->GetItemCount();
        int numCols=Customers_ListCtrl->GetColumnCount();
        for(int i=0; i<numItems; i++)
        {
            for(int j=0; j<numCols; j++)
            {
                file << Customers_ListCtrl->GetItemText(i, j);
                if(!(i+1==numItems && j+1==numCols))
                    file << '\n';
            }
        }
    }
}

void Customers_Dialog::SortItems(int columnNumber)
{
    int numItems;
    long item1, item2;
    numItems=Customers_ListCtrl->GetItemCount();
    if(columnNumber<0)
        return;
    else
    {
        for(item1=1; item1<numItems; item1++)
        {
            item2=item1;
            while(item2>0 && Customers_ListCtrl->GetItemText(item2-1, columnNumber) > Customers_ListCtrl->GetItemText(item2, columnNumber))
            {
                SortData(item2, item2-1);
                item2=item2-1;
            }
        }
        return;
    }
}

void Customers_Dialog::SortData(long item1, long item2)
{
    int numCols;
    long tempData;
    wxString tempString;
    numCols=Customers_ListCtrl->GetColumnCount();
    for(int i=0; i<numCols; i++)
    {
        tempString=Customers_ListCtrl->GetItemText(item1, i);
        Customers_ListCtrl->SetItem(item1, i, Customers_ListCtrl->GetItemText(item2, i));
        Customers_ListCtrl->SetItem(item2, i, tempString);
    }
    tempData=Customers_ListCtrl->GetItemData(item1);
    Customers_ListCtrl->SetItemData(item1, Customers_ListCtrl->GetItemData(item2));
    Customers_ListCtrl->SetItemData(item2, tempData);
    return;
}

void Customers_Dialog::OnClose(wxCloseEvent& event) /**< Po wciśnięciu przycisku wyjścia, zapisuje informacje o klientach w pliku (data/customers_list.txt) oraz zamyka okno dialogowe */
{
    wxFileOutputStream output("data/customers_list.txt");
    if(!output.IsOk())
    {
        wxLogError("Nie mozna zapisac pliku '%s'.", "data/customers_list.txt");
        return;
    }
    else
    {
        wxTextOutputStream file(output);
        int numItems=Customers_ListCtrl->GetItemCount();
        int numCols=Customers_ListCtrl->GetColumnCount();
        for(int i=0; i<numItems; i++)
        {
            for(int j=0; j<numCols; j++)
            {
                file << Customers_ListCtrl->GetItemText(i, j);
                if(!(i+1==numItems && j+1==numCols))
                    file << '\n';
            }
        }
    }
    EndModal(0);
}

void Customers_Dialog::OnCustomerDeleteButtonClick(wxCommandEvent& event) /**< Po wybraniu opcji 'Usuń', usuwa informacje o kliencie z listy */
{
    if(Customers_ListCtrl->GetItemCount()>0)
    {
        itemNumber=Customers_ListCtrl->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
        Customers_ListCtrl->DeleteItem(itemNumber);
    }
}

void Customers_Dialog::ClearModifyCtrl()
{
    Modify_FirstNameCtrl->SetValue(wxT(""));
    Modify_LastNameCtrl->SetValue(wxT(""));
    Modify_TelephoneCtrl->SetValue(wxT(""));
    Modify_AddressCtrl->SetValue(wxT(""));
}

void Customers_Dialog::SetItemDetails(wxString FirstName, wxString LastName, wxString Telephone, wxString Address)
{
    long itemIndex=Customers_ListCtrl->InsertItem(itemNumber, FirstName);
    Customers_ListCtrl->SetItem(itemIndex, 0, FirstName);
    Customers_ListCtrl->SetItem(itemIndex, 1, LastName);
    Customers_ListCtrl->SetItem(itemIndex, 2, Telephone);
    Customers_ListCtrl->SetItem(itemIndex, 3, Address);
    SaveCustomersFile();
}

void Customers_Dialog::OnModifyFirstNameSelected(wxCommandEvent& event) /**< Po wybraniu opcji 'Zmień imię...' w 'Modyfikuj', wyświetla okno dialogowe wymagające wprowadzenia nowego imienia; jeśli zatwierdzono, modyfikuje dane wybranego klienta */
{
    if(Modify_FirstNameCtrl->ShowModal()==wxID_CANCEL)
        return;
    else
    {
        itemNumber=Customers_ListCtrl->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
        wxString FirstName=Modify_FirstNameCtrl->GetValue();
        wxString LastName=Customers_ListCtrl->GetItemText(itemNumber, 1);
        wxString Telephone=Customers_ListCtrl->GetItemText(itemNumber, 2);
        wxString Address=Customers_ListCtrl->GetItemText(itemNumber, 3);
        Customers_ListCtrl->DeleteItem(itemNumber);
        SetItemDetails(FirstName, LastName, Telephone, Address);
        ClearModifyCtrl();
    }
}

void Customers_Dialog::OnModifyLastNameSelected(wxCommandEvent& event) /**< Po wybraniu opcji 'Zmień nazwisko...' w 'Modyfikuj', wyświetla okno dialogowe wymagające wprowadzenia nowego nazwiska; jeśli zatwierdzono, modyfikuje dane wybranego klienta */
{
    if(Modify_LastNameCtrl->ShowModal()==wxID_CANCEL)
        return;
    else
    {
        itemNumber=Customers_ListCtrl->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
        wxString FirstName=Customers_ListCtrl->GetItemText(itemNumber, 0);
        wxString LastName=Modify_LastNameCtrl->GetValue();
        wxString Telephone=Customers_ListCtrl->GetItemText(itemNumber, 2);
        wxString Address=Customers_ListCtrl->GetItemText(itemNumber, 3);
        Customers_ListCtrl->DeleteItem(itemNumber);
        SetItemDetails(FirstName, LastName, Telephone, Address);
        ClearModifyCtrl();
    }
}

void Customers_Dialog::OnModifyTelephoneSelected(wxCommandEvent& event) /**< Po wybraniu opcji 'Zmień numer telefonu...' w 'Modyfikuj', wyświetla okno dialogowe wymagające wprowadzenia nowego numeru telefonu; jeśli zatwierdzono, modyfikuje dane wybranego klienta */
{
    if(Modify_TelephoneCtrl->ShowModal()==wxID_CANCEL)
        return;
    else
    {
        itemNumber=Customers_ListCtrl->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
        wxString FirstName=Customers_ListCtrl->GetItemText(itemNumber, 0);
        wxString LastName=Customers_ListCtrl->GetItemText(itemNumber, 1);
        wxString Telephone=Modify_TelephoneCtrl->GetValue();
        wxString Address=Customers_ListCtrl->GetItemText(itemNumber, 3);
        Customers_ListCtrl->DeleteItem(itemNumber);
        SetItemDetails(FirstName, LastName, Telephone, Address);
        ClearModifyCtrl();
    }
}

void Customers_Dialog::OnModifyAddressSelected(wxCommandEvent& event) /**< Po wybraniu opcji 'Zmień adres...' w 'Modyfikuj', wyświetla okno dialogowe wymagające wprowadzenia nowego adresu; jeśli zatwierdzono, modyfikuje dane wybranego klienta */
{
    if(Modify_AddressCtrl->ShowModal()==wxID_CANCEL)
        return;
    else
    {
        itemNumber=Customers_ListCtrl->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
        wxString FirstName=Customers_ListCtrl->GetItemText(itemNumber, 0);
        wxString LastName=Customers_ListCtrl->GetItemText(itemNumber, 1);
        wxString Telephone=Customers_ListCtrl->GetItemText(itemNumber, 2);
        wxString Address=Modify_AddressCtrl->GetValue();
        Customers_ListCtrl->DeleteItem(itemNumber);
        SetItemDetails(FirstName, LastName, Telephone, Address);
        ClearModifyCtrl();
    }
}

void Customers_Dialog::OnItemDeleteSelected(wxCommandEvent& event) /**< Po wybraniu opcji 'Usuń', wyświetla okno dialogowe wymagające potwierdzenia; jeśli wybrano TAK, usuwa wybranego klienta z listy */
{
    if(Customers_ListCtrl->GetItemCount()>0)
    {
        if(CustomerConfirmDelete_Dialog->ShowModal()==wxID_CANCEL)
            return;
        else
        {
            itemNumber=Customers_ListCtrl->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
            Customers_ListCtrl->DeleteItem(itemNumber);
        }
    }
}

void Customers_Dialog::OnClose_ButtonClick(wxCommandEvent& event) /**< Po wciśnięciu przycisku zamknięcia, zapisuje aktualną listę klientów do pliku (data/customers_list.txt) oraz zamyka okno dialogowe */
{
    SortItems(0);
    SaveCustomersFile();
    EndModal(0);
}

void Customers_Dialog::OnCustomers_ListCtrlItemRClick(wxListEvent& event) /**< Po wciśnięciu prawego przycisku myszy na wybranym kliencie z listy, wyświetla menu wyboru opcji 'Modyfikuj' oraz 'Usuń' */
{
    PopupMenu(&CustomersDialog_Menu);
}

void Customers_Dialog::OnCustomers_ListCtrlColumnClick(wxListEvent& event) /**< Sortuje listę klientów po kliknięciu na dowolną jej kolumnę, według wartości znajdujących się w tej kolumnie */
{
    columnNumber=event.GetColumn();
    SortItems(columnNumber);
}
