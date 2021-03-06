/* include/internal/i486-pc-linux-gnu/ethread_header_config.h.  Generated from ethread_header_config.h.in by configure.  */
/*
 * %CopyrightBegin%
 * 
 * Copyright Ericsson AB 2004-2009. All Rights Reserved.
 * 
 * The contents of this file are subject to the Erlang Public License,
 * Version 1.1, (the "License"); you may not use this file except in
 * compliance with the License. You should have received a copy of the
 * Erlang Public License along with this software. If not, it can be
 * retrieved online at http://www.erlang.org/.
 * 
 * Software distributed under the License is distributed on an "AS IS"
 * basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See
 * the License for the specific language governing rights and limitations
 * under the License.
 * 
 * %CopyrightEnd%
 */

/* Define to the size of pointers */
#define ETHR_SIZEOF_PTR 4

/* Define if you want to disable native ethread implementations */
/* #undef ETHR_DISABLE_NATIVE_IMPLS */

/* Define if you have win32 threads */
/* #undef ETHR_WIN32_THREADS */

/* Define if you have pthreads */
#define ETHR_PTHREADS 1

/* Define if you have the <pthread.h> header file. */
#define ETHR_HAVE_PTHREAD_H 1

/* Define if the pthread.h header file is in pthread/mit directory. */
/* #undef ETHR_HAVE_MIT_PTHREAD_H */

/* Define if you have the pthread_mutexattr_settype function. */
#define ETHR_HAVE_PTHREAD_MUTEXATTR_SETTYPE 1

/* Define if you have the pthread_mutexattr_setkind_np function. */
#define ETHR_HAVE_PTHREAD_MUTEXATTR_SETKIND_NP 1

/* Define if you have the pthread_atfork function. */
#define ETHR_HAVE_PTHREAD_ATFORK 1

/* Define if you have the pthread_spin_lock function. */
#define ETHR_HAVE_PTHREAD_SPIN_LOCK 1

/* Define if you have a pthread_rwlock implementation that can be used */
/* #undef ETHR_HAVE_PTHREAD_RWLOCK_INIT */

/* Define if you want to turn on extra sanity checking in the ethread library */
/* #undef ETHR_XCHK */

