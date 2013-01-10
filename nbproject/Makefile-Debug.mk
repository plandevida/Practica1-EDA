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
CND_PLATFORM=GNU-MacOSX
CND_DLIB_EXT=dylib
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/131051141/test.o \
	${OBJECTDIR}/_ext/131051141/tiempo.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/_ext/131051141/aux1.o \
	${OBJECTDIR}/_ext/131051141/ordenacion.o


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
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/practica1-eda

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/practica1-eda: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/practica1-eda ${OBJECTFILES} ${LDLIBSOPTIONS} 

${OBJECTDIR}/_ext/131051141/test.o: /Users/dserrano/git/Practica1-EDA/test.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/131051141
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/131051141/test.o /Users/dserrano/git/Practica1-EDA/test.cpp

${OBJECTDIR}/_ext/131051141/tiempo.o: /Users/dserrano/git/Practica1-EDA/tiempo.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/131051141
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/131051141/tiempo.o /Users/dserrano/git/Practica1-EDA/tiempo.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/_ext/131051141/aux1.o: /Users/dserrano/git/Practica1-EDA/aux1.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/131051141
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/131051141/aux1.o /Users/dserrano/git/Practica1-EDA/aux1.cpp

${OBJECTDIR}/_ext/131051141/ordenacion.o: /Users/dserrano/git/Practica1-EDA/ordenacion.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/131051141
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/131051141/ordenacion.o /Users/dserrano/git/Practica1-EDA/ordenacion.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/practica1-eda

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
