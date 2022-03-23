#include "Archive_Dialog.h"
#include <wx/textfile.h>
#include <wx/wfstream.h>
#include <wx/txtstrm.h>
#include <wx/log.h>

//(*InternalHeaders(Archive_Dialog)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Archive_Dialog)
const long Archive_Dialog::ID_LISTCTRL1 = wxNewId();
const long Archive_Dialog::ID_BUTTON2 = wxNewId();
const long Archive_Dialog::ID_BUTTON1 = wxNewId();
const long Archive_Dialog::ID_MESSAGEDIALOG1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Archive_Dialog,wxDialog)
	//(*EventTable(Archive_Dialog)
	//*)
END_EVENT_TABLE()

Archive_Dialog::Archive_Dialog(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Archive_Dialog)
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;
	wxBoxSizer* BoxSizer4;
	wxBoxSizer* BoxSizer5;

	Create(parent, wxID_ANY, _T("Archiwum"), wxDefaultPosition, wxDefaultSize, wxCAPTION|wxRESIZE_BORDER|wxCLOSE_BOX, _T("wxID_ANY"));
	SetBackgroundColour(wxColour(247,247,247));
	wxFont thisFont(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	SetFont(thisFont);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	Archive_ListCtrl = new wxListCtrl(this, ID_LISTCTRL1, wxDefaultPosition, wxDefaultSize, wxLC_REPORT|wxVSCROLL, wxDefaultValidator, _T("ID_LISTCTRL1"));
	Archive_ListCtrl->SetMinSize(wxSize(680,760));
	wxListItem Col_Address;
	Col_Address.SetId(0);
	Col_Address.SetText(_T("Adres"));
	Col_Address.SetWidth(120);
	Archive_ListCtrl->InsertColumn(0, Col_Address);

	wxListItem Col_Price;
	Col_Price.SetId(1);
	Col_Price.SetText(_T("Kwota"));
	Col_Price.SetWidth(85);
	Archive_ListCtrl->InsertColumn(1, Col_Price);

	wxListItem Col_Payment;
	Col_Payment.SetId(2);
	Col_Payment.SetText(_T("Płatność"));
	Col_Payment.SetWidth(100);
	Archive_ListCtrl->InsertColumn(2, Col_Payment);

	wxListItem Col_Telephone;
	Col_Telephone.SetId(3);
	Col_Telephone.SetText(_T("Numer tel."));
	Col_Telephone.SetWidth(80);
	Archive_ListCtrl->InsertColumn(3, Col_Telephone);

	wxListItem Col_Date;
	Col_Date.SetId(4);
	Col_Date.SetText(_T("Data"));
	Col_Date.SetWidth(125);
	Archive_ListCtrl->InsertColumn(4, Col_Date);

	wxListItem Col_Info;
	Col_Info.SetId(5);
	Col_Info.SetText(_T("Szczegóły"));
	Col_Info.SetWidth(300);
	Archive_ListCtrl->InsertColumn(5, Col_Info);
	BoxSizer3->Add(Archive_ListCtrl, 6, wxALL|wxEXPAND, 3);
	BoxSizer1->Add(BoxSizer3, 6, wxALL|wxEXPAND, 3);
	BoxSizer5 = new wxBoxSizer(wxVERTICAL);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	ClearArchive_Button = new wxButton(this, ID_BUTTON2, _T("Wyczyść"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	ClearArchive_Button->SetMinSize(wxSize(130,25));
	ClearArchive_Button->SetMaxSize(wxSize(130,25));
	ClearArchive_Button->SetBackgroundColour(wxColour(230,230,230));
	BoxSizer2->Add(ClearArchive_Button, 1, wxTOP|wxBOTTOM|wxRIGHT|wxALIGN_TOP, 3);
	BoxSizer5->Add(BoxSizer2, 1, wxTOP|wxBOTTOM|wxRIGHT|wxALIGN_CENTER_HORIZONTAL, 3);
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	CloseArchive_Button = new wxButton(this, ID_BUTTON1, _T("Zamknij"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	CloseArchive_Button->SetMinSize(wxSize(130,25));
	CloseArchive_Button->SetMaxSize(wxSize(130,25));
	CloseArchive_Button->SetBackgroundColour(wxColour(230,230,230));
	BoxSizer4->Add(CloseArchive_Button, 1, wxTOP|wxBOTTOM|wxRIGHT|wxALIGN_TOP, 3);
	BoxSizer5->Add(BoxSizer4, 1, wxBOTTOM|wxRIGHT|wxALIGN_CENTER_HORIZONTAL, 3);
	BoxSizer1->Add(BoxSizer5, 1, wxALIGN_TOP, 5);
	SetSizer(BoxSizer1);
	ArchiveConfirmClear_Dialog = new wxMessageDialog(this, _T("Wyczyścić archiwum zamówień\?"), _T("eStaurant"), wxOK|wxCANCEL, wxDefaultPosition);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	Center();

	Connect(ID_LISTCTRL1,wxEVT_COMMAND_LIST_COL_CLICK,(wxObjectEventFunction)&Archive_Dialog::OnArchive_ListCtrlColumnClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Archive_Dialog::OnClearArchive_ButtonClick);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Archive_Dialog::OnCloseArchive_ButtonClick);
	Connect(wxID_ANY,wxEVT_INIT_DIALOG,(wxObjectEventFunction)&Archive_Dialog::OnInit);
	//*)
}

Archive_Dialog::~Archive_Dialog()
{
	//(*Destroy(Archive_Dialog)
	//*)
}


void Archive_Dialog::OnInit(wxInitDialogEvent& event) /**< Po uruchomieniu okna dialogowego, wczytuje do listy archiwum zamówień z pliku (data/archives_list.txt) */
{
    int columnIterator=0, lineIterator=0;
    wxFileInputStream input("data/archives_list.txt");
    if(!input.IsOk())
    {
        wxLogError("Nie mozna otworzyc pliku '%s'.", "data/archives_list.txt");
        return;
    }
    else
    {
        if(input.Eof())
            return;
        wxTextInputStream text(input, wxT("\n"), wxConvUTF8);
        wxString line;
        long itemIndex=Archive_ListCtrl->InsertItem(0, line);
        while(input.IsOk() && !input.Eof())
        {
            text >> line;
            Archive_ListCtrl->SetItem(itemIndex, columnIterator, line);
            columnIterator++;
            if(columnIterator>5)
            {
                lineIterator++;
                columnIterator=0;
                if(!input.Eof())
                    itemIndex=Archive_ListCtrl->InsertItem(lineIterator, line);
            }
        }
    }
}

void Archive_Dialog::SortData(long item1, long item2)
{
    int numCols;
    long tempData;
    wxString tempString;
    numCols=Archive_ListCtrl->GetColumnCount();
    for(int i=0; i<numCols; i++)
    {
        tempString=Archive_ListCtrl->GetItemText(item1, i);
        Archive_ListCtrl->SetItem(item1, i, Archive_ListCtrl->GetItemText(item2, i));
        Archive_ListCtrl->SetItem(item2, i, tempString);
    }
    tempData=Archive_ListCtrl->GetItemData(item1);
    Archive_ListCtrl->SetItemData(item1, Archive_ListCtrl->GetItemData(item2));
    Archive_ListCtrl->SetItemData(item2, tempData);
    return;
}

void Archive_Dialog::OnClearArchive_ButtonClick(wxCommandEvent& event) /**< Po wciśnięciu przycisku 'Wyczyść', wyświetla okno dialogowe z potwierdzeniem wyczyszczenia archiwum; jeśli wybrano TAK, usuwa wszystkie elementy z listy oraz czyści plik (data/archives_list.txt) */
{
    if(ArchiveConfirmClear_Dialog->ShowModal()==wxID_CANCEL)
        return;
    else
    {
        if(!Archive_ListCtrl->DeleteAllItems())
        {
            wxLogError("Blad podczas proby wyczyszczenia archiwum.");
            return;
        }
    }
    wxTextFile file("data/archives_list.txt");
    if(file.Exists())
    {
        file.Open("data/archives_list.txt", wxConvUTF8);
        file.Clear();
        file.Write();
        file.Close();
    }
}

void Archive_Dialog::OnCloseArchive_ButtonClick(wxCommandEvent& event) /**< Po wciśnięciu przycisku wyjścia, zamyka okno dialogowe */
{
    EndModal(0);
}

void Archive_Dialog::OnArchive_ListCtrlColumnClick(wxListEvent& event) /**< Sortuje archiwum po kliknięciu na dowolną kolumnę listy, według wartości znajdujących się w tej kolumnie */
{
    int numItems;
    long item1, item2;
    numItems=Archive_ListCtrl->GetItemCount();
    int columnNumber=event.GetColumn();
    if(columnNumber<0)
        return;
    else
    {
        for(item1=1; item1<numItems; item1++)
        {
            item2=item1;
            while(item2>0 && Archive_ListCtrl->GetItemText(item2-1, columnNumber) > Archive_ListCtrl->GetItemText(item2, columnNumber))
            {
                SortData(item2, item2-1);
                item2=item2-1;
            }
        }
        return;
    }
}
