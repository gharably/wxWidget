///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "frm1.h"
#include "images.h"
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

///////////////////////////////////////////////////////////////////////////

class MyApp: public wxApp
{
public:
    virtual bool OnInit();
};

BEGIN_EVENT_TABLE(MyDialog1, wxDialog)
EVT_CLOSE(MyDialog1::OnClose)
END_EVENT_TABLE()

wxIMPLEMENT_APP(MyApp);
bool MyApp::OnInit()
{
    MyDialog1 *dlg = new MyDialog1(NULL, wxID_ANY, "Hello World", wxPoint(50, 50), wxSize(650, 450), wxDEFAULT_DIALOG_STYLE );
    dlg->Show( true );
    return true;
}


MyDialog1::MyDialog1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	// wxInitAllImageHandlers();
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	m_panel1 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );
	
	
	wxPNGHandler *handler = new wxPNGHandler;
	wxImage::AddHandler(handler);
	wxBitmap bmp_side_img = wxBITMAP_PNG_FROM_DATA(side);
	m_bitmap1 = new wxStaticBitmap( m_panel1, wxID_ANY, bmp_side_img, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_bitmap1, 0, wxALL, 5 );
	
	m_panel3 = new wxPanel( m_panel1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );
	
	m_filePicker1 = new wxFilePickerCtrl( m_panel3, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.*"), wxDefaultPosition, wxSize( 600,-1 ), wxFLP_DEFAULT_STYLE );
	m_filePicker1->SetMinSize( wxSize( 600,-1 ) );
	m_filePicker1->SetMaxSize( wxSize( 1000,-1 ) );
	
	bSizer4->Add( m_filePicker1, 0, wxALL, 5 );
	
	m_staticText1 = new wxStaticText( m_panel3, wxID_ANY, wxT(".."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer4->Add( m_staticText1, 0, wxALL, 5 );
	
	m_panel4 = new wxPanel( m_panel3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizer4->Add( m_panel4, 1, wxEXPAND | wxALL, 5 );
	
	m_panel5 = new wxPanel( m_panel3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );
	
	m_panel7 = new wxPanel( m_panel5, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizer5->Add( m_panel7, 1, wxEXPAND | wxALL, 5 );
	
	m_panel6 = new wxPanel( m_panel5, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );
	
	m_panel8 = new wxPanel( m_panel6, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizer6->Add( m_panel8, 1, wxEXPAND | wxALL, 5 );
	
	m_button1 = new wxButton( m_panel6, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_button1, 0, wxALL, 5 );
	
	
	m_panel6->SetSizer( bSizer6 );
	m_panel6->Layout();
	bSizer6->Fit( m_panel6 );
	bSizer5->Add( m_panel6, 1, wxEXPAND | wxALL, 5 );
	
	
	m_panel5->SetSizer( bSizer5 );
	m_panel5->Layout();
	bSizer5->Fit( m_panel5 );
	bSizer4->Add( m_panel5, 1, wxEXPAND | wxALL, 5 );
	
	m_panel3->SetSizer( bSizer4 );
	m_panel3->Layout();
	bSizer4->Fit( m_panel3 );
	bSizer2->Add( m_panel3, 1, wxEXPAND | wxALL, 5 );
	
	m_panel1->SetSizer( bSizer2 );
	m_panel1->Layout();
	bSizer2->Fit( m_panel1 );
	bSizer1->Add( m_panel1, 1, wxEXPAND | wxALL, 5 );
	
	this->SetSizer( bSizer1 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_filePicker1->Connect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( MyDialog1::m_filePicker1OnFileChanged ), NULL, this );
	m_button1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyDialog1::m_button1OnButtonClick ), NULL, this );
}

MyDialog1::~MyDialog1()
{
	// Disconnect Events
	m_filePicker1->Disconnect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( MyDialog1::m_filePicker1OnFileChanged ), NULL, this );
	m_button1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyDialog1::m_button1OnButtonClick ), NULL, this );
	Close(true);	
}

void MyDialog1::OnClose(wxCloseEvent &event) {
	this->Destroy();
}
