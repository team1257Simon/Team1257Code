# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC603gnu
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
WS_ROOT_DIR := C:/Users/Nathan/Documents/GitHub/Team1257Code
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/Team1257MoreCode



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC603
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 

IDE_DEFINES = 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = -g
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif


#Project Targets
PROJECT_TARGETS = Team1257MoreCode_partialImage/$(MODE_DIR)/Team1257MoreCode_partialImage.o \
	 Team1257MoreCode/$(MODE_DIR)/Team1257MoreCode.out \
	 Team1257Lib/$(MODE_DIR)/Team1257Lib.a


#Rules

# Team1257MoreCode_partialImage
ifeq ($(DEBUG_MODE),1)
Team1257MoreCode_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
Team1257MoreCode_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
Team1257MoreCode_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
Team1257MoreCode_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
Team1257MoreCode_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
Team1257MoreCode_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
Team1257MoreCode_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
Team1257MoreCode_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
Team1257MoreCode_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
Team1257MoreCode_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
Team1257MoreCode_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
Team1257MoreCode_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
Team1257MoreCode_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
Team1257MoreCode_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
Team1257MoreCode_partialImage/$(MODE_DIR)/% : IDE_DEFINES = 
Team1257MoreCode_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
Team1257MoreCode_partialImage/$(MODE_DIR)/% : DEFINES = 
Team1257MoreCode_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
Team1257MoreCode_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
Team1257MoreCode_partialImage/$(MODE_DIR)/% : CPU = PPC603
Team1257MoreCode_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = gnu
Team1257MoreCode_partialImage/$(MODE_DIR)/% : TOOL = gnu
Team1257MoreCode_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
Team1257MoreCode_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
Team1257MoreCode_partialImage/$(MODE_DIR)/% : LIBPATH = 
Team1257MoreCode_partialImage/$(MODE_DIR)/% : LIBS = 
Team1257MoreCode_partialImage/$(MODE_DIR)/% : OBJ_DIR := Team1257MoreCode_partialImage/$(MODE_DIR)

Team1257MoreCode_partialImage/$(MODE_DIR)/Objects/Team1257MoreCode/Team1257Robot.o : $(PRJ_ROOT_DIR)/Team1257Robot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_Team1257MoreCode_partialImage = Team1257MoreCode_partialImage/$(MODE_DIR)/Objects/Team1257MoreCode/Team1257Robot.o

Team1257MoreCode_partialImage/$(MODE_DIR)/Team1257MoreCode_partialImage.o : $(OBJECTS_Team1257MoreCode_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X  -o "$@" $(OBJECTS_Team1257MoreCode_partialImage) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS)  && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

Team1257MoreCode_partialImage/$(MODE_DIR)/Team1257MoreCode_partialImage_compile_file : $(FILE) ;

_clean :: Team1257MoreCode_partialImage/$(MODE_DIR)/Team1257MoreCode_partialImage_clean

Team1257MoreCode_partialImage/$(MODE_DIR)/Team1257MoreCode_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "Team1257MoreCode_partialImage" ]; then cd "Team1257MoreCode_partialImage"; rm -rf $(MODE_DIR); fi


# Team1257MoreCode
ifeq ($(DEBUG_MODE),1)
Team1257MoreCode/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
Team1257MoreCode/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
Team1257MoreCode/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
Team1257MoreCode/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
Team1257MoreCode/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
Team1257MoreCode/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
Team1257MoreCode/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
Team1257MoreCode/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
Team1257MoreCode/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
Team1257MoreCode/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
Team1257MoreCode/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
Team1257MoreCode/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
Team1257MoreCode/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
Team1257MoreCode/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
Team1257MoreCode/$(MODE_DIR)/% : IDE_DEFINES = 
Team1257MoreCode/$(MODE_DIR)/% : PROJECT_TYPE = DKM
Team1257MoreCode/$(MODE_DIR)/% : DEFINES = 
Team1257MoreCode/$(MODE_DIR)/% : EXPAND_DBG = 0
Team1257MoreCode/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
Team1257MoreCode/$(MODE_DIR)/% : CPU = PPC603
Team1257MoreCode/$(MODE_DIR)/% : TOOL_FAMILY = gnu
Team1257MoreCode/$(MODE_DIR)/% : TOOL = gnu
Team1257MoreCode/$(MODE_DIR)/% : TOOL_PATH = 
Team1257MoreCode/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
Team1257MoreCode/$(MODE_DIR)/% : LIBPATH = 
Team1257MoreCode/$(MODE_DIR)/% : LIBS = 
Team1257MoreCode/$(MODE_DIR)/% : OBJ_DIR := Team1257MoreCode/$(MODE_DIR)

OBJECTS_Team1257MoreCode = Team1257MoreCode_partialImage/$(MODE_DIR)/Team1257MoreCode_partialImage.o

Team1257MoreCode/$(MODE_DIR)/Team1257MoreCode.out : $(OBJECTS_Team1257MoreCode)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_Team1257MoreCode) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_Team1257MoreCode) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

Team1257MoreCode/$(MODE_DIR)/Team1257MoreCode_compile_file : $(FILE) ;

_clean :: Team1257MoreCode/$(MODE_DIR)/Team1257MoreCode_clean

Team1257MoreCode/$(MODE_DIR)/Team1257MoreCode_clean : 
	$(TRACE_FLAG)if [ -d "Team1257MoreCode" ]; then cd "Team1257MoreCode"; rm -rf $(MODE_DIR); fi


# Team1257Lib
ifeq ($(DEBUG_MODE),1)
Team1257Lib/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
Team1257Lib/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
Team1257Lib/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
Team1257Lib/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
Team1257Lib/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
Team1257Lib/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
Team1257Lib/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
Team1257Lib/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
Team1257Lib/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
Team1257Lib/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
Team1257Lib/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
Team1257Lib/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
Team1257Lib/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
Team1257Lib/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
Team1257Lib/$(MODE_DIR)/% : IDE_DEFINES = 
Team1257Lib/$(MODE_DIR)/% : PROJECT_TYPE = DKM
Team1257Lib/$(MODE_DIR)/% : DEFINES = 
Team1257Lib/$(MODE_DIR)/% : EXPAND_DBG = 0
Team1257Lib/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
Team1257Lib/$(MODE_DIR)/% : CPU = PPC603
Team1257Lib/$(MODE_DIR)/% : TOOL_FAMILY = gnu
Team1257Lib/$(MODE_DIR)/% : TOOL = gnu
Team1257Lib/$(MODE_DIR)/% : TOOL_PATH = 
Team1257Lib/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
Team1257Lib/$(MODE_DIR)/% : LIBPATH = 
Team1257Lib/$(MODE_DIR)/% : LIBS = 
Team1257Lib/$(MODE_DIR)/% : OBJ_DIR := Team1257Lib/$(MODE_DIR)

Team1257Lib/$(MODE_DIR)/Objects/Team1257MoreCode/Team1257Robot.o : $(PRJ_ROOT_DIR)/Team1257Robot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_Team1257Lib = Team1257Lib/$(MODE_DIR)/Objects/Team1257MoreCode/Team1257Robot.o

Team1257Lib/$(MODE_DIR)/Team1257Lib.a : $(OBJECTS_Team1257Lib)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)arppc crus "$@" $(OBJECTS_Team1257Lib)

Team1257Lib/$(MODE_DIR)/Team1257Lib_compile_file : $(FILE) ;

_clean :: Team1257Lib/$(MODE_DIR)/Team1257Lib_clean

Team1257Lib/$(MODE_DIR)/Team1257Lib_clean : 
	$(TRACE_FLAG)if [ -d "Team1257Lib" ]; then cd "Team1257Lib"; rm -rf $(MODE_DIR); fi

force : 

DEP_FILES := Team1257MoreCode_partialImage/$(MODE_DIR)/Objects/Team1257MoreCode/Team1257Robot.d Team1257Lib/$(MODE_DIR)/Objects/Team1257MoreCode/Team1257Robot.d
-include $(DEP_FILES)



-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

main_all : external_build $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
