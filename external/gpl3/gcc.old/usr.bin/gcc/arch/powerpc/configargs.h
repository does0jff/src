/* This file is automatically generated.  DO NOT EDIT! */
/* Generated from: NetBSD: mknative-gcc.old,v 1.5 2017/10/04 21:42:20 christos Exp  */
/* Generated from: NetBSD: mknative.common,v 1.15 2017/11/29 03:32:28 christos Exp  */

/* Generated automatically. */
#ifdef _SOFT_FLOAT
static const char configuration_arguments[] = "/usr/src/tools/gcc/../../external/gpl3/gcc.old/dist/configure --target=powerpc--netbsd --enable-long-long --enable-threads --with-bugurl=http://www.NetBSD.org/Misc/send-pr.html --with-pkgversion='NetBSD nb2 20180327' --with-system-zlib --disable-libstdcxx-dual-abi --enable-__cxa_atexit --enable-libstdcxx-time=rt --enable-libstdcxx-threads --with-diagnostics-color=auto-if-env --with-mpc-lib=/var/obj/mknative/macppc-powerpc/usr/src/external/lgpl3/mpc/lib/libmpc --with-mpfr-lib=/var/obj/mknative/macppc-powerpc/usr/src/external/lgpl3/mpfr/lib/libmpfr --with-gmp-lib=/var/obj/mknative/macppc-powerpc/usr/src/external/lgpl3/gmp/lib/libgmp --with-mpc-include=/usr/src/external/lgpl3/mpc/dist/src --with-mpfr-include=/usr/src/external/lgpl3/mpfr/dist/src --with-gmp-include=/usr/src/external/lgpl3/gmp/lib/libgmp/arch/powerpc --enable-tls --disable-multilib --disable-symvers --disable-libstdcxx-pch --disable-libstdcxx-dual-abi --build=x86_64-unknown-netbsd8.0 --host=powerpc--netbsd --with-sysroot=/var/obj/mknative/macppc-powerpc/usr/src/destdir.macppc -with-float=soft";
#else
static const char configuration_arguments[] = "/usr/src8/tools/gcc/../../external/gpl3/gcc.old/dist/configure --target=powerpc--netbsd --enable-long-long --enable-threads --with-bugurl=http://www.NetBSD.org/Misc/send-pr.html --with-pkgversion='NetBSD nb2 20180327' --with-system-zlib --disable-libstdcxx-dual-abi --enable-__cxa_atexit --enable-libstdcxx-time=rt --enable-libstdcxx-threads --with-diagnostics-color=auto-if-env --with-mpc-lib=/var/obj/mknative/macppc-powerpc/usr/src8/external/lgpl3/mpc/lib/libmpc --with-mpfr-lib=/var/obj/mknative/macppc-powerpc/usr/src8/external/lgpl3/mpfr/lib/libmpfr --with-gmp-lib=/var/obj/mknative/macppc-powerpc/usr/src8/external/lgpl3/gmp/lib/libgmp --with-mpc-include=/usr/src8/external/lgpl3/mpc/dist/src --with-mpfr-include=/usr/src8/external/lgpl3/mpfr/dist/src --with-gmp-include=/usr/src8/external/lgpl3/gmp/lib/libgmp/arch/powerpc --enable-tls --disable-multilib --disable-symvers --disable-libstdcxx-pch --disable-libstdcxx-dual-abi --build=x86_64-unknown-netbsd8.0 --host=powerpc--netbsd --with-sysroot=/var/obj/mknative/macppc-powerpc/usr/src8/destdir.macppc";
#endif
static const char thread_model[] = "posix";

static const struct {
  const char *name, *value;
} configure_default_options[] = { 
#ifdef _SOFT_FLOAT
  { "float", "soft" },
#endif
  { NULL, NULL }
};
