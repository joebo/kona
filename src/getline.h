K _p();
S strdupn(S s,I k);
I strlenn(S s,I k);
I getdelim_(S *s,size_t * __restrict__ n,I d,FILE *f);
I getline_(S *s,size_t * __restrict__ n,FILE *f);
I appender(S *s,I *n,S t,I k);
I expander(S *s,I n);

#if defined(__OpenBSD__) || defined(__NetBSD__) || \
   (defined(__MACH__) && __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ < 1070) || \
   defined(__ANDROID__)
I getline(S *s,size_t * __restrict__ n,FILE *f);
I getdelim(S *s,size_t * __restrict__ n,I d,FILE *f);
#endif

#if WIN32
I getdelim(S*s,I*n,I d,FILE *f);
#endif
