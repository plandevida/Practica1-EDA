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
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/57853592/main.o \
	${OBJECTDIR}/_ext/57853592/aux1.o \
	${OBJECTDIR}/_ext/57853592/test.o \
	${OBJECTDIR}/_ext/57853592/tiempo.o \
	${OBJECTDIR}/_ext/57853592/ordenacion.o


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

${OBJECTDIR}/_ext/57853592/main.o: /Volumes/Datos/Estudios/Univerisdad/segundo/Estructura\ de\ datos\ y\ algoritmos/eda/main.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/57853592
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/57853592/main.o /Volumes/Datos/Estudios/Univerisdad/segundo/Estructura\ de\ datos\ y\ algoritmos/eda/main.cpp

${OBJECTDIR}/_ext/57853592/aux1.o: /Volumes/Datos/Estudios/Univerisdad/segundo/Estructura\ de\ datos\ y\ algoritmos/eda/aux1.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/57853592
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/57853592/aux1.o /Volumes/Datos/Estudios/Univerisdad/segundo/Estructura\ de\ datos\ y\ algoritmos/eda/aux1.cpp

${OBJECTDIR}/_ext/57853592/test.o: /Volumes/Datos/Estudios/Univerisdad/segundo/Estructura\ de\ datos\ y\ algoritmos/eda/test.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/57853592
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/57853592/test.o /Volumes/Datos/Estudios/Univerisdad/segundo/Estructura\ de\ datos\ y\ algoritmos/eda/test.cpp

${OBJECTDIR}/_ext/57853592/tiempo.o: /Volumes/Datos/Estudios/Univerisdad/segundo/Estructura\ de\ datos\ y\ algoritmos/eda/tiempo.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/57853592
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/57853592/tiempo.o /Volumes/Datos/Estudios/Univerisdad/segundo/Estructura\ de\ datos\ y\ algoritmos/eda/tiempo.cpp

${OBJECTDIR}/_ext/57853592/ordenacion.o: /Volumes/Datos/Estudios/Univerisdad/segundo/Estructura\ de\ datos\ y\ algoritmos/eda/ordenacion.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/57853592
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/57853592/ordenacion.o /Volumes/Datos/Estudios/Univerisdad/segundo/Estructura\ de\ datos\ y\ algoritmos/eda/ordenacion.cpp

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
