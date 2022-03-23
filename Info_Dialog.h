#ifndef INFO_DIALOG_H
#define INFO_DIALOG_H

//(*Headers(Info_Dialog)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
//*)

class Info_Dialog: public wxDialog
{
	public:

		Info_Dialog(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Info_Dialog();

		//(*Declarations(Info_Dialog)
		wxButton* Close_Button;
		wxStaticBitmap* Logo_Bmp;
		wxStaticText* Contact_StaticText;
		wxStaticText* Info_StaticText;
		wxStaticText* eStaurant_StaticText;
		//*)

	protected:

		//(*Identifiers(Info_Dialog)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_BUTTON1;
		//*)

	private:

		//(*Handlers(Info_Dialog)
		void OnInfoClose_ButtonClick(wxCommandEvent& event);
		void OnClose_ButtonClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
