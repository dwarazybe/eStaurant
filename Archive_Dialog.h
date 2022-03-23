#ifndef ARCHIVE_DIALOG_H
#define ARCHIVE_DIALOG_H

//(*Headers(Archive_Dialog)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/listctrl.h>
#include <wx/msgdlg.h>
#include <wx/sizer.h>
//*)

class Archive_Dialog: public wxDialog
{
	public:

		Archive_Dialog(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Archive_Dialog();

		//(*Declarations(Archive_Dialog)
		wxButton* ClearArchive_Button;
		wxButton* CloseArchive_Button;
		wxListCtrl* Archive_ListCtrl;
		wxMessageDialog* ArchiveConfirmClear_Dialog;
		//*)

	protected:

		//(*Identifiers(Archive_Dialog)
		static const long ID_LISTCTRL1;
		static const long ID_BUTTON2;
		static const long ID_BUTTON1;
		static const long ID_MESSAGEDIALOG1;
		//*)

	private:

		//(*Handlers(Archive_Dialog)
		void OnInit(wxInitDialogEvent& event);
		void OnArchiveListColumnClick(wxListEvent& event);
		void OnCloseArchiveButtonClick(wxCommandEvent& event);
		void OnClearArchiveButtonClick(wxCommandEvent& event);
		void OnClearArchive_ButtonClick(wxCommandEvent& event);
		void OnCloseArchive_ButtonClick(wxCommandEvent& event);
		void OnArchive_ListCtrlColumnClick(wxListEvent& event);
		//*)
        void SortData(long item1, long item2); /**< Funkcja sortująca dane zawarte w liście */
		DECLARE_EVENT_TABLE()
};

#endif
