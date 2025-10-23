# CMakeList.txt : projet CMake pour on_va_tout_faire_ici, incluez la source et définissez
# la logique spécifique au projet ici.
#
cmake_minimum_required (VERSION 3.8)

# Activez Rechargement à chaud pour les compilateurs MSVC si cela est pris en charge.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("on_va_tout_faire_ici")

# Ajoutez une source à l'exécutable de ce projet.
add_executable (on_va_tout_faire_ici "on_va_tout_faire_ici.cpp" "on_va_tout_faire_ici.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET on_va_tout_faire_ici PROPERTY CXX_STANDARD 20)
endif()

# TODO: Ajoutez des tests et installez des cibles si nécessaire.
