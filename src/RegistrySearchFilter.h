/* Copyright 2022 the SumatraPDF project authors (see AUTHORS file).
   License: GPLv3 */

#define kPdfFilterClsid L"{55808EA8-81FE-43c6-AAE8-1D8149F941D3}"
#define kPdfFilterHandler L"{26CA6565-F22A-4f5e-B688-0AD051D56E96}"

#define kTexFilterClsid L"{AF57F784-ED93-4f2c-8C1D-CCDCB6E27CA6}"
#define kTexFilterHandler L"{3FAB27F8-08EC-4b9e-9EEE-181A6E846B8D}"

#define kEpubFilterClsid L"{FE4C7847-4260-43e3-A449-08ED76009F94}"
#define kEpubFilterHandler L"{FF68D1A0-DA54-4fbf-A406-06CFDB764CA9}"

bool InstallSearchFiler(const WCHAR* dllPath, bool allUsers);
bool UninstallSearchFilter();
bool IsSearchFilterInstalled();