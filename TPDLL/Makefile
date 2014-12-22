##
## Makefile for Makefile in /home/payan_a
## 
## Made by Axel PAYAN
## Login   <payan_a@epitech.net>
## 
## Started on  Thu Feb 20 14:05:49 2014 Axel PAYAN
## Last update Sat Apr  5 14:15:39 2014 Axel PAYAN
##

NAME		= test

ASMFLAGS	=
CFLAGS		=
CXXFLAGS	=
LDFLAGS		= -ldl

SRCSASM		=

SRCS		=

SRCSXX		= main.cpp \
		  DlLoader.cpp

ASM		= nasm
CC		= gcc
CXX		= g++
RM		= rm -f
RMDIR		= rm -rf
MKDIR		= mkdir -p
CPY		= cp
TAR		= tar -cf
MAKE		= make -s -C

SRCDIR		= src
HEADDIR		= include
OBJDIR		= obj
BINDIR		= .
INSTALLDIR	= /bin

VPATH		= $(SRCDIR):$(OBJDIR):$(BINDIR)

ASMFLAGS	+= -f elf64
CFLAGS		+= -I$(SRCDIR) -I$(HEADDIR) -Wall -Wextra
CXXFLAGS	+= -I$(SRCDIR) -I$(HEADDIR) -Wall -Wextra

LDFLAGS		+= -lstdc++

debug		= 0

ifeq ($(debug), 1)
CFLAGS		+= -g
CXXFLAGS	+= -g
endif
ifeq ($(debug), 2)
CFLAGS		+= -g2
CXXFLAGS	+= -g2
endif
ifeq ($(debug), 3)
CFLAGS		+= -g3
CXXFLAGS	+= -g3
endif

OBJSASM		= $(SRCSASM:%.S=%.S.o)

OBJS		= $(SRCS:%.c=%.c.o)

OBJSXX		= $(SRCSXX:%.cpp=%.cpp.o)

all:		compilate $(NAME)
		@echo "ENDING"

$(NAME):	$(addprefix $(OBJDIR)/, $(OBJS)) $(addprefix $(OBJDIR)/, $(OBJSXX))
		@if [ ! -d "./$(BINDIR)" ]; then $(MKDIR) $(BINDIR); echo " (MKDIR) $(BINDIR)"; fi
		@$(CC) $^ $(LDFLAGS) -o $(BINDIR)/$(NAME)
		@echo " (CC)  $(BINDIR)/$(NAME)"

compilate:
		@echo "COMPILATING"

clean:
		@$(RM) $(addprefix $(OBJDIR)/, $(OBJS)) $(addprefix $(OBJDIR)/, $(OBJSXX))
		@echo "CLEANING"
		@echo " (RM)$(OBJS) $(OBJSXX)"

fclean:
		@$(RM) $(addprefix $(OBJDIR)/, $(OBJS)) $(addprefix $(OBJDIR)/, $(OBJSXX))
		@echo "CLEANING"
		@echo " (RM)$(OBJS) $(OBJSXX)"
		@$(RM) $(BINDIR)/$(NAME)
		@echo " (RM) $(NAME)"

dclean:
		@$(RMDIR) $(OBJDIR) $(NAME)
		@echo "CLEANING"
		@echo " (RM) $(OBJS) $(OBJSXX)"
		@echo " (RM) $(NAME)"

re:		fclean all

prepare:
		@if [ ! -d "./$(SRCDIR)" ]; then $(MKDIR) $(SRCDIR); echo " (MKDIR) $(SRCDIR)"; fi
		@if [ ! -d "./$(HEADDIR)" ]; then $(MKDIR) $(HEADDIR); echo " (MKDIR) $(HEADDIR)"; fi

packed:		dclean
		@$(TAR) $(NAME).tar Makefile $(SRCDIR) $(HEADDIR)
		@echo "TARBALL"
		@echo " (TAR) $(NAME).tar"

install:	all
		@$(CPY) $(BINDIR)/$(NAME) $(INSTALLDIR)
		@echo "INSTALL"
		@echo " (CPY) $(NAME)"

$(OBJDIR)/%.S.o:	%.S
			@if [ ! -d "./$(OBJDIR)" ]; then $(MKDIR) $(OBJDIR); echo " (MKDIR) $(OBJDIR)"; fi
			@$(CS) $(CSFLAGS) -o $@ -c $<
			@echo " (CC)  $@"

$(OBJDIR)/%.c.o:	%.c
			@if [ ! -d "./$(OBJDIR)" ]; then $(MKDIR) $(OBJDIR); echo " (MKDIR) $(OBJDIR)"; fi
			@$(CC) $(CFLAGS) -o $@ -c $<
			@echo " (CC)  $@"

$(OBJDIR)/%.cpp.o:	%.cpp
			@if [ ! -d "./$(OBJDIR)" ]; then $(MKDIR) $(OBJDIR); echo " (MKDIR) $(OBJDIR)"; fi
			@$(CXX) $(CXXFLAGS) -o $@ -c $<
			@echo " (CXX) $@"

.PHONY:		all compilate clean fclean dclean re prepare packed install
