/* Native Windows Piter FM player - no PowerShell, no browser. */
typedef unsigned char BYTE;
typedef unsigned short WORD;
typedef unsigned short wchar_t;
typedef unsigned int UINT;
typedef unsigned long DWORD;
typedef long LONG;
typedef unsigned long ULONG;
typedef long HRESULT;
typedef unsigned long long ULONG_PTR;
typedef long long LONG_PTR;
typedef ULONG_PTR UINT_PTR;
typedef ULONG_PTR WPARAM;
typedef LONG_PTR LPARAM;
typedef LONG_PTR LRESULT;
typedef int BOOL;
typedef void* HANDLE;
typedef HANDLE HWND;
typedef HANDLE HINSTANCE;
typedef HANDLE HICON;
typedef HANDLE HCURSOR;
typedef HANDLE HBRUSH;
typedef HANDLE HFONT;
typedef HANDLE HGDIOBJ;
typedef HANDLE HDC;
typedef HANDLE HMENU;
typedef HANDLE HINTERNET;
typedef void* LPVOID;
typedef const void* LPCVOID;
typedef const wchar_t* LPCWSTR;
typedef wchar_t* LPWSTR;
typedef const char* LPCSTR;
typedef char* LPSTR;
typedef unsigned short VARTYPE;
typedef LONG DISPID;
typedef DWORD LCID;
typedef LONG OLE_COLOR;
typedef short VARIANT_BOOL;

#define WINAPI __stdcall
#define CALLBACK __stdcall
#define TRUE 1
#define FALSE 0
#define NULL ((void*)0)
#define S_OK 0
#define SUCCEEDED(hr) ((HRESULT)(hr) >= 0)
#define FAILED(hr) ((HRESULT)(hr) < 0)
#define CLSCTX_INPROC_SERVER 0x1
#define CLSCTX_LOCAL_SERVER 0x4
#define COINIT_APARTMENTTHREADED 0x2
#define VT_EMPTY 0
#define VT_I4 3
#define VT_BSTR 8
#define VT_DISPATCH 9
#define DISPATCH_METHOD 0x1
#define DISPATCH_PROPERTYGET 0x2
#define DISPATCH_PROPERTYPUT 0x4
#define DISPID_PROPERTYPUT (-3)
#define CP_UTF8 65001
#define CP_ACP 0
#define WM_DESTROY 0x0002
#define WM_PAINT 0x000F
#define WM_DRAWITEM 0x002B
#define WM_COMMAND 0x0111
#define WM_MOUSEMOVE 0x0200
#define WM_LBUTTONDOWN 0x0201
#define WM_LBUTTONUP 0x0202
#define WM_TIMER 0x0113
#define WM_HSCROLL 0x0114
#define WM_APP 0x8000
#define WM_APP_TRACK (WM_APP+1)
#define WM_USER 0x0400
#define TBM_GETPOS (WM_USER)
#define TBM_SETPOS (WM_USER+5)
#define TBM_SETRANGE (WM_USER+6)
#define BN_CLICKED 0
#define MK_LBUTTON 0x0001
#define WS_OVERLAPPED 0x00000000L
#define WS_CAPTION 0x00C00000L
#define WS_SYSMENU 0x00080000L
#define WS_MINIMIZEBOX 0x00020000L
#define WS_VISIBLE 0x10000000L
#define WS_CHILD 0x40000000L
#define WS_TABSTOP 0x00010000L
#define BS_PUSHBUTTON 0x00000000L
#define BS_OWNERDRAW 0x0000000BL
#define TBS_HORZ 0x0000
#define SW_SHOW 5
#define CW_USEDEFAULT ((int)0x80000000)
#define COLOR_WINDOW 5
#define IDC_ARROW ((LPCWSTR)32512)
#define IDI_APPLICATION ((LPCWSTR)32512)
#define DT_LEFT 0x00000000
#define DT_CENTER 0x00000001
#define DT_RIGHT 0x00000002
#define DT_VCENTER 0x00000004
#define DT_WORDBREAK 0x00000010
#define DT_SINGLELINE 0x00000020
#define TRANSPARENT 1
#define INTERNET_OPEN_TYPE_PRECONFIG 0
#define INTERNET_FLAG_RELOAD 0x80000000
#define INTERNET_FLAG_NO_CACHE_WRITE 0x04000000
#define INTERNET_FLAG_NO_UI 0x00000200
#define INTERNET_OPTION_CONNECT_TIMEOUT 2
#define INTERNET_OPTION_SEND_TIMEOUT 5
#define INTERNET_OPTION_RECEIVE_TIMEOUT 6
#define HTTP_QUERY_RAW_HEADERS_CRLF 22
#define FW_BOLD 700
#define FW_NORMAL 400
#define DEFAULT_CHARSET 1
#define OUT_DEFAULT_PRECIS 0
#define CLIP_DEFAULT_PRECIS 0
#define DEFAULT_QUALITY 0
#define DEFAULT_PITCH 0
#define FF_DONTCARE 0
#define ODS_SELECTED 0x0001
#define ODS_DISABLED 0x0004
#define ID_PLAY 1001
#define ID_REFRESH 1002
#define TIMER_MAIN 1
#define TRACKBAR_CLASSW L"msctls_trackbar32"
#define ICC_BAR_CLASSES 0x00000004
#define INTERNET_MAX_URL_LENGTH 2084

#define RGB(r,g,b) ((DWORD)(((BYTE)(r)) | ((WORD)((BYTE)(g))) << 8 | (((DWORD)(BYTE)(b)) << 16)))
#define LOWORD(l) ((WORD)((ULONG_PTR)(l) & 0xffff))
#define HIWORD(l) ((WORD)((ULONG_PTR)(l) >> 16))
#define MAKELONG(a,b) ((LONG)(((WORD)(a)) | ((DWORD)((WORD)(b))) << 16))

/* Win32 structures */
typedef struct tagPOINT { LONG x; LONG y; } POINT;
typedef struct tagRECT { LONG left; LONG top; LONG right; LONG bottom; } RECT;
typedef struct tagPAINTSTRUCT { HDC hdc; BOOL fErase; RECT rcPaint; BOOL fRestore; BOOL fIncUpdate; BYTE rgbReserved[32]; } PAINTSTRUCT;
typedef struct tagMSG { HWND hwnd; UINT message; WPARAM wParam; LPARAM lParam; DWORD time; POINT pt; DWORD lPrivate; } MSG;
typedef LRESULT (CALLBACK *WNDPROC)(HWND,UINT,WPARAM,LPARAM);
typedef struct tagWNDCLASSEXW { UINT cbSize; UINT style; WNDPROC lpfnWndProc; int cbClsExtra; int cbWndExtra; HINSTANCE hInstance; HICON hIcon; HCURSOR hCursor; HBRUSH hbrBackground; LPCWSTR lpszMenuName; LPCWSTR lpszClassName; HICON hIconSm; } WNDCLASSEXW;
typedef struct tagINITCOMMONCONTROLSEX { DWORD dwSize; DWORD dwICC; } INITCOMMONCONTROLSEX;
typedef struct tagDRAWITEMSTRUCT { UINT CtlType; UINT CtlID; UINT itemID; UINT itemAction; UINT itemState; HWND hwndItem; HDC hDC; RECT rcItem; ULONG_PTR itemData; } DRAWITEMSTRUCT;
typedef struct _SYSTEMTIME { WORD wYear; WORD wMonth; WORD wDayOfWeek; WORD wDay; WORD wHour; WORD wMinute; WORD wSecond; WORD wMilliseconds; } SYSTEMTIME;
typedef DWORD (WINAPI *LPTHREAD_START_ROUTINE)(LPVOID);

/* COM */
typedef struct _GUID { DWORD Data1; WORD Data2; WORD Data3; BYTE Data4[8]; } GUID;
typedef const GUID* REFGUID;
typedef const GUID* REFIID;
typedef GUID CLSID;
typedef wchar_t* BSTR;
struct IDispatch;
typedef struct IDispatch IDispatch;
typedef struct tagVARIANT {
    VARTYPE vt; WORD wReserved1; WORD wReserved2; WORD wReserved3;
    union { LONG lVal; BSTR bstrVal; IDispatch* pdispVal; void* byref; } data;
} VARIANT;
typedef struct tagDISPPARAMS { VARIANT* rgvarg; DISPID* rgdispidNamedArgs; UINT cArgs; UINT cNamedArgs; } DISPPARAMS;
typedef struct tagEXCEPINFO { WORD wCode; WORD wReserved; BSTR bstrSource; BSTR bstrDescription; BSTR bstrHelpFile; DWORD dwHelpContext; void* pvReserved; void* pfnDeferredFillIn; HRESULT scode; } EXCEPINFO;
typedef struct IDispatchVtbl {
    HRESULT (WINAPI *QueryInterface)(IDispatch*,REFIID,void**);
    ULONG (WINAPI *AddRef)(IDispatch*);
    ULONG (WINAPI *Release)(IDispatch*);
    HRESULT (WINAPI *GetTypeInfoCount)(IDispatch*,UINT*);
    HRESULT (WINAPI *GetTypeInfo)(IDispatch*,UINT,LCID,void**);
    HRESULT (WINAPI *GetIDsOfNames)(IDispatch*,REFIID,wchar_t**,UINT,LCID,DISPID*);
    HRESULT (WINAPI *Invoke)(IDispatch*,DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
} IDispatchVtbl;
struct IDispatch { IDispatchVtbl* lpVtbl; };

struct IPicture;
typedef struct IPicture IPicture;
typedef struct IPictureVtbl {
    HRESULT (WINAPI *QueryInterface)(IPicture*,REFIID,void**);
    ULONG (WINAPI *AddRef)(IPicture*);
    ULONG (WINAPI *Release)(IPicture*);
    HRESULT (WINAPI *get_Handle)(IPicture*,LONG*);
    HRESULT (WINAPI *get_hPal)(IPicture*,LONG*);
    HRESULT (WINAPI *get_Type)(IPicture*,short*);
    HRESULT (WINAPI *get_Width)(IPicture*,LONG*);
    HRESULT (WINAPI *get_Height)(IPicture*,LONG*);
    HRESULT (WINAPI *Render)(IPicture*,HDC,LONG,LONG,LONG,LONG,LONG,LONG,LONG,LONG,const RECT*);
} IPictureVtbl;
struct IPicture { IPictureVtbl* lpVtbl; };

/* Imported API */
__declspec(dllimport) HINSTANCE WINAPI GetModuleHandleW(LPCWSTR);
__declspec(dllimport) void WINAPI ExitProcess(UINT);
__declspec(dllimport) HANDLE WINAPI CreateThread(void*,ULONG_PTR,LPTHREAD_START_ROUTINE,LPVOID,DWORD,DWORD*);
__declspec(dllimport) BOOL WINAPI CloseHandle(HANDLE);
__declspec(dllimport) void WINAPI Sleep(DWORD);
__declspec(dllimport) void WINAPI GetSystemTime(SYSTEMTIME*);
__declspec(dllimport) int WINAPI MultiByteToWideChar(UINT,DWORD,LPCSTR,int,LPWSTR,int);
__declspec(dllimport) int WINAPI WideCharToMultiByte(UINT,DWORD,LPCWSTR,int,LPSTR,int,LPCSTR,BOOL*);

__declspec(dllimport) unsigned short WINAPI RegisterClassExW(const WNDCLASSEXW*);
__declspec(dllimport) HWND WINAPI CreateWindowExW(DWORD,LPCWSTR,LPCWSTR,DWORD,int,int,int,int,HWND,HMENU,HINSTANCE,LPVOID);
__declspec(dllimport) BOOL WINAPI ShowWindow(HWND,int);
__declspec(dllimport) BOOL WINAPI UpdateWindow(HWND);
__declspec(dllimport) BOOL WINAPI GetMessageW(MSG*,HWND,UINT,UINT);
__declspec(dllimport) BOOL WINAPI TranslateMessage(const MSG*);
__declspec(dllimport) LRESULT WINAPI DispatchMessageW(const MSG*);
__declspec(dllimport) LRESULT WINAPI DefWindowProcW(HWND,UINT,WPARAM,LPARAM);
__declspec(dllimport) void WINAPI PostQuitMessage(int);
__declspec(dllimport) HDC WINAPI BeginPaint(HWND,PAINTSTRUCT*);
__declspec(dllimport) BOOL WINAPI EndPaint(HWND,const PAINTSTRUCT*);
__declspec(dllimport) HBRUSH WINAPI CreateSolidBrush(DWORD);
__declspec(dllimport) int WINAPI FillRect(HDC,const RECT*,HBRUSH);
__declspec(dllimport) BOOL WINAPI DeleteObject(HGDIOBJ);
__declspec(dllimport) int WINAPI DrawTextW(HDC,LPCWSTR,int,RECT*,UINT);
__declspec(dllimport) int WINAPI SetBkMode(HDC,int);
__declspec(dllimport) DWORD WINAPI SetTextColor(HDC,DWORD);
__declspec(dllimport) HCURSOR WINAPI LoadCursorW(HINSTANCE,LPCWSTR);
__declspec(dllimport) HICON WINAPI LoadIconW(HINSTANCE,LPCWSTR);
__declspec(dllimport) LRESULT WINAPI SendMessageW(HWND,UINT,WPARAM,LPARAM);
__declspec(dllimport) BOOL WINAPI PostMessageW(HWND,UINT,WPARAM,LPARAM);
__declspec(dllimport) UINT_PTR WINAPI SetTimer(HWND,ULONG_PTR,UINT,void*);
__declspec(dllimport) BOOL WINAPI KillTimer(HWND,ULONG_PTR);
__declspec(dllimport) BOOL WINAPI InvalidateRect(HWND,const RECT*,BOOL);
__declspec(dllimport) int WINAPI MessageBoxW(HWND,LPCWSTR,LPCWSTR,UINT);

__declspec(dllimport) HFONT WINAPI CreateFontW(int,int,int,int,int,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,DWORD,LPCWSTR);
__declspec(dllimport) HGDIOBJ WINAPI SelectObject(HDC,HGDIOBJ);
__declspec(dllimport) BOOL WINAPI Rectangle(HDC,int,int,int,int);
__declspec(dllimport) BOOL WINAPI Ellipse(HDC,int,int,int,int);
__declspec(dllimport) HGDIOBJ WINAPI GetStockObject(int);

__declspec(dllimport) BOOL WINAPI InitCommonControlsEx(const INITCOMMONCONTROLSEX*);

__declspec(dllimport) HRESULT WINAPI CoInitializeEx(LPVOID,DWORD);
__declspec(dllimport) void WINAPI CoUninitialize(void);
__declspec(dllimport) HRESULT WINAPI CoCreateInstance(REFGUID,void*,DWORD,REFIID,void**);
__declspec(dllimport) BSTR WINAPI SysAllocString(LPCWSTR);
__declspec(dllimport) void WINAPI SysFreeString(BSTR);
__declspec(dllimport) HRESULT WINAPI OleLoadPicturePath(LPCWSTR,void*,DWORD,OLE_COLOR,REFIID,void**);

__declspec(dllimport) HINTERNET WINAPI InternetOpenW(LPCWSTR,DWORD,LPCWSTR,LPCWSTR,DWORD);
__declspec(dllimport) HINTERNET WINAPI InternetOpenUrlW(HINTERNET,LPCWSTR,LPCWSTR,DWORD,DWORD,ULONG_PTR);
__declspec(dllimport) BOOL WINAPI InternetReadFile(HINTERNET,LPVOID,DWORD,DWORD*);
__declspec(dllimport) BOOL WINAPI InternetCloseHandle(HINTERNET);
__declspec(dllimport) BOOL WINAPI InternetSetOptionW(HINTERNET,DWORD,LPVOID,DWORD);
__declspec(dllimport) BOOL WINAPI HttpQueryInfoW(HINTERNET,DWORD,LPVOID,DWORD*,DWORD*);

/* Minimal runtime */
void *memset(void *s,int c,unsigned long long n){BYTE*p=(BYTE*)s;while(n--)*p++=(BYTE)c;return s;}
void *memcpy(void*d,const void*s,unsigned long long n){BYTE*dd=(BYTE*)d;const BYTE*ss=(const BYTE*)s;while(n--)*dd++=*ss++;return d;}
void *memmove(void*d,const void*s,unsigned long long n){BYTE*dd=(BYTE*)d;const BYTE*ss=(const BYTE*)s;if(dd==ss||!n)return d;if(dd<ss){while(n--)*dd++=*ss++;}else{dd+=n;ss+=n;while(n--)*--dd=*--ss;}return d;}
static int clen(const char*s){int n=0;while(s&&s[n])n++;return n;}
static int wlen(const wchar_t*s){int n=0;while(s&&s[n])n++;return n;}
static void wcpy(wchar_t*d,const wchar_t*s,int cap){int i=0;if(cap<=0)return;while(s&&s[i]&&i<cap-1){d[i]=s[i];i++;}d[i]=0;}
static int chrlower(int c){if(c>='A'&&c<='Z')return c+32;return c;}
static wchar_t wlower(wchar_t c){if(c>=L'A'&&c<=L'Z')return c+32;if(c>=0x0410&&c<=0x042F)return c+32;return c;}
static wchar_t* wistr(wchar_t*h,const wchar_t*n){int nl=wlen(n);if(!nl)return h;for(int i=0;h[i];i++){int j=0;while(j<nl&&h[i+j]&&wlower(h[i+j])==wlower(n[j]))j++;if(j==nl)return h+i;}return 0;}
static char* cstr(char*h,const char*n){int nl=clen(n);if(!nl)return h;for(int i=0;h[i];i++){int j=0;while(j<nl&&h[i+j]&&h[i+j]==n[j])j++;if(j==nl)return h+i;}return 0;}
static void ccopy(char*d,const char*s,int cap){int i=0;if(cap<=0)return;while(s&&s[i]&&i<cap-1){d[i]=s[i];i++;}d[i]=0;}

/* GUIDs */
static const GUID CLSID_WMP={0x6BF52A52,0x394A,0x11D3,{0xB1,0x53,0x00,0xC0,0x4F,0x79,0xFA,0xA6}};
static const GUID IID_IDispatch_={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}};
static const GUID IID_NULL_={0,0,0,{0,0,0,0,0,0,0,0}};
static const GUID IID_IPicture_={0x7BF80980,0xBF32,0x101A,{0x8B,0xBB,0x00,0xAA,0x00,0x30,0x0C,0xAB}};

/* Globals */
static HWND g_hwnd=0,g_play=0,g_slider=0,g_refresh=0;
static HFONT fTitle=0,fFreq=0,fSmall=0,fArtist=0,fTrack=0,fButton=0;
static IDispatch *g_wmp=0,*g_controls=0,*g_settings=0;
static IPicture *g_cover=0;
static int g_playing=0;
static int g_volume=75;
static int g_dragVol=0;
static volatile int g_metaBusy=0;
static wchar_t g_artist[256]=L"\u041f\u0438\u0442\u0435\u0440 FM";
static wchar_t g_track[384]=L"\u041f\u043e\u043b\u0443\u0447\u0430\u044e \u0434\u0430\u043d\u043d\u044b\u0435 \u044d\u0444\u0438\u0440\u0430...";
static wchar_t g_status[128]=L"\u041d\u0430\u0436\u043c\u0438\u0442\u0435 PLAY";
static wchar_t g_checked[128]=L"";
static wchar_t g_source[128]=L"Метаданные: автовыбор свежего источника";
static wchar_t g_lastRaw[512]=L"";

typedef struct HISTITEM { wchar_t time[16]; wchar_t artist[192]; wchar_t title[256]; } HISTITEM;
typedef struct TRACKDATA { wchar_t raw[512]; wchar_t artist[256]; wchar_t title[384]; wchar_t coverUrl[INTERNET_MAX_URL_LENGTH]; int historyCount; HISTITEM history[10]; wchar_t metaStatus[160]; } TRACKDATA;
typedef struct CANDIDATE { TRACKDATA d; int age; int ok; wchar_t source[64]; } CANDIDATE;
static TRACKDATA g_pending;
static TRACKDATA g_threadTrack;
static TRACKDATA g_parseTmp;
static CANDIDATE g_candidates[3];
static HISTITEM g_history[10];
static int g_historyCount=0;
/* Large work buffers are global, not stack-local. This avoids Windows stack guard crashes
   in the freestanding build when a background metadata request starts. */
static BYTE g_skipbuf[4096];
static wchar_t g_hdr[8192];
static char g_meta[4097];
static char g_enc[3072];
static char g_aurl[4096];
static wchar_t g_wurl[4096];
static char g_json[131072];
static char g_arttmp[2048];
static char g_tail[1024];
/* Official Piter FM page buffers. Metadata and the recently-played list are read
   from the station's own stream page, not from a third-party playlist. */
static char g_page[2097152];
static wchar_t g_pagew[2097152];
static wchar_t g_tokens[2048][256];
static int g_tokenCount=0;
static int g_pageNonce=0;
static wchar_t g_freshurl[INTERNET_MAX_URL_LENGTH];
static wchar_t g_dig[16];

static DISPID dispid(IDispatch*o,const wchar_t*name){DISPID id=-1;wchar_t*n=(wchar_t*)name;if(!o)return -1;if(FAILED(o->lpVtbl->GetIDsOfNames(o,&IID_NULL_,&n,1,0,&id)))return -1;return id;}
static HRESULT invoke0(IDispatch*o,const wchar_t*name,WORD flags,VARIANT*out){DISPID id=dispid(o,name);DISPPARAMS dp={0};if(id==-1)return -1;if(out)memset(out,0,sizeof(VARIANT));return o->lpVtbl->Invoke(o,id,&IID_NULL_,0,flags,&dp,out,0,0);}
static IDispatch* getdisp(IDispatch*o,const wchar_t*name){VARIANT v;memset(&v,0,sizeof(v));if(SUCCEEDED(invoke0(o,name,DISPATCH_PROPERTYGET,&v))&&v.vt==VT_DISPATCH)return v.data.pdispVal;return 0;}
static int getint(IDispatch*o,const wchar_t*name,int defv){VARIANT v;memset(&v,0,sizeof(v));if(SUCCEEDED(invoke0(o,name,DISPATCH_PROPERTYGET,&v))&&v.vt==VT_I4)return (int)v.data.lVal;return defv;}
static HRESULT setbstr(IDispatch*o,const wchar_t*name,const wchar_t*val){DISPID id=dispid(o,name),named=DISPID_PROPERTYPUT;VARIANT v;DISPPARAMS dp;if(id==-1)return -1;memset(&v,0,sizeof(v));v.vt=VT_BSTR;v.data.bstrVal=SysAllocString(val);dp.rgvarg=&v;dp.rgdispidNamedArgs=&named;dp.cArgs=1;dp.cNamedArgs=1;HRESULT hr=o->lpVtbl->Invoke(o,id,&IID_NULL_,0,DISPATCH_PROPERTYPUT,&dp,0,0,0);SysFreeString(v.data.bstrVal);return hr;}
static HRESULT setint(IDispatch*o,const wchar_t*name,int val){DISPID id=dispid(o,name),named=DISPID_PROPERTYPUT;VARIANT v;DISPPARAMS dp;if(id==-1)return -1;memset(&v,0,sizeof(v));v.vt=VT_I4;v.data.lVal=val;dp.rgvarg=&v;dp.rgdispidNamedArgs=&named;dp.cArgs=1;dp.cNamedArgs=1;return o->lpVtbl->Invoke(o,id,&IID_NULL_,0,DISPATCH_PROPERTYPUT,&dp,0,0,0);}
static void method(IDispatch*o,const wchar_t*name){invoke0(o,name,DISPATCH_METHOD,0);}

static int read_exact(HINTERNET h,BYTE*buf,int need){int off=0;while(off<need){DWORD got=0;if(!InternetReadFile(h,buf+off,(DWORD)(need-off),&got)||got==0)return 0;off+=(int)got;}return 1;}
static int skip_exact(HINTERNET h,int need){while(need>0){int n=need>4096?4096:need;if(!read_exact(h,g_skipbuf,n))return 0;need-=n;}return 1;}
static int parse_metaint(wchar_t*headers){wchar_t*p=wistr(headers,L"icy-metaint:");if(!p)return 0;p+=12;while(*p==L' '||*p==L'\t')p++;int n=0;while(*p>=L'0'&&*p<=L'9'){n=n*10+(*p-L'0');p++;if(n>1048576)return 0;}return n;}

static int fetch_icy_title(wchar_t*out,int cap){
    HINTERNET ses=0,h=0;int ok=0;DWORD to=4500;
    ses=InternetOpenW(L"PiterFMNative/1.0",INTERNET_OPEN_TYPE_PRECONFIG,0,0,0);if(!ses)return 0;
    InternetSetOptionW(ses,INTERNET_OPTION_CONNECT_TIMEOUT,&to,sizeof(to));InternetSetOptionW(ses,INTERNET_OPTION_SEND_TIMEOUT,&to,sizeof(to));InternetSetOptionW(ses,INTERNET_OPTION_RECEIVE_TIMEOUT,&to,sizeof(to));
    h=InternetOpenUrlW(ses,L"http://icecast-piterfm.cdnvideo.ru:8000/piterfm",L"Icy-MetaData: 1\r\nCache-Control: no-cache\r\n",-1,INTERNET_FLAG_RELOAD|INTERNET_FLAG_NO_CACHE_WRITE|INTERNET_FLAG_NO_UI,0);
    if(!h){InternetCloseHandle(ses);return 0;}
    DWORD cb=sizeof(g_hdr),idx=0;g_hdr[0]=0;
    if(!HttpQueryInfoW(h,HTTP_QUERY_RAW_HEADERS_CRLF,g_hdr,&cb,&idx)){InternetCloseHandle(h);InternetCloseHandle(ses);return 0;}
    g_hdr[8191]=0;int mi=parse_metaint(g_hdr);if(mi<=0||mi>1048576){InternetCloseHandle(h);InternetCloseHandle(ses);return 0;}
    if(!skip_exact(h,mi)){InternetCloseHandle(h);InternetCloseHandle(ses);return 0;}
    BYTE lb=0;if(!read_exact(h,&lb,1)){InternetCloseHandle(h);InternetCloseHandle(ses);return 0;}
    int ml=((int)lb)*16;if(ml<=0||ml>4096){InternetCloseHandle(h);InternetCloseHandle(ses);return 0;}
    if(!read_exact(h,(BYTE*)g_meta,ml)){InternetCloseHandle(h);InternetCloseHandle(ses);return 0;}g_meta[ml]=0;
    char*p=cstr(g_meta,"StreamTitle='");if(p){p+=13;char*e=cstr(p,"';");if(e){*e=0;int n=MultiByteToWideChar(CP_UTF8,0,p,-1,out,cap);if(n<=0)n=MultiByteToWideChar(1251,0,p,-1,out,cap);if(n>0)ok=1;}}
    InternetCloseHandle(h);InternetCloseHandle(ses);return ok;
}

static void split_track(const wchar_t*raw,wchar_t*artist,int ac,wchar_t*title,int tc){
    artist[0]=0;title[0]=0;int n=wlen(raw),pos=-1;
    for(int i=0;i+2<n;i++){if(raw[i]==L' '&&raw[i+1]==L'-'&&raw[i+2]==L' '){pos=i;break;}}
    if(pos>0){int i;for(i=0;i<pos&&i<ac-1;i++)artist[i]=raw[i];artist[i]=0;wcpy(title,raw+pos+3,tc);}else{wcpy(title,raw,tc);}
}

static int url_encode_utf8(const wchar_t*src,char*out,int cap){char tmp[1024];int n=WideCharToMultiByte(CP_UTF8,0,src,-1,tmp,sizeof(tmp),0,0);if(n<=0)return 0;static const char hex[]="0123456789ABCDEF";int o=0;for(int i=0;tmp[i]&&o<cap-1;i++){unsigned char c=(unsigned char)tmp[i];int safe=(c>='A'&&c<='Z')||(c>='a'&&c<='z')||(c>='0'&&c<='9')||c=='-'||c=='_'||c=='.'||c=='~';if(safe){out[o++]=(char)c;}else{if(o+3>=cap)break;out[o++]='%';out[o++]=hex[c>>4];out[o++]=hex[c&15];}}out[o]=0;return o>0;}

static int fetch_cover_url(const wchar_t*raw,wchar_t*out,int cap){
    if(!url_encode_utf8(raw,g_enc,sizeof(g_enc)))return 0;
    const char*pre="https://itunes.apple.com/search?term=";const char*suf="&entity=song&limit=1";int o=0;for(int i=0;pre[i]&&o<(int)sizeof(g_aurl)-1;i++)g_aurl[o++]=pre[i];for(int i=0;g_enc[i]&&o<(int)sizeof(g_aurl)-1;i++)g_aurl[o++]=g_enc[i];for(int i=0;suf[i]&&o<(int)sizeof(g_aurl)-1;i++)g_aurl[o++]=suf[i];g_aurl[o]=0;
    if(MultiByteToWideChar(CP_UTF8,0,g_aurl,-1,g_wurl,4096)<=0)return 0;
    HINTERNET ses=InternetOpenW(L"PiterFMNative/1.0",INTERNET_OPEN_TYPE_PRECONFIG,0,0,0);if(!ses)return 0;DWORD to=4500;InternetSetOptionW(ses,INTERNET_OPTION_CONNECT_TIMEOUT,&to,sizeof(to));InternetSetOptionW(ses,INTERNET_OPTION_RECEIVE_TIMEOUT,&to,sizeof(to));
    HINTERNET h=InternetOpenUrlW(ses,g_wurl,L"Cache-Control: no-cache\r\n",-1,INTERNET_FLAG_RELOAD|INTERNET_FLAG_NO_CACHE_WRITE|INTERNET_FLAG_NO_UI,0);if(!h){InternetCloseHandle(ses);return 0;}
    int off=0;while(off<(int)sizeof(g_json)-1){DWORD got=0;if(!InternetReadFile(h,g_json+off,(DWORD)(sizeof(g_json)-1-off),&got)||got==0)break;off+=(int)got;}g_json[off]=0;InternetCloseHandle(h);InternetCloseHandle(ses);
    char*p=cstr(g_json,"\"artworkUrl100\":\"");if(!p)return 0;p+=17;int ti=0;while(*p&&*p!='\"'&&ti<(int)sizeof(g_arttmp)-1){if(*p=='\\'&&p[1]=='/'){g_arttmp[ti++]='/';p+=2;}else g_arttmp[ti++]=*p++;}g_arttmp[ti]=0;if(ti==0)return 0;
    /* upscale 100x100bb -> 600x600bb */
    char*sz=cstr(g_arttmp,"100x100bb");if(sz){ccopy(g_tail,sz+9,sizeof(g_tail));const char*rep="600x600bb";int ri=0;while(rep[ri]){sz[ri]=rep[ri];ri++;}ccopy(sz+ri,g_tail,1024-ri);}
    return MultiByteToWideChar(CP_UTF8,0,g_arttmp,-1,out,cap)>0;
}


static int weq(const wchar_t*a,const wchar_t*b){int i=0;if(!a||!b)return 0;while(a[i]&&b[i]){if(wlower(a[i])!=wlower(b[i]))return 0;i++;}return a[i]==0&&b[i]==0;}
static int wstarts(const wchar_t*a,const wchar_t*b){int i=0;if(!a||!b)return 0;while(b[i]){if(!a[i]||wlower(a[i])!=wlower(b[i]))return 0;i++;}return 1;}
static int wspace(wchar_t c){return c==L' '||c==L'\t'||c==L'\r'||c==L'\n'||c==0x00A0;}
static int is_time_token(const wchar_t*s){return s&&s[0]>=L'0'&&s[0]<=L'2'&&s[1]>=L'0'&&s[1]<=L'9'&&s[2]==L':'&&s[3]>=L'0'&&s[3]<=L'5'&&s[4]>=L'0'&&s[4]<=L'9'&&s[5]==0;}
static int bad_token(const wchar_t*s){if(!s||!s[0])return 1;if(weq(s,L"Image")||weq(s,L"Назад")||weq(s,L"Поток")||weq(s,L"Слушать онлайн"))return 1;return 0;}

static void token_add(wchar_t*buf,int n){
    if(g_tokenCount>=2048||n<=0)return;
    int a=0,b=n;while(a<b&&wspace(buf[a]))a++;while(b>a&&wspace(buf[b-1]))b--;
    if(b<=a)return;int o=0,sp=0;
    for(int i=a;i<b&&o<255;i++){wchar_t c=buf[i];if(wspace(c)){if(o>0)sp=1;}else{if(sp&&o<255)g_tokens[g_tokenCount][o++]=L' ';sp=0;g_tokens[g_tokenCount][o++]=c;}}
    g_tokens[g_tokenCount][o]=0;if(o>0)g_tokenCount++;
}

static void html_to_tokens(wchar_t*h){
    g_tokenCount=0;wchar_t tmp[512];int tn=0;
    for(int i=0;h&&h[i];){
        if(h[i]==L'<'){
            token_add(tmp,tn);tn=0;
            if(wstarts(h+i,L"<script")||wstarts(h+i,L"<style")){
                wchar_t*e=wistr(h+i,wstarts(h+i,L"<script")?L"</script":L"</style");
                if(e){i=(int)(e-h);while(h[i]&&h[i]!=L'>')i++;if(h[i])i++;continue;}
            }
            while(h[i]&&h[i]!=L'>')i++;if(h[i])i++;continue;
        }
        if(h[i]==L'&'){
            if(wstarts(h+i,L"&nbsp;")){if(tn<511)tmp[tn++]=L' ';i+=6;continue;}
            if(wstarts(h+i,L"&shy;")){i+=5;continue;}
            if(wstarts(h+i,L"&#173;")){i+=6;continue;}
            if(wstarts(h+i,L"&amp;")){if(tn<511)tmp[tn++]=L'&';i+=5;continue;}
            if(wstarts(h+i,L"&quot;")){if(tn<511)tmp[tn++]=L'\"';i+=6;continue;}
            if(wstarts(h+i,L"&#39;")){if(tn<511)tmp[tn++]=L'\'';i+=5;continue;}
        }
        if(tn<511)tmp[tn++]=h[i];i++;
    }
    token_add(tmp,tn);
}

static int fetch_page_utf8(const wchar_t*url){
    HINTERNET ses=0,h=0;DWORD to=3500;int off=0;int o=0;
    while(url[o]&&o<INTERNET_MAX_URL_LENGTH-40){g_freshurl[o]=url[o];o++;}
    if(o>0){g_freshurl[o++]=(wistr((wchar_t*)url,L"?")?L'&':L'?');}
    g_freshurl[o++]=L'_';g_freshurl[o++]=L'=';
    int n=++g_pageNonce;int dn=0;if(n<=0)n=1;do{g_dig[dn++]=(wchar_t)(L'0'+(n%10));n/=10;}while(n&&dn<15);while(dn>0&&o<INTERNET_MAX_URL_LENGTH-1)g_freshurl[o++]=g_dig[--dn];g_freshurl[o]=0;
    ses=InternetOpenW(L"PiterFMNative/5.0",INTERNET_OPEN_TYPE_PRECONFIG,0,0,0);if(!ses)return 0;
    InternetSetOptionW(ses,INTERNET_OPTION_CONNECT_TIMEOUT,&to,sizeof(to));InternetSetOptionW(ses,INTERNET_OPTION_SEND_TIMEOUT,&to,sizeof(to));InternetSetOptionW(ses,INTERNET_OPTION_RECEIVE_TIMEOUT,&to,sizeof(to));
    h=InternetOpenUrlW(ses,g_freshurl,L"Cache-Control: no-cache, no-store, max-age=0\r\nPragma: no-cache\r\nAccept: text/html,application/xhtml+xml\r\nAccept-Encoding: identity\r\nConnection: close\r\n",-1,INTERNET_FLAG_RELOAD|INTERNET_FLAG_NO_CACHE_WRITE|INTERNET_FLAG_NO_UI,0);
    if(!h){InternetCloseHandle(ses);return 0;}
    while(off<(int)sizeof(g_page)-1){DWORD got=0;if(!InternetReadFile(h,g_page+off,(DWORD)(sizeof(g_page)-1-off),&got)||got==0)break;off+=(int)got;}
    g_page[off]=0;InternetCloseHandle(h);InternetCloseHandle(ses);if(off<=0)return 0;
    if(MultiByteToWideChar(CP_UTF8,0,g_page,-1,g_pagew,2097152)<=0){if(MultiByteToWideChar(1251,0,g_page,-1,g_pagew,2097152)<=0)return 0;}
    return 1;
}


static int token_is_noise(const wchar_t*s){
    if(bad_token(s))return 1;
    if(weq(s,L"&shy;")||weq(s,L"shy;")||weq(s,L"&#173;")||weq(s,L"­"))return 1;
    if(weq(s,L"Главная")||weq(s,L"Потоки")||weq(s,L"Новости")||weq(s,L"Подкасты")||weq(s,L"Видео")||weq(s,L"Реклама")||weq(s,L"О нас"))return 1;
    if(wistr((wchar_t*)s,L"В избранном")||wistr((wchar_t*)s,L"ВКЛЮЧИТЬ ЭФИР")||wistr((wchar_t*)s,L"Россия Санкт-Петербург"))return 1;
    if(wistr((wchar_t*)s,L"display:")||wistr((wchar_t*)s,L"font-")||wistr((wchar_t*)s,L"color:")||wistr((wchar_t*)s,L"margin:")||wistr((wchar_t*)s,L"padding:")||wistr((wchar_t*)s,L"{display")||wistr((wchar_t*)s,L";}"))return 1;
    return 0;
}

static int raw_has_dash(const wchar_t*s){int n=wlen(s);for(int i=1;i+1<n;i++)if(s[i]==L'-')return 1;return 0;}

static void make_raw(const wchar_t*a,const wchar_t*t,wchar_t*out,int cap){
    int o=0;if(cap<=0)return;out[0]=0;
    for(int i=0;a&&a[i]&&o<cap-1;i++)out[o++]=a[i];
    if(o&&t&&t[0]&&o<cap-4){out[o++]=L' ';out[o++]=L'-';out[o++]=L' ';}
    for(int i=0;t&&t[i]&&o<cap-1;i++)out[o++]=t[i];out[o]=0;
}

static int time_minutes(const wchar_t*s){
    if(!is_time_token(s))return -1;return (s[0]-L'0')*600+(s[1]-L'0')*60+(s[3]-L'0')*10+(s[4]-L'0');
}

static int moscow_now_minutes(void){
    SYSTEMTIME st;memset(&st,0,sizeof(st));GetSystemTime(&st);int m=(int)st.wHour*60+(int)st.wMinute+180;while(m>=1440)m-=1440;return m;
}

static int age_from_time(const wchar_t*s){
    int tm=time_minutes(s);if(tm<0)return 9999;int now=moscow_now_minutes();int a=now-tm;if(a<0)a+=1440;return a;
}

static int next_clean_token(int from,int limit){
    for(int i=from;i<g_tokenCount&&i<limit;i++){
        if(token_is_noise(g_tokens[i])||is_time_token(g_tokens[i]))continue;
        if(wistr(g_tokens[i],L"Время МСК")||wistr(g_tokens[i],L"Плейлист")||wistr(g_tokens[i],L"Ранее в эфире"))continue;
        return i;
    }
    return -1;
}

static int parse_volna(TRACKDATA*d,int*age){
    memset(d,0,sizeof(*d));*age=9999;
    if(!fetch_page_utf8(L"https://volna.top/radio/piter-fm"))return 0;
    html_to_tokens(g_pagew);if(g_tokenCount<=0)return 0;
    int cur=-1,hstart=-1;
    for(int i=0;i<g_tokenCount;i++){
        wchar_t*p=wistr(g_tokens[i],L"Сейчас играет:");
        if(p){p+=wlen(L"Сейчас играет:");while(*p==L' ')p++;if(*p){wcpy(d->raw,p,512);split_track(d->raw,d->artist,256,d->title,384);cur=1;break;}else{int n=next_clean_token(i+1,i+8);if(n>=0){wcpy(d->raw,g_tokens[n],512);split_track(d->raw,d->artist,256,d->title,384);cur=1;break;}}}
    }
    for(int i=0;i<g_tokenCount;i++)if(wistr(g_tokens[i],L"Ранее в эфире")||wistr(g_tokens[i],L"Время МСК")){hstart=i;break;}
    if(hstart<0)hstart=0;
    for(int i=hstart;i<g_tokenCount&&d->historyCount<10;i++){
        if(wistr(g_tokens[i],L"Информация обновляется"))break;
        if(is_time_token(g_tokens[i])){
            int a=next_clean_token(i+1,i+8);if(a<0)continue;int t=next_clean_token(a+1,a+8);
            HISTITEM*it=&d->history[d->historyCount];
            wcpy(it->time,g_tokens[i],16);
            if(t>=0&&!raw_has_dash(g_tokens[a])){wcpy(it->artist,g_tokens[a],192);wcpy(it->title,g_tokens[t],256);}
            else{wchar_t rr[512];wcpy(rr,g_tokens[a],512);split_track(rr,it->artist,192,it->title,256);if(!it->artist[0])wcpy(it->artist,L"",192);}
            if(it->title[0]||it->artist[0])d->historyCount++;
        }
    }
    if(d->historyCount>0)*age=age_from_time(d->history[0].time);
    if(!d->raw[0]&&d->historyCount>0){make_raw(d->history[0].artist,d->history[0].title,d->raw,512);wcpy(d->artist,d->history[0].artist,256);wcpy(d->title,d->history[0].title,384);}
    return d->raw[0]||d->historyCount>0;
}

static int parse_fm24(TRACKDATA*d,int*age){
    memset(d,0,sizeof(*d));*age=9999;
    if(!fetch_page_utf8(L"https://fm-24.ru/playlist/piter-fm"))return 0;
    html_to_tokens(g_pagew);if(g_tokenCount<=0)return 0;
    int start=0;
    for(int i=0;i<g_tokenCount;i++){if(wistr(g_tokens[i],L"Плейлист радиостанции Питер FM")){start=i;break;}}
    for(int i=start;i<g_tokenCount&&d->historyCount<10;i++){
        if(is_time_token(g_tokens[i])){
            int a=next_clean_token(i+1,i+6);if(a<0)continue;
            wchar_t rr[512];wcpy(rr,g_tokens[a],512);
            HISTITEM*it=&d->history[d->historyCount];wcpy(it->time,g_tokens[i],16);split_track(rr,it->artist,192,it->title,256);
            if(!it->title[0])continue;if(!it->artist[0])wcpy(it->artist,L"",192);d->historyCount++;
        }
    }
    if(d->historyCount>0){*age=age_from_time(d->history[0].time);make_raw(d->history[0].artist,d->history[0].title,d->raw,512);wcpy(d->artist,d->history[0].artist,256);wcpy(d->title,d->history[0].title,384);}
    return d->historyCount>0;
}

static int parse_radiopotok(TRACKDATA*d,int*age){
    memset(d,0,sizeof(*d));*age=9999;
    if(!fetch_page_utf8(L"https://radiopotok.com/piter-fm"))return 0;
    html_to_tokens(g_pagew);if(g_tokenCount<=0)return 0;
    int section=0,currentIdx=-1;
    for(int i=0;i<g_tokenCount;i++){
        if(wistr(g_tokens[i],L"Что сейчас играет")){section=i;break;}
    }
    for(int i=section;i<g_tokenCount&&i<section+80;i++){
        if(weq(g_tokens[i],L"сейчас")||weq(g_tokens[i],L"Сейчас")){currentIdx=next_clean_token(i+1,i+8);break;}
    }
    if(currentIdx>=0){wcpy(d->raw,g_tokens[currentIdx],512);split_track(d->raw,d->artist,256,d->title,384);}
    for(int i=section;i<g_tokenCount&&d->historyCount<10;i++){
        if(wistr(g_tokens[i],L"Плейлист")&&i>section+5)break;
        if(is_time_token(g_tokens[i])){
            int a=next_clean_token(i+1,i+8);if(a<0)continue;wchar_t rr[512];wcpy(rr,g_tokens[a],512);
            HISTITEM*it=&d->history[d->historyCount];wcpy(it->time,g_tokens[i],16);split_track(rr,it->artist,192,it->title,256);if(it->title[0])d->historyCount++;
        }
    }
    if(d->historyCount>0)*age=age_from_time(d->history[0].time);
    if(!d->raw[0]&&d->historyCount>0){make_raw(d->history[0].artist,d->history[0].title,d->raw,512);wcpy(d->artist,d->history[0].artist,256);wcpy(d->title,d->history[0].title,384);}
    return d->raw[0]||d->historyCount>0;
}

static int raw_same(const wchar_t*a,const wchar_t*b){return a&&b&&a[0]&&b[0]&&weq(a,b);}

static int valid_music_text(const wchar_t*s){
    if(!s||!s[0]||token_is_noise(s))return 0;
    int useful=0;
    for(int i=0;s[i];i++){wchar_t c=s[i];if((c>=L'0'&&c<=L'9')||(c>=L'A'&&c<=L'Z')||(c>=L'a'&&c<=L'z')||(c>=0x0410&&c<=0x044F)||c==0x0401||c==0x0451)useful++;}
    return useful>0;
}

static void sanitize_trackdata(TRACKDATA*d){
    if(!d)return;
    if(d->raw[0]&&!valid_music_text(d->raw)){d->raw[0]=0;d->artist[0]=0;d->title[0]=0;}
    int w=0;
    for(int i=0;i<d->historyCount&&i<10;i++){
        HISTITEM*it=&d->history[i];
        if(!valid_music_text(it->title)&&!valid_music_text(it->artist))continue;
        if(w!=i)memcpy(&d->history[w],it,sizeof(HISTITEM));w++;
    }
    d->historyCount=w;
    if(!d->raw[0]&&d->historyCount>0){make_raw(d->history[0].artist,d->history[0].title,d->raw,512);wcpy(d->artist,d->history[0].artist,256);wcpy(d->title,d->history[0].title,384);}
}

static int choose_metadata(TRACKDATA*out){
    memset(g_candidates,0,sizeof(g_candidates));
    g_candidates[0].ok=parse_volna(&g_candidates[0].d,&g_candidates[0].age);wcpy(g_candidates[0].source,L"Volna.top",64);
    g_candidates[1].ok=parse_fm24(&g_candidates[1].d,&g_candidates[1].age);wcpy(g_candidates[1].source,L"FM-24",64);
    g_candidates[2].ok=parse_radiopotok(&g_candidates[2].d,&g_candidates[2].age);wcpy(g_candidates[2].source,L"Radiopotok",64);
    for(int i=0;i<3;i++){sanitize_trackdata(&g_candidates[i].d);if(!g_candidates[i].d.raw[0]&&g_candidates[i].d.historyCount<=0)g_candidates[i].ok=0;}
    int best=-1;
    /* Agreement wins. */
    for(int i=0;i<3&&best<0;i++)for(int j=i+1;j<3;j++)if(g_candidates[i].ok&&g_candidates[j].ok&&raw_same(g_candidates[i].d.raw,g_candidates[j].d.raw)){best=(g_candidates[i].age<=g_candidates[j].age)?i:j;break;}
    /* Otherwise choose the source whose latest timestamp is closest to current MSK. */
    if(best<0){for(int i=0;i<3;i++)if(g_candidates[i].ok&&(best<0||g_candidates[i].age<g_candidates[best].age))best=i;}
    if(best<0){memset(out,0,sizeof(*out));wcpy(out->metaStatus,L"v9: источники временно не вернули корректные треки",160);return 0;}
    memcpy(out,&g_candidates[best].d,sizeof(*out));
    if(out->raw[0]&&out->historyCount>0&&g_candidates[best].age<=90){
        wchar_t st[160]=L"Источник: ";int o=9;for(int i=0;g_candidates[best].source[i]&&o<150;i++)st[o++]=g_candidates[best].source[i];
        const wchar_t*tail=L" · свежие данные";for(int i=0;tail[i]&&o<159;i++)st[o++]=tail[i];st[o]=0;wcpy(out->metaStatus,st,160);
    }else if(out->raw[0]){
        wchar_t st[160]=L"Источник: ";int o=9;for(int i=0;g_candidates[best].source[i]&&o<145;i++)st[o++]=g_candidates[best].source[i];
        const wchar_t*tail=L" · данные могут отставать";for(int i=0;tail[i]&&o<159;i++)st[o++]=tail[i];st[o]=0;wcpy(out->metaStatus,st,160);
    }
    return out->raw[0]||out->historyCount>0;
}

static int parse_official(TRACKDATA*d){return choose_metadata(d);}

static DWORD WINAPI meta_thread(LPVOID x){
    (void)x;memset(&g_threadTrack,0,sizeof(g_threadTrack));
    int ok=parse_official(&g_threadTrack);
    if(g_threadTrack.raw[0])fetch_cover_url(g_threadTrack.raw,g_threadTrack.coverUrl,INTERNET_MAX_URL_LENGTH);
    memcpy(&g_pending,&g_threadTrack,sizeof(g_threadTrack));
    PostMessageW(g_hwnd,WM_APP_TRACK,(WPARAM)(ok?1:0),0);
    g_metaBusy=0;return 0;
}
static void request_meta(void){if(g_metaBusy)return;g_metaBusy=1;HANDLE th=CreateThread(0,0,meta_thread,0,0,0);if(th)CloseHandle(th);else g_metaBusy=0;}

static void load_cover(const wchar_t*url){if(!url||!url[0])return;IPicture*p=0;HRESULT hr=OleLoadPicturePath(url,0,0,0,&IID_IPicture_,(void**)&p);if(SUCCEEDED(hr)&&p){if(g_cover)g_cover->lpVtbl->Release(g_cover);g_cover=p;}}

static void push_local_history(const wchar_t*artist,const wchar_t*title){
    if(!title||!title[0])return;
    for(int i=9;i>0;i--)g_history[i]=g_history[i-1];
    g_history[0].time[0]=0;wcpy(g_history[0].artist,artist&&artist[0]?artist:L"",192);wcpy(g_history[0].title,title,256);if(g_historyCount<10)g_historyCount++;
}

static void fillc(HDC hdc,RECT r,DWORD color){HBRUSH b=CreateSolidBrush(color);FillRect(hdc,&r,b);DeleteObject(b);}
static void framec(HDC hdc,RECT r,DWORD color,int thick){RECT t=r; t.bottom=t.top+thick; fillc(hdc,t,color); t=r; t.top=t.bottom-thick; fillc(hdc,t,color); t=r; t.right=t.left+thick; fillc(hdc,t,color); t=r; t.left=t.right-thick; fillc(hdc,t,color);}
static void draw_text(HDC hdc,const wchar_t*txt,RECT r,HFONT font,DWORD color,UINT flags){HGDIOBJ old=SelectObject(hdc,font);SetBkMode(hdc,TRANSPARENT);SetTextColor(hdc,color);DrawTextW(hdc,txt,-1,&r,flags);SelectObject(hdc,old);}
static void draw_button_ui(HDC hdc,RECT r,const wchar_t*txt,int primary,int pressed){DWORD fill=primary?(pressed?RGB(228,78,37):RGB(255,95,48)):(pressed?RGB(58,43,48):RGB(40,34,36));DWORD border=primary?RGB(255,140,112):RGB(255,95,48);DWORD text=RGB(255,255,255);fillc(hdc,r,border);RECT inner={r.left+2,r.top+2,r.right-2,r.bottom-2};fillc(hdc,inner,fill);RECT shine={inner.left,inner.top,inner.right,inner.top+3};fillc(hdc,shine,primary?RGB(255,148,120):RGB(78,56,63));RECT tr={inner.left+8,inner.top+2,inner.right-8,inner.bottom-2};draw_text(hdc,txt,tr,primary?fButton:fSmall,text,DT_CENTER|DT_VCENTER|DT_SINGLELINE);}
static void draw_cover(HDC hdc){RECT r={32,120,267,355};fillc(hdc,r,RGB(255,95,48));RECT inner={36,124,263,351};fillc(hdc,inner,RGB(242,242,242));if(g_cover){LONG w=0,h=0;g_cover->lpVtbl->get_Width(g_cover,&w);g_cover->lpVtbl->get_Height(g_cover,&h);if(w>0&&h>0){g_cover->lpVtbl->Render(g_cover,hdc,40,128,219,219,0,h,w,-h,0);return;}}
    RECT rr={72,160,231,319};fillc(hdc,rr,RGB(28,28,28));RECT t={72,212,231,258};draw_text(hdc,L"100.9",t,fArtist,RGB(255,255,255),DT_CENTER|DT_VCENTER|DT_SINGLELINE);t.top=258;t.bottom=296;draw_text(hdc,L"FM",t,fTrack,RGB(255,108,65),DT_CENTER|DT_VCENTER|DT_SINGLELINE);
}

static void paint(HWND hwnd){PAINTSTRUCT ps;HDC hdc=BeginPaint(hwnd,&ps);RECT client={0,0,1000,600};fillc(hdc,client,RGB(18,18,20));
    RECT top={0,0,1000,8};fillc(hdc,top,RGB(255,95,48));
    RECT panelLeft={20,108,580,530};fillc(hdc,panelLeft,RGB(23,23,26));framec(hdc,panelLeft,RGB(45,45,50),1);
    RECT panelRight={604,20,988,530};fillc(hdc,panelRight,RGB(21,21,24));framec(hdc,panelRight,RGB(45,45,50),1);

    RECT r={30,18,300,72};draw_text(hdc,L"Питер FM",r,fTitle,RGB(255,255,255),DT_LEFT|DT_SINGLELINE);
    r.left=310;r.top=30;r.right=440;r.bottom=58;draw_text(hdc,L"100.9 · В РИТМЕ ГОРОДА",r,fSmall,RGB(255,95,48),DT_LEFT|DT_SINGLELINE);
    r.left=34;r.top=73;r.right=360;r.bottom=104;draw_text(hdc,L"100.9 FM · Санкт-Петербург",r,fFreq,RGB(208,208,212),DT_LEFT|DT_SINGLELINE);
    r.left=445;r.top=35;r.right=575;r.bottom=60;draw_text(hdc,L"ПРЯМОЙ ЭФИР",r,fSmall,RGB(255,138,104),DT_RIGHT|DT_SINGLELINE);
    draw_cover(hdc);
    r.left=305;r.top=132;r.right=560;r.bottom=158;draw_text(hdc,L"СЕЙЧАС ИГРАЕТ",r,fSmall,RGB(255,95,48),DT_LEFT|DT_SINGLELINE);
    r.left=302;r.top=163;r.right=568;r.bottom=225;draw_text(hdc,g_artist,r,fArtist,RGB(255,255,255),DT_LEFT|DT_WORDBREAK);
    r.left=303;r.top=230;r.right=568;r.bottom=315;draw_text(hdc,g_track,r,fTrack,RGB(232,232,236),DT_LEFT|DT_WORDBREAK);
    r.left=304;r.top=318;r.right=560;r.bottom=344;draw_text(hdc,g_status,r,fFreq,RGB(255,210,198),DT_LEFT|DT_SINGLELINE);
    r.left=304;r.top=349;r.right=580;r.bottom=372;draw_text(hdc,L"Метаданные: автовыбор свежего источника",r,fSmall,RGB(126,126,132),DT_LEFT|DT_SINGLELINE);
    r.top=372;r.bottom=394;draw_text(hdc,g_checked,r,fSmall,RGB(104,104,110),DT_LEFT|DT_SINGLELINE);
    r.left=172;r.top=405;r.right=320;r.bottom=430;draw_text(hdc,L"Громкость",r,fFreq,RGB(232,232,236),DT_LEFT|DT_SINGLELINE);
    {RECT barbg={172,442,532,450};fillc(hdc,barbg,RGB(58,58,64));RECT barfill={172,442,172+(360*g_volume)/100,450};fillc(hdc,barfill,RGB(255,95,48));RECT thumb={168+(360*g_volume)/100,434,184+(360*g_volume)/100,458};fillc(hdc,thumb,RGB(242,242,242));framec(hdc,thumb,RGB(255,95,48),1);RECT vr={540,433,585,458};draw_text(hdc,L"",vr,fSmall,RGB(255,255,255),DT_LEFT|DT_SINGLELINE);wchar_t vv[16];int v=g_volume;int a=v/100,b=(v/10)%10,c=v%10;int p=0;if(a)vv[p++]=L'0'+a;if(a||b)vv[p++]=L'0'+b;vv[p++]=L'0'+c;vv[p++]=L'%';vv[p]=0;draw_text(hdc,vv,vr,fFreq,RGB(255,150,118),DT_LEFT|DT_SINGLELINE);}
    r.left=158;r.top=480;r.right=555;r.bottom=510;draw_text(hdc,L"Трек и история обновляются каждые 15 секунд",r,fSmall,RGB(126,126,132),DT_LEFT|DT_SINGLELINE);
    r.left=620;r.top=28;r.right=970;r.bottom=62;draw_text(hdc,L"НЕДАВНО В ЭФИРЕ",r,fArtist,RGB(255,255,255),DT_LEFT|DT_SINGLELINE);
    r.left=620;r.top=62;r.right=970;r.bottom=82;draw_text(hdc,L"Последние треки на волне Питер FM",r,fSmall,RGB(255,95,48),DT_LEFT|DT_SINGLELINE);
    if(g_historyCount<=0){r.top=96;r.bottom=126;draw_text(hdc,L"Получаю историю эфира...",r,fFreq,RGB(170,170,176),DT_LEFT|DT_SINGLELINE);}else{
        for(int i=0;i<g_historyCount&&i<10;i++){int y=96+i*41;HISTITEM*it=&g_history[i];
            RECT row={616,y-4,982,y+33};if(i==0){fillc(hdc,row,RGB(34,28,28));framec(hdc,row,RGB(255,95,48),1);}
            RECT tr={626,y,676,y+20};draw_text(hdc,it->time,tr,fSmall,RGB(255,150,118),DT_LEFT|DT_SINGLELINE);
            RECT ar={682,y,978,y+20};draw_text(hdc,it->artist,ar,fFreq,RGB(245,245,247),DT_LEFT|DT_SINGLELINE);
            RECT ti={682,y+18,978,y+36};draw_text(hdc,it->title,ti,fSmall,RGB(176,176,182),DT_LEFT|DT_SINGLELINE);
        }
    }
    {RECT cr={30,544,430,564};draw_text(hdc,L"by OlegKrs · поддержать автора / на кофе",cr,fSmall,RGB(150,150,158),DT_LEFT|DT_SINGLELINE);
    RECT pay={30,565,430,587};draw_text(hdc,L"ВТБ · 2200 2402 8743 9638",pay,fSmall,RGB(255,120,82),DT_LEFT|DT_SINGLELINE);}
    EndPaint(hwnd,&ps);
}
static int in_rect_xy(RECT r,int x,int y){return x>=r.left&&x<r.right&&y>=r.top&&y<r.bottom;}
static void set_volume_from_x(int x){int left=172,right=532;int v=(x-left)*100/(right-left);if(v<0)v=0;if(v>100)v=100;g_volume=v;if(g_settings)setint(g_settings,L"volume",g_volume);InvalidateRect(g_hwnd,0,FALSE);}

static void start_radio(void){if(!g_wmp||!g_controls)return;setbstr(g_wmp,L"URL",L"http://icecast-piterfm.cdnvideo.ru/piterfm");method(g_controls,L"play");g_playing=1;wcpy(g_status,L"\u041f\u043e\u0434\u043a\u043b\u044e\u0447\u0435\u043d\u0438\u0435...",128);SendMessageW(g_play,0x000C,0,(LPARAM)L"СТОП");InvalidateRect(g_hwnd,0,TRUE);request_meta();}
static void stop_radio(void){if(g_controls)method(g_controls,L"stop");g_playing=0;wcpy(g_status,L"\u041e\u0441\u0442\u0430\u043d\u043e\u0432\u043b\u0435\u043d\u043e",128);SendMessageW(g_play,0x000C,0,(LPARAM)L"СЛУШАТЬ");InvalidateRect(g_hwnd,0,TRUE);}

static LRESULT CALLBACK wndproc(HWND hwnd,UINT msg,WPARAM wp,LPARAM lp){
    if(msg==WM_PAINT){paint(hwnd);return 0;}
    if(msg==WM_DRAWITEM){DRAWITEMSTRUCT*di=(DRAWITEMSTRUCT*)lp;if(!di)return 0;wchar_t txt[64];txt[0]=0;int primary=0;if(di->CtlID==ID_PLAY){primary=1;SendMessageW(di->hwndItem,0x000D,64,(LPARAM)txt);}else if(di->CtlID==ID_REFRESH){SendMessageW(di->hwndItem,0x000D,64,(LPARAM)txt);}draw_button_ui(di->hDC,di->rcItem,txt,primary,(di->itemState&ODS_SELECTED)?1:0);return 1;}
    if(msg==WM_COMMAND){int id=LOWORD(wp);if(id==ID_PLAY&&HIWORD(wp)==BN_CLICKED){if(g_playing)stop_radio();else start_radio();return 0;}if(id==ID_REFRESH&&HIWORD(wp)==BN_CLICKED){request_meta();return 0;}}
    if(msg==WM_LBUTTONDOWN){int x=(short)LOWORD(lp),y=(short)HIWORD(lp);RECT vr={160,430,590,462};if(in_rect_xy(vr,x,y)){g_dragVol=1;set_volume_from_x(x);return 0;}}
    if(msg==WM_MOUSEMOVE){if(g_dragVol&&(wp&MK_LBUTTON)){int x=(short)LOWORD(lp);set_volume_from_x(x);return 0;}}
    if(msg==WM_LBUTTONUP){if(g_dragVol){g_dragVol=0;int x=(short)LOWORD(lp);set_volume_from_x(x);return 0;}}
    if(msg==WM_TIMER&&wp==TIMER_MAIN){if(g_playing&&g_wmp){int s=getint(g_wmp,L"playState",0);if(s==3)wcpy(g_status,L"\u0412 \u044d\u0444\u0438\u0440\u0435",128);else if(s==6)wcpy(g_status,L"\u0411\u0443\u0444\u0435\u0440\u0438\u0437\u0430\u0446\u0438\u044f...",128);else if(s==9)wcpy(g_status,L"\u041f\u043e\u0434\u043a\u043b\u044e\u0447\u0435\u043d\u0438\u0435...",128);}static int tick=0;tick++;if(tick>=15){tick=0;request_meta();}InvalidateRect(hwnd,0,FALSE);return 0;}
    if(msg==WM_APP_TRACK){
        int changed=0;if(g_pending.raw[0]&&(!g_lastRaw[0]||wlen(g_lastRaw)!=wlen(g_pending.raw)||!weq(g_lastRaw,g_pending.raw)))changed=1;
        if(changed){if(g_lastRaw[0]&&g_pending.historyCount==0)push_local_history(g_artist,g_track);wcpy(g_lastRaw,g_pending.raw,512);if(g_pending.artist[0])wcpy(g_artist,g_pending.artist,256);else wcpy(g_artist,L"Сейчас играет",256);wcpy(g_track,g_pending.title[0]?g_pending.title:g_pending.raw,384);if(g_pending.coverUrl[0])load_cover(g_pending.coverUrl);}
        if(g_pending.historyCount>0){g_historyCount=g_pending.historyCount;if(g_historyCount>10)g_historyCount=10;for(int i=0;i<g_historyCount;i++)memcpy(&g_history[i],&g_pending.history[i],sizeof(HISTITEM));}
        if(g_pending.metaStatus[0])wcpy(g_checked,g_pending.metaStatus,128);else if((int)wp==0)wcpy(g_checked,L"Не удалось получить метаданные",128);
        if(!g_pending.raw[0]&&(int)wp==0&&wistr(g_track,L"Получаю"))wcpy(g_track,L"Текущий трек пока недоступен",384);
        InvalidateRect(hwnd,0,TRUE);return 0;}
    if(msg==WM_DESTROY){KillTimer(hwnd,TIMER_MAIN);if(g_controls)g_controls->lpVtbl->Release(g_controls);if(g_settings)g_settings->lpVtbl->Release(g_settings);if(g_wmp)g_wmp->lpVtbl->Release(g_wmp);if(g_cover)g_cover->lpVtbl->Release(g_cover);if(fTitle)DeleteObject(fTitle);if(fFreq)DeleteObject(fFreq);if(fSmall)DeleteObject(fSmall);if(fArtist)DeleteObject(fArtist);if(fTrack)DeleteObject(fTrack);if(fButton)DeleteObject(fButton);CoUninitialize();PostQuitMessage(0);return 0;}
    return DefWindowProcW(hwnd,msg,wp,lp);
}

void wWinMainCRTStartup(void){
    CoInitializeEx(0,COINIT_APARTMENTTHREADED);
    HRESULT hr=CoCreateInstance(&CLSID_WMP,0,CLSCTX_INPROC_SERVER|CLSCTX_LOCAL_SERVER,&IID_IDispatch_,(void**)&g_wmp);
    if(FAILED(hr)||!g_wmp){MessageBoxW(0,L"Windows Media Player Legacy is required. Enable it in Windows Optional Features.",L"Piter FM",0x10);ExitProcess(1);}
    g_controls=getdisp(g_wmp,L"controls");g_settings=getdisp(g_wmp,L"settings");if(g_settings)setint(g_settings,L"volume",g_volume);
    INITCOMMONCONTROLSEX ic={sizeof(ic),ICC_BAR_CLASSES};InitCommonControlsEx(&ic);
    HINSTANCE hi=GetModuleHandleW(0);WNDCLASSEXW wc;memset(&wc,0,sizeof(wc));wc.cbSize=sizeof(wc);wc.lpfnWndProc=wndproc;wc.hInstance=hi;wc.hCursor=LoadCursorW(0,IDC_ARROW);wc.hIcon=LoadIconW(hi,(LPCWSTR)1);if(!wc.hIcon)wc.hIcon=LoadIconW(0,IDI_APPLICATION);wc.hIconSm=wc.hIcon;wc.lpszClassName=L"PiterFMNativeWindow";RegisterClassExW(&wc);
    g_hwnd=CreateWindowExW(0,wc.lpszClassName,L"Piter FM 100.9",WS_OVERLAPPED|WS_CAPTION|WS_SYSMENU|WS_MINIMIZEBOX,CW_USEDEFAULT,CW_USEDEFAULT,1016,639,0,0,hi,0);if(!g_hwnd){MessageBoxW(0,L"Cannot create application window.",L"Piter FM",0x10);ExitProcess(2);}
    fTitle=CreateFontW(40,0,0,0,FW_BOLD,0,0,0,DEFAULT_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH|FF_DONTCARE,L"Segoe UI");
    fFreq=CreateFontW(18,0,0,0,FW_NORMAL,0,0,0,DEFAULT_CHARSET,0,0,DEFAULT_QUALITY,0,L"Segoe UI");
    fSmall=CreateFontW(14,0,0,0,FW_NORMAL,0,0,0,DEFAULT_CHARSET,0,0,DEFAULT_QUALITY,0,L"Segoe UI");
    fArtist=CreateFontW(27,0,0,0,FW_BOLD,0,0,0,DEFAULT_CHARSET,0,0,DEFAULT_QUALITY,0,L"Segoe UI");
    fTrack=CreateFontW(21,0,0,0,FW_NORMAL,0,0,0,DEFAULT_CHARSET,0,0,DEFAULT_QUALITY,0,L"Segoe UI");
    fButton=CreateFontW(17,0,0,0,FW_BOLD,0,0,0,DEFAULT_CHARSET,0,0,DEFAULT_QUALITY,0,L"Segoe UI");
    g_play=CreateWindowExW(0,L"BUTTON",L"СЛУШАТЬ",WS_CHILD|WS_VISIBLE|WS_TABSTOP|BS_OWNERDRAW,32,405,120,62,g_hwnd,(HMENU)(ULONG_PTR)ID_PLAY,hi,0);SendMessageW(g_play,0x0030,(WPARAM)fButton,TRUE);
    g_refresh=CreateWindowExW(0,L"BUTTON",L"ОБНОВИТЬ",WS_CHILD|WS_VISIBLE|WS_TABSTOP|BS_OWNERDRAW,32,486,120,34,g_hwnd,(HMENU)(ULONG_PTR)ID_REFRESH,hi,0);SendMessageW(g_refresh,0x0030,(WPARAM)fSmall,TRUE);
    SetTimer(g_hwnd,TIMER_MAIN,1000,0);ShowWindow(g_hwnd,SW_SHOW);UpdateWindow(g_hwnd);request_meta();
    MSG m;while(GetMessageW(&m,0,0,0)>0){TranslateMessage(&m);DispatchMessageW(&m);}ExitProcess(0);
}
