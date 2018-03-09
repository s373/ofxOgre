
#ifndef _OgreEXRPluginExport_H
#define _OgreEXRPluginExport_H

#ifdef PLUGIN_EXRCODEC_STATIC_DEFINE
#  define _OgreEXRPluginExport
#  define PLUGIN_EXRCODEC_NO_EXPORT
#else
#  ifndef _OgreEXRPluginExport
#    ifdef Plugin_EXRCodec_EXPORTS
        /* We are building this library */
#      define _OgreEXRPluginExport 
#    else
        /* We are using this library */
#      define _OgreEXRPluginExport 
#    endif
#  endif

#  ifndef PLUGIN_EXRCODEC_NO_EXPORT
#    define PLUGIN_EXRCODEC_NO_EXPORT 
#  endif
#endif

#ifndef PLUGIN_EXRCODEC_DEPRECATED
#  define PLUGIN_EXRCODEC_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef PLUGIN_EXRCODEC_DEPRECATED_EXPORT
#  define PLUGIN_EXRCODEC_DEPRECATED_EXPORT _OgreEXRPluginExport PLUGIN_EXRCODEC_DEPRECATED
#endif

#ifndef PLUGIN_EXRCODEC_DEPRECATED_NO_EXPORT
#  define PLUGIN_EXRCODEC_DEPRECATED_NO_EXPORT PLUGIN_EXRCODEC_NO_EXPORT PLUGIN_EXRCODEC_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef PLUGIN_EXRCODEC_NO_DEPRECATED
#    define PLUGIN_EXRCODEC_NO_DEPRECATED
#  endif
#endif

#endif
