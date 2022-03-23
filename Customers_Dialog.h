#ifndef CUSTOMERS_DIALOG_H
#define CUSTOMERS_DIALOG_H

//(*Headers(Customers_Dialog)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/listctrl.h>
#include <wx/menu.h>
#include <wx/msgdlg.h>
#include <wx/sizer.h>
#include <wx/textdlg.h>
//*)

class Customers_Dialog: public wxDialog
{
	public:

		Customers_Dialog(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Customers_Dialog();

		//(*Declarations(Customers_Dialog)
		wxButton* Close_Button;
		wxListCtrl* Customers_ListCtrl;
		wxMenu CustomersDialog_Menu;
		wxMenu* ItemModify;
		wxMenuItem* ItemDelete;
		wxMenuItem* ModifyAddress;
		wxMenuItem* ModifyFirstName;
		wxMenuItem* ModifyLastName;
		wxMenuItem* ModifyTelephone;
		wxMessageDialog* CustomerConfirmDelete_Dialog;
		wxTextEntryDialog* Modify_AddressCtrl;
		wxTextEntryDialog* Modify_FirstNameCtrl;
		wxTextEntryDialog* Modify_LastNameCtrl;
		wxTextEntryDialog* Modify_TelephoneCtrl;
		//*)

	protected:

		//(*Identifiers(Customers_Dialog)
		static const long ID_LISTCTRL1;
		static const long ID_BUTTON1;
		static const long MODIFY_FIRSTNAME;
		static const long MODIFY_LASTNAME;
		static const long MODIFY_TELEPHONE;
		static const long MODIFY_ADDRESS;
		static const long ITEM_MODIFY;
		static const long ITEM_DELETE;
		static const long ID_TEXTENTRYDIALOG1;
		static const long ID_TEXTENTRYDIALOG2;
		static const long ID_TEXTENTRYDIALOG3;
		static const long ID_TEXTENTRYDIALOG4;
		static const long ID_MESSAGEDIALOG1;
		//*)

	private:

		//(*Handlers(Customers_Dialog)
		void OnCloseCustomersButtonClick(wxCommandEvent& event);
		void OnInit(wxInitDialogEvent& event);
		void OnUserListColumnClick(wxListEvent& event);
		void OnClose(wxCloseEvent& event);
		void OnButton1Click(wxCommandEvent& event);
		void OnUserListItemSelect(wxListEvent& event);
		void OnUserListItemDeselect(wxListEvent& event);
		void OnCustomerDeleteButtonClick(wxCommandEvent& event);
		void OnUserListItemRClick(wxListEvent& event);
		void OnModifyFirstNameSelected(wxCommandEvent& event);
		void OnModifyLastNameSelected(wxCommandEvent& event);
		void OnModifyTelephoneSelected(wxCommandEvent& event);
		void OnModifyAddressSelected(wxCommandEvent& event);
		void OnItemDeleteSelected(wxCommandEvent& event);
		void OnClose_ButtonClick(wxCommandEvent& event);
		void OnCustomers_ListCtrlItemRClick(wxListEvent& event);
		void OnCustomers_ListCtrlColumnClick(wxListEvent& event);
		//*)
		long itemNumber; /**< Zmienna przechowująca numer danej pozycji na liście */
        int columnNumber; /**< Zmienna przechowująca numer kolumny listy */

		void SetItemDetails(wxString FirstName, wxString LastName, wxString Telephone, wxString Address); /**< Ustawia wartości przekazane przez parametr dla danej pozycji w liście */
        void ClearFile(wxString path); /**< Czyści plik *.txt o podanej ścieżce */
        void SaveCustomersFile(); /**< Zapisuje plik zawierający informacje o klientach (data/customers_list.txt) */
        void ClearModifyCtrl(); /**< Czyści pola wejściowe modyfikacji danych */
        void SortData(long item1, long item2); /**< Funkcja sortująca dane zawarte w liście */
        void SortItems(int columnNumber); /**< Obsługiwanie funkcji sortującej */
		DECLARE_EVENT_TABLE()
};

#endif
