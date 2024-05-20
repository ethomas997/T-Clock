#ifndef AUTOVERSION_H
#define AUTOVERSION_H
/* Note: to use integer defines as strings, use STR(), eg. STR(VER_REVISION) */
/**** Version ****/
#	define VER_MAJOR 3
#	define VER_MINOR 0
#	define VER_BUILD 0
	/** status values: 0=Alpha(α), 1=Beta(β), 2=RC(гc), 3=Release(г), 4=Maintenance(гm) */
#	define VER_STATUS 1
#	define VER_STATUS_FULL "Beta"
#	define VER_STATUS_SHORT "b"
#	define VER_STATUS_GREEK "\u03B2"
#	define VER_REVISION 531
#	define VER_FULL "3.0.0 Beta"
#	define VER_SHORT "3.0b0"
#	define VER_SHORT_DOTS "3.0.0"
#	define VER_SHORT_GREEK "3.0\u03B20"
#	define VER_RC_REVISION 3, 0, 0, 531
#	define VER_RC_STATUS 3, 0, 0, 1
/**** Subversion Information ****/
#	define VER_REVISION_URL "https://github.com/ethomas997/T-Clock.git"
#	define VER_REVISION_DATE "2018-06-08 08:42:06 +0000 (Fri, Jun 08 2018)"
#	define VER_REVISION_HASH "2eb7e2a"
#	define VER_REVISION_TAG "v3.0.0#531-beta"
/**** Date/Time ****/
#	define VER_TIMESTAMP 1716184533
#	define VER_TIME_SEC 33
#	define VER_TIME_MIN 55
#	define VER_TIME_HOUR 5
#	define VER_TIME_DAY 20
#	define VER_TIME_MONTH 5
#	define VER_TIME_YEAR 2024
#	define VER_TIME_WDAY 1
#	define VER_TIME_YDAY 140
#	define VER_TIME_WDAY_SHORT "Mon"
#	define VER_TIME_WDAY_FULL "Monday"
#	define VER_TIME_MONTH_SHORT "May"
#	define VER_TIME_MONTH_FULL "May"
#	define VER_TIME "05:55:33"
#	define VER_DATE "2024-05-20"
#	define VER_DATE_LONG "Mon, May 20, 2024 05:55:33 UTC"
#	define VER_DATE_SHORT "2024-05-20 05:55:33 UTC"
#	define VER_DATE_ISO "2024-05-20T05:55:33Z"
/**** Helper 'functions' ****/
#	define VER_IsReleaseOrHigher() ( VER_STATUS >= 3 )
#	define VER_IsAlpha() ( VER_STATUS == 0 )
#	define VER_IsBeta() ( VER_STATUS == 1 )
#	define VER_IsRC() ( VER_STATUS == 2 )
#	define VER_IsRelease() ( VER_STATUS == 3 )
#	define VER_IsMaintenance() ( VER_STATUS == 4 )
#ifndef STR
#	define STR_(x) #x
#	define STR(x) STR_(x)
#endif
#ifndef L
#	define L_(x) L##x
#	define L(x) L_(x)
#endif
#endif
