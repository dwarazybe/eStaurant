/***************************************************************
 * Name:      eStaurantApp.h
 * Purpose:   Defines Application Class
 * Author:    Bartosz Bukowski (bukowskibe@gmail.com)
 * Created:   2020-12-02
 * Copyright: Bartosz Bukowski ()
 * License:
 **************************************************************/

#ifndef ESTAURANTAPP_H
#define ESTAURANTAPP_H

#include <wx/app.h>

class eStaurantApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // ESTAURANTAPP_H
