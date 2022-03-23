#ifndef MENU_DIALOG_H
#define MENU_DIALOG_H

//(*Headers(Menu_Dialog)
#include <wx/button.h>
#include <wx/combobox.h>
#include <wx/dialog.h>
#include <wx/listctrl.h>
#include <wx/menu.h>
#include <wx/msgdlg.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/textdlg.h>
//*)

class Menu_Dialog: public wxDialog
{
	public:

		Menu_Dialog(wxWindow* parent,wxWindowID id=wxID_ANY);
		virtual ~Menu_Dialog();

		//(*Declarations(Menu_Dialog)
		wxButton* Close_Button;
		wxButton* DishAdd_Button;
		wxButton* DishClear_Button;
		wxComboBox* Type_ComboBox;
		wxListCtrl* Menu_ListCtrl;
		wxMenu MenuDialog_Menu;
		wxMenu* ItemModify;
		wxMenuItem* ItemDelete;
		wxMenuItem* ModifyDescription;
		wxMenuItem* ModifyName;
		wxMenuItem* ModifyPrice;
		wxMenuItem* ModifyWeight;
		wxMessageDialog* DishConfirmDelete_Dialog;
		wxStaticText* Description_StaticText;
		wxStaticText* Name_StaticText;
		wxStaticText* Price_StaticText;
		wxStaticText* Type_StaticText;
		wxStaticText* Weight_StaticText;
		wxTextCtrl* Description_TextCtrl;
		wxTextCtrl* Name_TextCtrl;
		wxTextCtrl* Price_TextCtrl;
		wxTextCtrl* Weight_TextCtrl;
		wxTextEntryDialog* Modify_DescriptionCtrl;
		wxTextEntryDialog* Modify_NameCtrl;
		wxTextEntryDialog* Modify_PriceCtrl;
		wxTextEntryDialog* Modify_WeightCtrl;
		//*)

	protected:

		//(*Identifiers(Menu_Dialog)
		static const long ID_LISTCTRL1;
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL2;
		static const long ID_STATICTEXT3;
		static const long ID_TEXTCTRL3;
		static const long ID_STATICTEXT4;
		static const long ID_TEXTCTRL4;
		static const long ID_STATICTEXT5;
		static const long ID_COMBOBOX1;
		static const long ID_BUTTON2;
		static const long ID_BUTTON3;
		static const long ID_BUTTON1;
		static const long MODIFY_NAME;
		static const long MODIFY_DESCRIPTION;
		static const long MODIFY_WEIGHT;
		static const long MODIFY_PRICE;
		static const long ITEM_MODIFY;
		static const long ITEM_DELETE;
		static const long ID_TEXTENTRYDIALOG1;
		static const long ID_TEXTENTRYDIALOG2;
		static const long ID_TEXTENTRYDIALOG3;
		static const long ID_TEXTENTRYDIALOG4;
		static const long ID_MESSAGEDIALOG1;
		//*)

	private:

		//(*Handlers(Menu_Dialog)
		void OnInit(wxInitDialogEvent& event);
		void OnMenuListBeginDrag(wxListEvent& event);
		void OnMenuListColumnClick(wxListEvent& event);
		void OnNewPositionClick(wxCommandEvent& event);
		void OnCloseMenuButtonClick(wxCommandEvent& event);
		void OnClose(wxCloseEvent& event);
		void OnFoodClear_ButtonClick(wxCommandEvent& event);
		void OnDishClear_ButtonClick(wxCommandEvent& event);
		void OnDishAdd_ButtonClick(wxCommandEvent& event);
		void OnMenuListItemSelect(wxListEvent& event);
		void OnMenuListItemDeselect(wxListEvent& event);
		void OnDishDeleteButtonClick(wxCommandEvent& event);
		void OnMenuListItemRClick(wxListEvent& event);
		void OnMenu_ModifyNameSelected(wxCommandEvent& event);
		void OnMenu_ModifyDescriptionSelected(wxCommandEvent& event);
		void OnMenu_ModifyWeightSelected(wxCommandEvent& event);
		void OnMenu_ModifyPriceSelected(wxCommandEvent& event);
		void OnMenu_DeleteSelected(wxCommandEvent& event);
		void OnModifyTypeSelected(wxCommandEvent& event);
		void OnClose_ButtonClick(wxCommandEvent& event);
		void OnMenu_ListCtrlItemRClick(wxListEvent& event);
		void OnMenu_ListCtrlColumnClick(wxListEvent& event);
		//*)
		long itemNumber; /**< Zmienna przechowująca numer danej pozycji na liście */

		void SetItemDetails(wxString Name, wxString Description, wxString Weight, wxString Price, wxString Type); /**< Ustawia wartości przekazane przez parametr dla danej pozycji w liście */
		void ClearDishInputData(); /**< Czyści pola wejściowe dla nowej potrawy */
		void ClearFile(wxString path); /**< Czyści plik *.txt o podanej ścieżce */
		void SaveMenuFile(); /**< Zapisuje plik zawierający informacje o klientach (data/customers_list.txt) */
		void ClearModifyCtrl(); /**< Czyści pola wejściowe modyfikacji danych */
        void SortData(long item1, long item2); /**< Funkcja sortująca dane zawarte w liście */
		DECLARE_EVENT_TABLE()
};

#endif
