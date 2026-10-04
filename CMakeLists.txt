cmake_minimum_required(VERSION 3.10)
project(RebrushedAP)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_library(version SHARED
    ${CMAKE_SOURCE_DIR}/src/Entrypoint.cpp
    ${CMAKE_SOURCE_DIR}/src/Console.cpp
    ${CMAKE_SOURCE_DIR}/src/Proxy.cpp
    ${CMAKE_SOURCE_DIR}/src/Rebrushed/AP.cpp
    ${CMAKE_SOURCE_DIR}/src/Rebrushed/GameData.cpp
    ${CMAKE_SOURCE_DIR}/src/Game/URecToastNotificationManager.cpp
    ${CMAKE_SOURCE_DIR}/src/Game/URecInventoryUtils.cpp
    ${CMAKE_SOURCE_DIR}/src/Game/URecChangeInventoryComponent.cpp
    ${CMAKE_SOURCE_DIR}/src/Game/ARecBaseCharacter.cpp
    ${CMAKE_SOURCE_DIR}/src/Game/URecAbilityUtils.cpp
    ${CMAKE_SOURCE_DIR}/src/Game/UPL_HealthAttributeSet.cpp
    ${CMAKE_SOURCE_DIR}/src/Game/UPL_SaveGameSystem.cpp
    ${CMAKE_SOURCE_DIR}/src/Game/UPL_SaveGameUtils.cpp
    ${CMAKE_SOURCE_DIR}/src/Game/URecGameInstance.cpp
    ${CMAKE_SOURCE_DIR}/src/Utils/Hook.cpp
    ${CMAKE_SOURCE_DIR}/src/Engine/FUObjectArray.cpp
    ${CMAKE_SOURCE_DIR}/src/Engine/AActor.cpp
    ${CMAKE_SOURCE_DIR}/src/Engine/FText.cpp
    ${CMAKE_SOURCE_DIR}/src/Engine/FName.cpp
    ${CMAKE_SOURCE_DIR}/src/Engine/Functions.cpp
    ${CMAKE_SOURCE_DIR}/src/Engine/UObject.cpp
    ${CMAKE_SOURCE_DIR}/src/Engine/UStaticMesh.cpp
    ${CMAKE_SOURCE_DIR}/src/Engine/UTexture2D.cpp
    ${CMAKE_SOURCE_DIR}/src/Engine/UStaticMeshComponent.cpp
    ${CMAKE_SOURCE_DIR}/src/Engine/UActorComponent.cpp
    ${CMAKE_SOURCE_DIR}/src/Engine/USceneComponent.cpp
    ${CMAKE_SOURCE_DIR}/src/Engine/UMeshComponent.cpp
    ${CMAKE_SOURCE_DIR}/src/Engine/UMaterialInterface.cpp
    ${CMAKE_SOURCE_DIR}/src/Engine/UMaterial.cpp
    ${CMAKE_SOURCE_DIR}/version.def
)

target_compile_options(version PRIVATE -Wno-invalid-offsetof)

target_include_directories(version PRIVATE
    ${CMAKE_SOURCE_DIR}/include
)

target_link_libraries(version
    Shlwapi.lib
)

set_target_properties(version PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)