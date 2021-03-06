#ifndef __UITABLAYOUT_H__
#define __UITABLAYOUT_H__

#pragma once

namespace UiLib
{
	class UILIB_API CTabLayoutUI : public CContainerUI
	{
	public:
		CTabLayoutUI();

		LPCTSTR GetClass() const;
		LPVOID GetInterface(LPCTSTR pstrName);

		bool Add(CControlUI* pControl);
		bool AddAt(CControlUI* pControl, int iIndex);
		bool Remove(CControlUI* pControl);
		void RemoveAll(bool bUpdate = true);
		int GetCurSel() const;
		virtual bool SelectItem(int iIndex);
		bool SelectItem(CControlUI* pControl);

		void SetPos(RECT rc);

		void SetAttribute(LPCTSTR pstrName, LPCTSTR pstrValue);
	protected:
		int m_iCurSel;
		int m_iOldSel;
	};
}
#endif // __UITABLAYOUT_H__
