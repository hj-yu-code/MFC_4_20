
// ListComboDemoDlg.h: 헤더 파일
//

#pragma once


// CListComboDemoDlg 대화 상자
class CListComboDemoDlg : public CDialog
{
// 생성입니다.
public:
	CListComboDemoDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_LISTCOMBODEMO_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CListBox m_listBox;
	CString m_strInput;
	afx_msg void OnBnClickedButton1();
	CEdit m_wndInput;
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	CString m_strSelected;
	afx_msg void OnLbnSelchangeList1();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	CComboBox m_comboBox;
	afx_msg void OnCbnSelchangeCombo1();
};
