/***************************************************************
 * Name:      eStaurantMain.h
 * Purpose:   Defines Application Frame
 * Author:    Bartosz Bukowski (bukowskibe@gmail.com)
 * Created:   2020-12-02
 * Copyright: Bartosz Bukowski ()
 * License:
 **************************************************************/

#ifndef ESTAURANTMAIN_H
#define ESTAURANTMAIN_H

#include "Menu_Dialog.h"
#include "Customers_Dialog.h"
#include "Archive_Dialog.h"
#include "Info_Dialog.h"
#include <wx/valtext.h>
#include <vector>
#include <algorithm>

//(*Headers(eStaurantFrame)
#include <wx/button.h>
#include <wx/checkbox.h>
#include <wx/choice.h>
#include <wx/combobox.h>
#include <wx/frame.h>
#include <wx/listctrl.h>
#include <wx/menu.h>
#include <wx/msgdlg.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class eStaurantFrame: public wxFrame
{
    public:

        eStaurantFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~eStaurantFrame();

    private:

        //(*Handlers(eStaurantFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnMenuItem3Selected(wxCommandEvent& event);
        void OnMenuItem4Selected(wxCommandEvent& event);
        void OnUserListBeginDrag(wxListEvent& event);
        void OnUserListColumnClick(wxListEvent& event);
        void OnMenu_ButtonClick(wxCommandEvent& event);
        void OnCustomers_ButtonClick(wxCommandEvent& event);
        void OnOrdersListColumnClick(wxListEvent& event);
        void OnOrders_ReadClick(wxCommandEvent& event);
        void OnTextCtrl1Text(wxCommandEvent& event);
        void OnActiveOrdersCtrlText(wxCommandEvent& event);
        void OnOrderClear_ButtonClick(wxCommandEvent& event);
        void OnOrdersListItemSelect(wxListEvent& event);
        void OnOrderDelete_ButtonClick(wxCommandEvent& event);
        void OnOrderAdd_ButtonClick(wxCommandEvent& event);
        void OnAddDish2_ButtonClick(wxCommandEvent& event);
        void OnAddDish3_ButtonClick(wxCommandEvent& event);
        void OnAddDish4_ButtonClick(wxCommandEvent& event);
        void OnAddDish5_ButtonClick(wxCommandEvent& event);
        void OnAddDish6_ButtonClick(wxCommandEvent& event);
        void OnDish1ComboSelected(wxCommandEvent& event);
        void OnDish2ComboSelected(wxCommandEvent& event);
        void OnDish3ComboSelected(wxCommandEvent& event);
        void OnDish4ComboSelected(wxCommandEvent& event);
        void OnDish5ComboSelected(wxCommandEvent& event);
        void OnDish6ComboSelected(wxCommandEvent& event);
        void OnDish1ComboDropdown(wxCommandEvent& event);
        void OnClose(wxCloseEvent& event);
        void OnOrdersListItemSelect1(wxListEvent& event);
        void OnOrdersListItemDeselect(wxListEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        void OnArchive_ButtonClick(wxCommandEvent& event);
        void OnCustomerAdd_ButtonClick(wxCommandEvent& event);
        void OnOrdersListColumnClick1(wxListEvent& event);
        void OnMenu_AboutSelected(wxCommandEvent& event);
        void OnMenu_PrintSelected(wxCommandEvent& event);
        void OnOrders_ListCtrlItemSelect(wxListEvent& event);
        void OnOrders_ListCtrlItemDeselect(wxListEvent& event);
        void OnOrders_ListCtrlColumnClick(wxListEvent& event);
        void OnDish1_ComboBoxSelected(wxCommandEvent& event);
        void OnDish2_ComboBoxSelected(wxCommandEvent& event);
        void OnDish3_ComboBoxSelected(wxCommandEvent& event);
        void OnDish4_ComboBoxSelected(wxCommandEvent& event);
        void OnDish5_ComboBoxSelected(wxCommandEvent& event);
        void OnDish6_ComboBoxSelected(wxCommandEvent& event);
        void OnOrderArchive_ButtonClick(wxCommandEvent& event);
        void OnPlusSign1_ButtonClick(wxCommandEvent& event);
        void OnPlusSign2_ButtonClick(wxCommandEvent& event);
        void OnPlusSign3_ButtonClick(wxCommandEvent& event);
        void OnPlusSign4_ButtonClick(wxCommandEvent& event);
        void OnPlusSign5_ButtonClick(wxCommandEvent& event);
        void OnCustomer_CheckBoxClick(wxCommandEvent& event);
        void OnCustomer_ComboBoxSelected(wxCommandEvent& event);
        //*)

        std::vector <int> OrdersNumbers; /**< Struktura przechowująca numery zamówień wczytywanych z pliku (data/orders_list.txt) */
        int currNumInt;/**< Zmienna pomocnicza do zapełniania struktury vector */
        int NumberOfDishes=1; /**< Domyślna liczba potraw w pojedynczym zamówieniu; liczba ta jest zwiększana wraz z dodawaniem potraw do zamówienia */
        int OrderNum=1; /**< Domyślny numer nowego zamówienia; zwiększany jest w zależności ilości aktualnych zamówień */
        int offset=1; /**< Zmienna używana do ustalania numeru nowego zamówienia */
        double OrderValue=0.0; /**< Domyślna wartość nowego zamówienia; zwiększana jest wraz z dodawaniem potraw do zamówienia */
        double DoubleDish1Price, DoubleDish2Price, DoubleDish3Price, DoubleDish4Price, DoubleDish5Price, DoubleDish6Price; /**< Zmienne zawierające ceny poszczególnych potraw w zamówieniu */
        double DoubleDish1Multiplier, DoubleDish2Multiplier, DoubleDish3Multiplier, DoubleDish4Multiplier, DoubleDish5Multiplier, DoubleDish6Multiplier; /**< Zmienne przechowujące informacje o liczbie porcji danej potrawy w zamówieniu */
        wxString currNum; /**< Zmienna typu wxString do odczytywania numerów zamówień z pliku (data/orders_list.txt) */
        wxString StrOrderValue; /**< Zmienna typu wxString do przechowywania sumarycznej wartości zamówienia */
        wxString StrDish1Price, StrDish2Price, StrDish3Price, StrDish4Price, StrDish5Price, StrDish6Price; /**< Zmienne typu wxString do przechowywania ceny danej potrawy*/
        wxString StrDish1Multiplier, StrDish2Multiplier, StrDish3Multiplier, StrDish4Multiplier, StrDish5Multiplier, StrDish6Multiplier; /**< Zmienne typu wxString do przechowywania liczby porcji danej potrawy w zamówieniu */

        int SetOrderNumber(); /**< Ustala numer dla nowego zamówienia */
        void FillVector(); /**< Zapełnia strukturę vector numerami zamówień z pliku (data/orders_list.txt) */
        void SortOrderNumbers(int OrderNumbers[]); /**< Sortuje tablice numerów zamówień */
        void ClearOrderInputData(); /**< Czyści pola wejściowe dla nowego zamówienia */
        void DishComboBoxesClear(); /**< Czyści pola wyboru potraw dla nowego zamówienia; wymagane do poprawnego działania funkcji DishComboBoxesAddItems() */
        void CustomerComboBoxAddItems(); /**< Aktualizuje pole wyboru klienta na podstawie danych z 'Klienci' (data/customers_list.txt) */
        void FindCustomerData(int customerIndex); /**< Wyszukuje adres oraz numer telefonu, odpowiadające wybranemu klientowi na podstawie danych z 'Klienci' (data/customers_list.txt) */
        void DishComboBoxesAddItems(); /**< Aktualizuje pola wyboru potraw dla nowego zamówienia o wszystkie potrawy z 'Menu' (data/dishes_list.txt) */
        void SetSelectedDishesPrice(); /**< Ustala wartość wybranych potraw */
        void SetOrderTotalValue(); /**< Ustala ogólną wartość zamówienia */
        void SetTotalOrdersNumber(); /**< Ustala liczbę aktywnych zamówień */
        void SaveOrdersFile(); /**< Zapisuje plik zawierający informacje o zamówieniach (data/orders_list.txt) */
        void SaveArchiveFile(); /**< Zapisuje plik zawierający archiwum zamówień (data/archives_list.txt) */
        void ClearFile(wxString path); /**< Czyści plik *.txt o podanej ścieżce */
        void SortData(long item1, long item2); /**< Funkcja sortująca dane zawarte w liście */

        //(*Identifiers(eStaurantFrame)
        static const long ID_BUTTON2;
        static const long ID_BUTTON1;
        static const long ID_BUTTON3;
        static const long ID_STATICBITMAP1;
        static const long ID_STATICTEXT20;
        static const long ID_LISTCTRL1;
        static const long ID_STATICTEXT5;
        static const long ID_TEXTCTRL3;
        static const long ID_CHECKBOX1;
        static const long ID_COMBOBOX7;
        static const long ID_STATICTEXT1;
        static const long ID_TEXTCTRL1;
        static const long ID_STATICTEXT2;
        static const long ID_TEXTCTRL2;
        static const long ID_STATICTEXT3;
        static const long ID_CHOICE1;
        static const long ID_STATICTEXT4;
        static const long ID_COMBOBOX2;
        static const long ID_STATICTEXT11;
        static const long ID_TEXTCTRL4;
        static const long ID_BUTTON7;
        static const long ID_STATICTEXT6;
        static const long ID_COMBOBOX1;
        static const long ID_STATICTEXT12;
        static const long ID_TEXTCTRL5;
        static const long ID_BUTTON8;
        static const long ID_STATICTEXT7;
        static const long ID_COMBOBOX3;
        static const long ID_STATICTEXT13;
        static const long ID_TEXTCTRL6;
        static const long ID_BUTTON9;
        static const long ID_STATICTEXT8;
        static const long ID_COMBOBOX4;
        static const long ID_STATICTEXT14;
        static const long ID_TEXTCTRL7;
        static const long ID_BUTTON10;
        static const long ID_STATICTEXT9;
        static const long ID_COMBOBOX5;
        static const long ID_STATICTEXT15;
        static const long ID_TEXTCTRL8;
        static const long ID_BUTTON11;
        static const long ID_STATICTEXT10;
        static const long ID_COMBOBOX6;
        static const long ID_STATICTEXT16;
        static const long ID_TEXTCTRL9;
        static const long ID_STATICTEXT17;
        static const long ID_TEXTCTRL10;
        static const long ID_BUTTON5;
        static const long ID_BUTTON4;
        static const long ID_PANEL1;
        static const long ID_STATICTEXT18;
        static const long ID_TEXTCTRL11;
        static const long ID_STATICTEXT19;
        static const long ID_TEXTCTRL12;
        static const long ID_BUTTON12;
        static const long ID_PANEL2;
        static const long ID_BUTTON6;
        static const long ID_MESSAGEDIALOG1;
        static const long ID_OPEN;
        static const long ID_CUSTOMERS;
        static const long ID_MENU;
        static const long ID_ARCHIVE;
        static const long ID_CLOSE;
        static const long ID_ARCHIVEORDER;
        static const long ID_INFO;
        //*)
        //(*Declarations(eStaurantFrame)
        wxButton* AddDish2_Button;
        wxButton* AddDish3_Button;
        wxButton* AddDish4_Button;
        wxButton* AddDish5_Button;
        wxButton* AddDish6_Button;
        wxButton* Archive_Button;
        wxButton* CustomerAdd_Button;
        wxButton* Customers_Button;
        wxButton* Menu_Button;
        wxButton* OrderAdd_Button;
        wxButton* OrderArchive_Button;
        wxButton* OrderClear_Button;
        wxCheckBox* Customer_CheckBox;
        wxChoice* Payment_ChoiceBox;
        wxComboBox* Customer_ComboBox;
        wxComboBox* Dish1_ComboBox;
        wxComboBox* Dish2_ComboBox;
        wxComboBox* Dish3_ComboBox;
        wxComboBox* Dish4_ComboBox;
        wxComboBox* Dish5_ComboBox;
        wxComboBox* Dish6_ComboBox;
        wxListCtrl* Orders_ListCtrl;
        wxMenu* Menu1;
        wxMenu* Menu2;
        wxMenu* Menu3;
        wxMenuBar* MenuBar1;
        wxMenuItem* Menu_About;
        wxMenuItem* Menu_ArchiveList;
        wxMenuItem* Menu_ArchiveOrder;
        wxMenuItem* Menu_Close;
        wxMenuItem* Menu_CustomersList;
        wxMenuItem* Menu_MenuList;
        wxMenuItem* Menu_ReadOrdersList;
        wxMessageDialog* ExitConfirmation;
        wxPanel* NewCustomerPanel;
        wxPanel* NewOrderPanel;
        wxStaticBitmap* SmallLogo_Bmp;
        wxStaticText* ActiveOrders_StaticText;
        wxStaticText* Address_StaticText;
        wxStaticText* Dish1_StaticText;
        wxStaticText* Dish2_StaticText;
        wxStaticText* Dish3_StaticText;
        wxStaticText* Dish4_StaticText;
        wxStaticText* Dish5_StaticText;
        wxStaticText* Dish6_StaticText;
        wxStaticText* FirstName_StaticText;
        wxStaticText* LastName_StaticText;
        wxStaticText* OrderPrice_StaticText;
        wxStaticText* Payment_StaticText;
        wxStaticText* StaticText10;
        wxStaticText* StaticText11;
        wxStaticText* StaticText12;
        wxStaticText* StaticText13;
        wxStaticText* StaticText14;
        wxStaticText* StaticText15;
        wxStaticText* Telephone_StaticText;
        wxStaticText* eStaurant2021_StaticText;
        wxTextCtrl* ActiveOrders_TextCtrl;
        wxTextCtrl* Address_TextCtrl;
        wxTextCtrl* Dish1Multiplier_TextCtrl;
        wxTextCtrl* Dish2Multiplier_TextCtrl;
        wxTextCtrl* Dish3Multiplier_TextCtrl;
        wxTextCtrl* Dish4Multiplier_TextCtrl;
        wxTextCtrl* Dish5Multiplier_TextCtrl;
        wxTextCtrl* Dish6Multiplier_TextCtrl;
        wxTextCtrl* FirstName_TextCtrl;
        wxTextCtrl* LastName_TextCtrl;
        wxTextCtrl* Telephone_TextCtrl;
        wxTextCtrl* TotalPrice_TextCtrl;
        //*)
        DECLARE_EVENT_TABLE()
};

#endif // ESTAURANTMAIN_H
