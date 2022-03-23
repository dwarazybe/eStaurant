/***************************************************************
 * Name:      eStaurantApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Bartosz Bukowski (bukowskibe@gmail.com)
 * Created:   2020-12-02
 * Copyright: Bartosz Bukowski ()
 * License:
 **************************************************************/


#include "eStaurantApp.h"
#include <wx/splash.h>

//(*AppHeaders
#include "eStaurantMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(eStaurantApp);

bool eStaurantApp::OnInit() /**< Wyświetla ekran powitalny (resources/splash.bmp) na 1,5 sekundy oraz inicjalizuje główne okno aplikacji; zwraca wxsOK jeśli wykonano poprawnie */
{


    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
        wxBitmap splash_bmp(_T("resources/splash.bmp"), wxBITMAP_TYPE_BMP);
        wxSplashScreen* splashscreen = new wxSplashScreen(splash_bmp, wxSPLASH_CENTRE_ON_SCREEN|wxSPLASH_TIMEOUT, 1500, NULL, wxID_ANY);
        splashscreen->Show();
        eStaurantFrame* Frame = new eStaurantFrame(0);
        Frame->Show();
        SetTopWindow(Frame);
    }

    return wxsOK;

}
