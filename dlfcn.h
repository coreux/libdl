/*
 * Copyright 2013 Mo McRoberts.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

/*
http://pubs.opengroup.org/onlinepubs/009695399/basedefs/dlfcn.h.html
*/

#ifndef __UX_DLFCN_H
# define __UX_DLFCN_H                  1

# include <ux/cdefs.h>

/* Relocations are performed at an implementation-defined time. */
# define RTLD_LAZY                     0
/* Relocations are performed when the object is loaded. */
# define RTLD_NOW                      (1<<0)

/* All symbols are available for relocation processing of other modules. */
# define RTLD_GLOBAL                   0

/* All symbols are not made available for relocation processing by other modules. */
# define RTLD_LOCAL                    (1<<1)

__UX_BEGIN_DECLS

/* close a dlopened object */
int dlclose(void *module) __UX_SYM03(dlclose);
/* obtain diagnostic information */
char *dlerror(void) __UX_SYM03(dlerror);
/* open an executable file */
void *dlopen(const char *pathname, int flags) __UX_SYM03(dlopen);
/* locate a symbol within a dlopened object */
void  *dlsym(void *restrict module, const char *restrict symbol) __UX_SYM03(dlsym);

__UX_END_DECLS

#endif /*!__UX_DLFCN_H*/
