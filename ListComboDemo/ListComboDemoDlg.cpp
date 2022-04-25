
// ListComboDemoDlg.cpp: 구현 파일
//

#include "pch.h"
#include "framework.h"
#include "ListComboDemo.h"
#include "ListComboDemoDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 응용 프로그램 정보에 사용되는 CAboutDlg 대화 상자입니다.

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

// 구현입니다.
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()


// CListComboDemoDlg 대화 상자



CListComboDemoDlg::CListComboDemoDlg(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_LISTCOMBODEMO_DIALOG, pParent)
	, m_strInput(_T(""))
	, m_strSelected(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CListComboDemoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_listBox);
	DDX_Text(pDX, IDC_EDIT1, m_strInput);
	DDX_Control(pDX, IDC_EDIT1, m_wndInput);
	DDX_Text(pDX, IDC_STATIC_SELECT, m_strSelected);
	DDX_Control(pDX, IDC_COMBO1, m_comboBox);
}

BEGIN_MESSAGE_MAP(CListComboDemoDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CListComboDemoDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CListComboDemoDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CListComboDemoDlg::OnBnClickedButton3)
	ON_LBN_SELCHANGE(IDC_LIST1, &CListComboDemoDlg::OnLbnSelchangeList1)
	ON_BN_CLICKED(IDC_BUTTON4, &CListComboDemoDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CListComboDemoDlg::OnBnClickedButton5)
	ON_CBN_SELCHANGE(IDC_COMBO1, &CListComboDemoDlg::OnCbnSelchangeCombo1)
END_MESSAGE_MAP()


// CListComboDemoDlg 메시지 처리기

BOOL CListComboDemoDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// 시스템 메뉴에 "정보..." 메뉴 항목을 추가합니다.

	// IDM_ABOUTBOX는 시스템 명령 범위에 있어야 합니다.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 이 대화 상자의 아이콘을 설정합니다.  응용 프로그램의 주 창이 대화 상자가 아닐 경우에는
	//  프레임워크가 이 작업을 자동으로 수행합니다.
	SetIcon(m_hIcon, TRUE);			// 큰 아이콘을 설정합니다.
	SetIcon(m_hIcon, FALSE);		// 작은 아이콘을 설정합니다.

	// TODO: 여기에 추가 초기화 작업을 추가합니다.
	m_listBox.AddString(_T("유혜정"));
	m_listBox.AddString(_T("이상재"));
	m_listBox.AddString(_T("홍지수"));
	m_listBox.AddString(_T("윤우영"));
	m_listBox.AddString(_T("한줄기"));
	m_listBox.AddString(_T("김태희"));
	m_listBox.AddString(_T("이선민"));
	m_listBox.AddString(_T("양희수"));
	m_listBox.AddString(_T("김현민"));
	m_listBox.AddString(_T("강하린"));
	m_listBox.AddString(_T("유현수"));
	m_listBox.AddString(_T("김영빈"));
	m_listBox.AddString(_T("김건학"));
	m_listBox.AddString(_T("한지웅"));
	m_listBox.AddString(_T("이성주"));
	m_listBox.AddString(_T("김여민"));
	m_listBox.AddString(_T("이상훈"));
	m_listBox.AddString(_T("박동혁"));
	m_listBox.AddString(_T("정민재"));
	m_listBox.AddString(_T("김진모"));
	m_listBox.AddString(_T("이찬주"));

	m_comboBox.AddString(_T("유혜정"));
	m_comboBox.AddString(_T("이상재"));
	m_comboBox.AddString(_T("홍지수"));
	m_comboBox.AddString(_T("윤우영"));
	m_comboBox.AddString(_T("한줄기"));
	m_comboBox.AddString(_T("김태희"));
	m_comboBox.AddString(_T("이선민"));
	m_comboBox.AddString(_T("양희수"));
	m_comboBox.AddString(_T("김현민"));
	m_comboBox.AddString(_T("강하린"));
	m_comboBox.AddString(_T("유현수"));
	m_comboBox.AddString(_T("김영빈"));
	m_comboBox.AddString(_T("김건학"));
	m_comboBox.AddString(_T("한지웅"));
	m_comboBox.AddString(_T("이성주"));
	m_comboBox.AddString(_T("김여민"));
	m_comboBox.AddString(_T("이상훈"));
	m_comboBox.AddString(_T("박동혁"));
	m_comboBox.AddString(_T("정민재"));
	m_comboBox.AddString(_T("김진모"));
	m_comboBox.AddString(_T("이찬주"));

	return TRUE;  // 포커스를 컨트롤에 설정하지 않으면 TRUE를 반환합니다.
}

void CListComboDemoDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// 대화 상자에 최소화 단추를 추가할 경우 아이콘을 그리려면
//  아래 코드가 필요합니다.  문서/뷰 모델을 사용하는 MFC 애플리케이션의 경우에는
//  프레임워크에서 이 작업을 자동으로 수행합니다.

void CListComboDemoDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 그리기를 위한 디바이스 컨텍스트입니다.

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 클라이언트 사각형에서 아이콘을 가운데에 맞춥니다.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 아이콘을 그립니다.
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// 사용자가 최소화된 창을 끄는 동안에 커서가 표시되도록 시스템에서
//  이 함수를 호출합니다.
HCURSOR CListComboDemoDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CListComboDemoDlg::OnBnClickedButton1()
{
	/*
	1. UI에 입력된 값을 변수로 읽는다 
	2. 입력된 문자열을  CListBox.InsertString() 함수를 사용하여 문자열을 추가한다.
	3. 문자열 입력상자를 초기화 한다
	4. 문자열 입력상자 포커스를 준다
	*/

	//1. UI에 입력된 값을 변수로 읽는다
	if (UpdateData() == FALSE) {
		return;
	}

	//2. 입력된 문자열을  CListBox.InsertString() 함수를 사용하여 문자열을 추가한다.
	m_listBox.InsertString(0, m_strInput);
	m_comboBox.InsertString(0, m_strInput);

	//3. 문자열 입력상자를 초기화 한다
	m_strInput = _T("");
	UpdateData(FALSE);

	//4. 문자열 입력상자 포커스를 준다
	m_wndInput.SetFocus();



}


void CListComboDemoDlg::OnBnClickedButton2()
{
	/*
	1. UI에 입력된 값을 변수로 읽는다
	2. 입력된 문자열을  CListBox.AddString() 함수를 사용하여 문자열을 추가한다.
	3. 문자열 입력상자를 초기화 한다
	4. 문자열 입력상자 포커스를 준다
	*/

	//1. UI에 입력된 값을 변수로 읽는다
	if (UpdateData() == FALSE) {
		return;
	}

	//2. 입력된 문자열을  CListBox.AddString() 함수를 사용하여 문자열을 추가한다.
	m_listBox.AddString(m_strInput);

	//3. 문자열 입력상자를 초기화 한다
	m_strInput = _T("");
	UpdateData(FALSE);

	//4. 문자열 입력상자 포커스를 준다
	m_wndInput.SetFocus();
}


void CListComboDemoDlg::OnBnClickedButton3()
{
/*
1. UI에 입력된 값을 변수로 읽는다
2. 검색을 위한 문자열을  CListBox.FindString() 함수에 전달하여 문자열의 위치를 얻는다
3. CListBox.GetText()을 이용해서 위치를 주고 문자열을 얻는다
4. 얻은 문자열을 출력한다 
*/
	//1. UI에 입력된 값을 변수로 읽는다
	if (UpdateData() == FALSE) {
		return;
	}

	//2. 검색을 위한 문자열을  CListBox.FindString() 함수에 전달하여 문자열의 위치를 얻는다
	int nFindIndex = m_listBox.FindString(-1, m_strInput);

	//3. CListBox.GetText()을 이용해서 위치를 주고 문자열을 얻는다
	if (nFindIndex >= 0) {
		CString strFindString;

		m_listBox.GetText(nFindIndex, strFindString);
		//선택상태로 설정함 
		m_listBox.SetCurSel(nFindIndex);

		AfxMessageBox(strFindString);
	}
	else {
		AfxMessageBox(_T("찾는 문자열이 없습니다"));
	}
	//4. 얻은 문자열을 출력한다

}

void CListComboDemoDlg::OnLbnSelchangeList1()
{
	// 리스트 상자에서 선택된 셀이 달라질 때마다 호출

	// 선택된 위치를 얻음
	int nCurSel = m_listBox.GetCurSel();

	if (nCurSel < 0) return;
	// 리스트 상자에 셀이 모두 올 경우에도 0보다 작음
	// SetCurSel() 함수로 인해 강제적으로 -1이 들어갈 수도 있음

	// 위치에 대한 문자열을 얻음
	m_listBox.GetText(nCurSel, m_strInput);
	m_strSelected = m_strInput;
	UpdateData(FALSE);


	// 선택된 셀을 콤보 상자에서도 선택
	int nFindIndex = m_comboBox.FindString(-1, m_strInput);
	if (nFindIndex >= 0) {
		m_comboBox.SetCurSel(nFindIndex);
	};
}



void CListComboDemoDlg::OnBnClickedButton4()
{
	// 여러개 선택된 항목을 삭제 : 속성- 선택 - Extended
	//// 1. 선택된 항목수를 얻음
	//int nSelCount = m_listBox.GetSelCount();
	//if (nSelCount < 0) return;

	//// 2. 선택된 항목의 위치를 저장할 정수 배열을 할당함
	//int* pSelArray = new int[nSelCount];
	////vecotr<int> array[nSelCount];

	//// 3. 선택된 항목의 위치를 얻음
	//m_listBox.GetSelItems(nSelCount, pSelArray);
	//// [i] : i번째로 선택된 문자열의 위치


	//// 4. 삭제는 거꾸로 진행함
	//for (int i = nSelCount - 1; i >= 0; i--) {
	//	m_listBox.DeleteString(pSelArray[i]);
	//}
	//delete[] pSelArray;

	// 하나만 선택된 항목을 삭제 : 속성- 선택 - Single
	int nCurSel = m_listBox.GetCurSel();

	if (nCurSel < 0) return;

	// 위치에 대한 문자열을 삭제
	m_listBox.DeleteString(nCurSel);

	// 콤보 상자 삭제 기능
	nCurSel = m_comboBox.GetCurSel();
	if (nCurSel < 0) return;
	m_comboBox.DeleteString(nCurSel);
}


void CListComboDemoDlg::OnBnClickedButton5()
{	
	//1. UI에 입력된 값을 변수로 읽는다
	if (UpdateData() == FALSE) {
		return;
	}

	//2. 검색을 위한 문자열을  CListBox.FindString() 함수에 전달하여 문자열의 위치를 얻는다
	int nFindIndex = m_listBox.FindString(-1, m_strInput);

	//3. CListBox.GetText()을 이용해서 위치를 주고 문자열을 삭제
	if (nFindIndex >= 0) {
		m_listBox.DeleteString(nFindIndex);

		AfxMessageBox(m_strInput+_T(" 문자열을 삭제했습니다"));
	}
	else {
		AfxMessageBox(_T("찾는 문자열이 없습니다"));
	}

	m_strInput = _T("");
	UpdateData(FALSE);
}


void CListComboDemoDlg::OnCbnSelchangeCombo1()
{
	// 콤보상자에서 셀 선택할 때마다 호출

	// 선택된 위치를 얻음
	int nCurSel = m_comboBox.GetCurSel();

	if (nCurSel < 0) return;

	// 위치에 대한 문자열을 얻음
	m_comboBox.GetLBText(nCurSel, m_strInput);
	m_strSelected = m_strInput;

	UpdateData(FALSE);

	// 선택된 셀을 리스트 상자에서도 선택
	// 속성 - 선택 - Single로 되어 있어야만 가능
	int nFindIndex = m_listBox.FindString(-1, m_strInput);
	if (nFindIndex >= 0) {
		m_listBox.SetCurSel(nFindIndex);
	}

}
