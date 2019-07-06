///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __FRM1_H__
#define __FRM1_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/filepicker.h>
#include <wx/stattext.h>
#include <wx/panel.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MyDialog1
///////////////////////////////////////////////////////////////////////////////
class MyDialog1 : public wxDialog 
{
	private:
	
	protected:
		wxPanel* m_panel1;
		wxStaticBitmap* m_bitmap1;
		wxPanel* m_panel3;
		wxFilePickerCtrl* m_filePicker1;
		wxStaticText* m_staticText1;
		wxPanel* m_panel4;
		wxPanel* m_panel5;
		wxPanel* m_panel7;
		wxPanel* m_panel6;
		wxPanel* m_panel8;
		wxButton* m_button1;
		
		// Virtual event handlers, overide them in your derived class
		virtual void m_filePicker1OnFileChanged( wxFileDirPickerEvent& event ) { event.Skip(); }
		virtual void m_button1OnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		MyDialog1( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,489 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~MyDialog1();	
		wxDECLARE_EVENT_TABLE();
		void OnClose(wxCloseEvent&);
};

#endif //__FRM1_H__
