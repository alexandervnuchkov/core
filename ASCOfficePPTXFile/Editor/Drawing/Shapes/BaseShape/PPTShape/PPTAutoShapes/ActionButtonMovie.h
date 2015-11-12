#pragma once
#include "../PPTShape.h"

// 200
class CActionButtonMovieType : public CPPTShape
{
public:
	CActionButtonMovieType()

    {
        m_bConcentricFill = true;
		m_eJoin = NSOfficeDrawing::lineJoinMiter;
        
		m_strPath = _T("m,l,21600r21600,l21600,xem@0@0nfl@0@2@1@2@1@0xem,nfl@0@0em,21600nfl@0@2em21600,21600nfl@1@2em21600,nfl@1@0em@11@39nfl@11@44@31@44@32@43@33@43@33@47@35@47@35@45@36@45@38@46@12@46@12@41@38@41@37@42@35@42@35@41@34@40@32@40@31@39xe");

		AddGuide(_T("val #0"));  
		AddGuide(_T("sum width 0 #0"));  
		AddGuide(_T("sum height 0 #0"));  
		AddGuide(_T("prod width 1 2"));  
		AddGuide(_T("prod height 1 2"));  
		AddGuide(_T("prod #0 1 2"));  
		AddGuide(_T("prod #0 3 2"));  
		AddGuide(_T("sum @1 @5 0"));  
		AddGuide(_T("sum @2 @5 0"));
		AddGuide(_T("sum @0 @4 8100"));  
		AddGuide(_T("sum @2 8100 @4"));  
		AddGuide(_T("sum @0 @3 8100"));  
		AddGuide(_T("sum @1 8100 @3"));  
		AddGuide(_T("sum @10 0 @9"));  
		AddGuide(_T("prod @13 1455 21600"));  
		AddGuide(_T("prod @13 1905 21600"));  
		AddGuide(_T("prod @13 2325 21600"));  
		AddGuide(_T("prod @13 16155 21600"));  
		AddGuide(_T("prod @13 17010 21600"));  
		AddGuide(_T("prod @13 19335 21600"));  
		AddGuide(_T("prod @13 19725 21600"));  
		AddGuide(_T("prod @13 20595 21600"));  
		AddGuide(_T("prod @13 5280 21600"));  
		AddGuide(_T("prod @13 5730 21600"));  
		AddGuide(_T("prod @13 6630 21600"));  
		AddGuide(_T("prod @13 7492 21600"));  
		AddGuide(_T("prod @13 9067 21600"));  
		AddGuide(_T("prod @13 9555 21600"));  
		AddGuide(_T("prod @13 13342 21600"));  
		AddGuide(_T("prod @13 14580 21600"));  
		AddGuide(_T("prod @13 15592 21600"));  
		AddGuide(_T("sum @11 @14 0"));  
		AddGuide(_T("sum @11 @15 0"));  
		AddGuide(_T("sum @11 @16 0"));  
		AddGuide(_T("sum @11 @17 0"));  
		AddGuide(_T("sum @11 @18 0"));  
		AddGuide(_T("sum @11 @19 0"));  
		AddGuide(_T("sum @11 @20 0"));  
		AddGuide(_T("sum @11 @21 0"));  
		AddGuide(_T("sum @9 @22 0"));  
		AddGuide(_T("sum @9 @23 0"));  
		AddGuide(_T("sum @9 @24 0"));  
		AddGuide(_T("sum @9 @25 0"));  
		AddGuide(_T("sum @9 @26 0"));  
		AddGuide(_T("sum @9 @27 0"));  
		AddGuide(_T("sum @9 @28 0"));  
		AddGuide(_T("sum @9 @29 0"));  
		AddGuide(_T("sum @9 @30 0"));  
		AddGuide(_T("sum @9 @31 0"));  
		AddGuide(_T("sum @4 @5 0"));  
		AddGuide(_T("sum @9 @5 0"));  
		AddGuide(_T("sum @10 @5 0"));  
		AddGuide(_T("sum @11 @5 0"));  
		AddGuide(_T("sum @12 @5 0"));  
		AddGuide(_T("sum @31 @5 0"));  
		AddGuide(_T("sum @32 @5 0"));  
		AddGuide(_T("sum @33 @5 0"));  
		AddGuide(_T("sum @34 @5 0"));
		AddGuide(_T("sum @35 @5 0"));  
		AddGuide(_T("sum @36 @5 0"));  
		AddGuide(_T("sum @37 @5 0"));  
		AddGuide(_T("sum @38 @5 0"));  
		AddGuide(_T("sum @39 @5 0"));  
		AddGuide(_T("sum @40 @5 0"));  
		AddGuide(_T("sum @41 @5 0"));  
		AddGuide(_T("sum @42 @5 0"));  
		AddGuide(_T("sum @43 @5 0"));  
		AddGuide(_T("sum @44 @5 0"));  
		AddGuide(_T("sum @45 @5 0"));  
		AddGuide(_T("sum @46 @5 0"));  
		AddGuide(_T("sum @47 @5 0")); 

		m_arAdjustments.push_back(1350);
		LoadConnectorsList(_T("0,@4;@0,@4;@3,21600;@3,@2;21600,@4;@1,@4;@3,0;@3,@0"));
		LoadTextRect(_T("@0,@0,@1,@2"));

		CHandle_ oHandle1;
		oHandle1.position = _T("#0,topLeft");
		oHandle1.switchHandle = _T("true");
		oHandle1.xrange = _T("0,5400");
		m_arHandles.push_back(oHandle1);

		m_lLimoX = 10800;
		m_lLimoY = 10800;
    }
};