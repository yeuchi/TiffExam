// TIFFexamDlg.h : header file
//

#if !defined(AFX_TIFFEXAMDLG_H__172D22AE_2057_41CA_8002_AB3861B9FAE2__INCLUDED_)
#define AFX_TIFFEXAMDLG_H__172D22AE_2057_41CA_8002_AB3861B9FAE2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CTIFFexamDlg dialog

class CTIFFexamDlg : public CDialog
{
// Construction
public:
	CTIFFexamDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CTIFFexamDlg)
	enum { IDD = IDD_TIFFEXAM_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTIFFexamDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CTIFFexamDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TIFFEXAMDLG_H__172D22AE_2057_41CA_8002_AB3861B9FAE2__INCLUDED_)
