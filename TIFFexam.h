// TIFFexam.h : main header file for the TIFFEXAM application
//

#if !defined(AFX_TIFFEXAM_H__5EB9BECB_B53F_4B10_A6F4_891F5104D49E__INCLUDED_)
#define AFX_TIFFEXAM_H__5EB9BECB_B53F_4B10_A6F4_891F5104D49E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CTIFFexamApp:
// See TIFFexam.cpp for the implementation of this class
//

class CTIFFexamApp : public CWinApp
{
public:
	CTIFFexamApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTIFFexamApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CTIFFexamApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TIFFEXAM_H__5EB9BECB_B53F_4B10_A6F4_891F5104D49E__INCLUDED_)
