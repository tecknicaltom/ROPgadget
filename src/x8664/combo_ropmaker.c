/*
** RopGadget - Release v3.4.2
** Jonathan Salwan - http://twitter.com/JonathanSalwan
** Allan Wirth - http://allanwirth.com/
** http://shell-storm.org
** 2012-11-11
**
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; either version 2 of the License, or
** (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#include "ropgadget.h"

/* gadget necessary for combo */
/* don't touch this att syntax for parsing */
char *tab_x8664_ropmaker[] =
{
  "xor %rax,%rax",
  "mov %r?x,(%r?x)", CR_AND,
  "pop %rax", CR_AND,
  "pop %rbx", CR_AND,
  "pop %rcx", CR_AND,
  "pop %rdx", CR_AND,

    "inc %rax",
    "inc %eax",
    CR_OR,
    "inc %ax",
    CR_OR,
    "inc %al",
    CR_OR,
  CR_AND,

  "syscall", CR_AND,
  NULL
};
