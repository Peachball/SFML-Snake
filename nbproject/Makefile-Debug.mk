#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin_4.x-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Board.o \
	${OBJECTDIR}/Frame.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=../Libs/SFML-2.2/lib/libfreetype.a ../Libs/SFML-2.2/lib/libglew32.a ../Libs/SFML-2.2/lib/libjpeg.a ../Libs/SFML-2.2/lib/libopenal32.a ../Libs/SFML-2.2/lib/libsfml-audio-d.a ../Libs/SFML-2.2/lib/libsfml-audio-s-d.a ../Libs/SFML-2.2/lib/libsfml-audio-s.a ../Libs/SFML-2.2/lib/libsfml-audio.a ../Libs/SFML-2.2/lib/libsfml-graphics-d.a ../Libs/SFML-2.2/lib/libsfml-graphics-s-d.a ../Libs/SFML-2.2/lib/libsfml-graphics-s.a ../Libs/SFML-2.2/lib/libsfml-graphics.a ../Libs/SFML-2.2/lib/libsfml-main-d.a ../Libs/SFML-2.2/lib/libsfml-main.a ../Libs/SFML-2.2/lib/libsfml-network-d.a ../Libs/SFML-2.2/lib/libsfml-network-s-d.a ../Libs/SFML-2.2/lib/libsfml-network-s.a ../Libs/SFML-2.2/lib/libsfml-network.a ../Libs/SFML-2.2/lib/libsfml-system-d.a ../Libs/SFML-2.2/lib/libsfml-system-s-d.a ../Libs/SFML-2.2/lib/libsfml-system-s.a ../Libs/SFML-2.2/lib/libsfml-system.a ../Libs/SFML-2.2/lib/libsfml-window-d.a ../Libs/SFML-2.2/lib/libsfml-window-s-d.a ../Libs/SFML-2.2/lib/libsfml-window-s.a ../Libs/SFML-2.2/lib/libsfml-window.a ../Libs/SFML-2.2/lib/libsndfile.a

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/snake.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/snake.exe: ../Libs/SFML-2.2/lib/libfreetype.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/snake.exe: ../Libs/SFML-2.2/lib/libglew32.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/snake.exe: ../Libs/SFML-2.2/lib/libjpeg.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/snake.exe: ../Libs/SFML-2.2/lib/libopenal32.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/snake.exe: ../Libs/SFML-2.2/lib/libsfml-audio-d.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/snake.exe: ../Libs/SFML-2.2/lib/libsfml-audio-s-d.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/snake.exe: ../Libs/SFML-2.2/lib/libsfml-audio-s.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/snake.exe: ../Libs/SFML-2.2/lib/libsfml-audio.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/snake.exe: ../Libs/SFML-2.2/lib/libsfml-graphics-d.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/snake.exe: ../Libs/SFML-2.2/lib/libsfml-graphics-s-d.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/snake.exe: ../Libs/SFML-2.2/lib/libsfml-graphics-s.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/snake.exe: ../Libs/SFML-2.2/lib/libsfml-graphics.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/snake.exe: ../Libs/SFML-2.2/lib/libsfml-main-d.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/snake.exe: ../Libs/SFML-2.2/lib/libsfml-main.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/snake.exe: ../Libs/SFML-2.2/lib/libsfml-network-d.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/snake.exe: ../Libs/SFML-2.2/lib/libsfml-network-s-d.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/snake.exe: ../Libs/SFML-2.2/lib/libsfml-network-s.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/snake.exe: ../Libs/SFML-2.2/lib/libsfml-network.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/snake.exe: ../Libs/SFML-2.2/lib/libsfml-system-d.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/snake.exe: ../Libs/SFML-2.2/lib/libsfml-system-s-d.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/snake.exe: ../Libs/SFML-2.2/lib/libsfml-system-s.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/snake.exe: ../Libs/SFML-2.2/lib/libsfml-system.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/snake.exe: ../Libs/SFML-2.2/lib/libsfml-window-d.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/snake.exe: ../Libs/SFML-2.2/lib/libsfml-window-s-d.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/snake.exe: ../Libs/SFML-2.2/lib/libsfml-window-s.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/snake.exe: ../Libs/SFML-2.2/lib/libsfml-window.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/snake.exe: ../Libs/SFML-2.2/lib/libsndfile.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/snake.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/snake ${OBJECTFILES} ${LDLIBSOPTIONS} -lncurses

${OBJECTDIR}/Board.o: Board.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../Libs/SFML-2.2/include/SFML -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Board.o Board.cpp

${OBJECTDIR}/Frame.o: Frame.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../Libs/SFML-2.2/include/SFML -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Frame.o Frame.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../Libs/SFML-2.2/include/SFML -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/snake.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
